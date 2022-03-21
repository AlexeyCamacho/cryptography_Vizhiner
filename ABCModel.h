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
	vector<vector<int>> bigrams; // Биграммы
	set<string> wordsFromOneLetter;
	set<string> wordsFromTwoLetter;
	set<string> wordsFromThreeLetter;
	double indexOfMatches; // Индекс совпадений

public:
	ABCModel(const char ABC[]); // Конструктор

	// Getters

	vector<char> GetABC();
	char GetCharABC(unsigned int i);
	vector<vector<int>> GetBigrams();
	map<char, double> GetDistribution();
	set<string> GetwordsFromOneLetters();
	set<string> GetwordsFromTwoLetters();
	set<string> GetwordsFromThreeLetters();
	double GetIndexOfMathes();


	void CalculateDistribution(string& text);
	void CalculateBigrams(string& text);
	void Analyse(string text);
	void CollectLettersWords(string text);
	void AddLettersWord(string word);
	void CalculateIndexOfMatches();
	void Reset();
};

