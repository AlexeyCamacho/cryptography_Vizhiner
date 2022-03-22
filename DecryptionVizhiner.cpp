#include "DecryptionVizhiner.h"

DecryptionVizhiner::DecryptionVizhiner(const char ABC[]):ABCModel(ABC)
{

}

void DecryptionVizhiner::CalculateIndexes(string& text)
{
	ABCModel selectionModel(this->GetABC());
	string selectionText;

	for (int i = 1; i < 20; i++) {

		selectionText = "";
		for (unsigned int j = 0; j < text.length(); j += i) {
			selectionText += text[j];
		}

		selectionModel.CalculateDistribution(selectionText);
		selectionModel.CalculateIndexOfMatches();

		this->indexesOfMatches.push_back(selectionModel.GetIndexOfMathes());
	}
	
}

void DecryptionVizhiner::ResetDecriptor()
{
	this->indexesOfMatches.clear();
}

vector<double> DecryptionVizhiner::GetIndexesOfMatches()
{
	return this->indexesOfMatches;
}
