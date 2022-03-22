#pragma once
#include "ABCModel.h"
class DecryptionVizhiner :
    public ABCModel
{
private:
    vector<double> indexesOfMatches; // Индексы совпадений

public:
    void CalculateIndexes();
};

