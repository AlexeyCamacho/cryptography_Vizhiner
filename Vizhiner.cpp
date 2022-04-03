#include "Vizhiner.h"

Vizhiner::Vizhiner(const char ABC[]) {
	this->ABC.assign(ABC, ABC + 33);
}

string Vizhiner::encrypt(string text, string key) {
	string result;

	text = validate(text);
	key = validate(key);

	vector<int> shift = GetPositions(key);

	for (unsigned int i = 0; i < text.length(); i++) {
		vector<char>::iterator itr = find(ABC.begin(), ABC.end(), text[i]);

		result += ABC[(distance(ABC.begin(), itr) + shift[i % key.length()]) % ABC.size()];
	}

	return result;
};

string Vizhiner::decrypt(string text, string key) {
	string result;

	key = validate(key);

	vector<int> shift = GetPositions(key);

	for (unsigned int i = 0; i < text.length(); i++) {
		vector<char>::iterator itr = find(ABC.begin(), ABC.end(), text[i]);

		int x = (distance(ABC.begin(), itr) - shift[i % key.length()]);
		if (x < 0) { x += ABC.size(); }

		result += ABC[x % ABC.size()];
	}

	return result;
};

vector<int> Vizhiner::GetPositions(string& text) {
	vector<int> result;

	for (unsigned int i = 0; i < text.length(); i++) {
		vector<char>::iterator itr = find(ABC.begin(), ABC.end(), text[i]);
		result.push_back(distance(ABC.begin(), itr));
	}

	return result;
}

string Vizhiner::validate(string& text) {
	string result;

	for (unsigned int i = 0; i < text.length(); i++) {
		
		vector<char>::iterator itr = find(ABC.begin(), ABC.end(), text[i]);
		
		if (itr != ABC.end()) {
			result += text[i];
		}
		else {
			result += " ";
		}
	}

	for (unsigned int i = 0; i < result.length() - 1; i++) { //Поиск пробелов

		if (result[i] == ABC[32] && result[i+1] == ABC[32]) {
			result.erase(i + 1, 1);
			i--;
		}

	}

	return result;

}
