#pragma once
#include "ABCModel.h"
class DecryptionVizhiner :
    public ABCModel
{
private:
    vector<double> indexesOfMatches; // ������� ����������

public:
    DecryptionVizhiner(const char ABC[]); // �����������

    void CalculateIndexes(string &text);
    void ResetDecriptor();

    //Getters

    vector<double> GetIndexesOfMatches();
};

