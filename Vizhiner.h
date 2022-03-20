#pragma once
#include <string>
#include <vector>

using namespace std;

class Vizhiner
{
private:
	vector<char> ABC;

public:
	Vizhiner(const char ABC[]);
	~Vizhiner() { };

	string encrypt(string text, string key);
	string decrypt(string text, string key);
	string validate(string& text);
	vector<int> GetPositions(string& text);


};



