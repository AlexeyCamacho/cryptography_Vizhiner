#include "ABCModel.h"

ABCModel::ABCModel(const char ABC[]) {
	this->ABC.assign(ABC, ABC + 33);

	for (unsigned int i = 0; i < this->ABC.size(); i++)
	{
		distribution[ABC[i]] = 0;
	}

	for (unsigned int i = 0; i < this->ABC.size(); i++) {
		bigrams.push_back(vector<int>(33, 0));
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

vector<char> ABCModel::GetABC()
{
	return this->ABC;
}

vector<vector<int>> ABCModel::GetBigrams() {
	return this->bigrams;
}

char ABCModel::GetCharABC(unsigned int i)
{
	if (i >= 0 && i < ABC.size()) {
		return this->ABC[i];
	}
	else { return '0'; }
}

void ABCModel::Analyse(string text)
{
	Reset();
	CalculateDistribution(text);
	CollectLettersWords(text);
	CalculateBigrams(text);
	CalculateIndexOfMatches();
}

double ABCModel::GetIndexOfMathes()
{
	return this->indexOfMatches;
}

void ABCModel::CalculateDistribution(string& text) {
	vector<int> countChar(33, 0);

	for (unsigned int i = 0; i < text.length(); i++) {
		vector<char>::iterator itr = find(ABC.begin(), ABC.end(), text[i]);
		countChar[distance(ABC.begin(), itr)]++;
	}

	for (unsigned int i = 0; i < this->ABC.size(); i++)
	{
		distribution[ABC[i]] = (double)countChar[i] / (double)text.length();
	}
}

void ABCModel::CalculateBigrams(string& text)
{
	vector<char>::iterator itrI;
	vector<char>::iterator itrJ;
	for (unsigned int i = 0; i < text.length() - 1; i++) {
		itrI = find(ABC.begin(), ABC.end(), text[i]);
		itrJ = find(ABC.begin(), ABC.end(), text[i + 1]);
		bigrams[distance(ABC.begin(), itrI)][distance(ABC.begin(), itrJ)]++;
	}
}

void ABCModel::CollectLettersWords(string text)
{
	string word;
	bool isWord = false;
	for (unsigned int i = 0; i < text.length(); i++) {
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

void ABCModel::Reset()
{
	this->distribution.clear();
	this->wordsFromOneLetter.clear();
	this->wordsFromThreeLetter.clear();
	this->wordsFromTwoLetter.clear();
	
	for (unsigned int i = 0; i < bigrams.size(); i++) {
		fill(bigrams[i].begin(), bigrams[i].end(), 0);
	}
}

void ABCModel::CalculateIndexOfMatches()
{
	double summ = 0;

	map<char, double>::iterator itr;
	for (itr = distribution.begin(); itr != distribution.end(); itr++) {
		summ += (itr->second * itr->second);
	}

	this->indexOfMatches = summ;
}
