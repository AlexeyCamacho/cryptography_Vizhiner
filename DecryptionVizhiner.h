#pragma once
#include "ABCModel.h"
class DecryptionVizhiner :
    public ABCModel
{
private:
    vector<double> indexesOfMatches; // Индексы совпадений

public:
    DecryptionVizhiner(const char ABC[]); // Конструктор

    void CalculateIndexes(string &text);
    void ResetDecriptor();

    //Getters

    vector<double> GetIndexesOfMatches();
};

