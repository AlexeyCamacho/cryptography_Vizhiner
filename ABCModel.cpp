#include "ABCModel.h"

ABCModel::ABCModel(const char ABC[]) {
	this->ABC.assign(ABC, ABC + 33);

	for (int i = 0; i < this->ABC.size(); i++)
	{
		distribution[ABC[i]] = 0;
	}
}

map<char, double> ABCModel::GetDistribution() {
	return this->distribution;
}

set<string> ABCModel::GetwordsFromOneLetters()
{
	return this->wordsFromOneLetter;
}

set<string> ABCModel::GetwordsFromTwoLetters()
{
	return this->wordsFromTwoLetter;
}

set<string> ABCModel::GetwordsFromThreeLetters()
{
	return this->wordsFromThreeLetter;
}

void ABCModel::Analyse(string text)
{
	reset();
	CalculateDistribution(text);
	CollectLettersWords(text);
}

void ABCModel::CalculateDistribution(string& text) {
	vector<int> countChar(33, 0);

	for (int i = 0; i < text.length(); i++) {
		vector<char>::iterator itr = find(ABC.begin(), ABC.end(), text[i]);
		countChar[distance(ABC.begin(), itr)]++;
	}

	for (int i = 0; i < this->ABC.size(); i++)
	{
		distribution[ABC[i]] = (double)countChar[i] / (double)text.length();
	}
}

void ABCModel::CollectLettersWords(string text)
{
	string word;
	bool isWord = false;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == ' ') {
			if (isWord) {
				AddLettersWord(word);
				word.clear();
				isWord = false;
			}
		}
		else {
			isWord = true;
			word += text[i];
		}

		if (i == text.length() - 1) { AddLettersWord(word); }
	}
}

void ABCModel::AddLettersWord(string word)
{
	switch (word.length())
	{
	case 1:
		wordsFromOneLetter.insert(word);
		break;
	case 2:
		wordsFromTwoLetter.insert(word);
		break;
	case 3:
		wordsFromThreeLetter.insert(word);
		break;
	default:
		break;
	}
}

void ABCModel::reset()
{
	this->distribution.clear();
	this->wordsFromOneLetter.clear();
	this->wordsFromThreeLetter.clear();
	this->wordsFromTwoLetter.clear();
}
