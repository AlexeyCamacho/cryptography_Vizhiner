#pragma once
#include "ABCModel.h"
class DecryptionVizhiner :
    public ABCModel
{
private:
    vector<double> indexesOfMatches; // ������� ����������

public:
    void CalculateIndexes();
};

