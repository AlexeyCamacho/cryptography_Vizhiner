#pragma once
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;


class ABCModel
{
private:
	vector<char> ABC;
	map<char, double> distribution; // Распределние символов
	set<string> wordsFromOneLetter;
	set<string> wordsFromTwoLetter;
	set<string> wordsFromThreeLetter;

public:
	ABCModel(const char ABC[]);

	map<char, double> GetDistribution();
	set<string> GetwordsFromOneLetters();
	set<string> GetwordsFromTwoLetters();
	set<string> GetwordsFromThreeLetters();


	void CalculateDistribution(string& text);
	void Analyse(string text);
	void CollectLettersWords(string text);
	void AddLettersWord(string word);
	void reset();
};

