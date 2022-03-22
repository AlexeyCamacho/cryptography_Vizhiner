#include "DecryptionVizhiner.h"

void DecryptionVizhiner::CalculateIndexes()
{
	double summ = 0;

	map<char, double>::iterator itr;
	for (itr = distribution.begin(); itr != distribution.end(); itr++) {
		summ += (itr->second * itr->second);
	}

	this->indexesOfMatches.push_back(summ);
}
