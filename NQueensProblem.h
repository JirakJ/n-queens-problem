//
// Created by Jakub Jirák on 11/03/2020.
//

#ifndef NQUEENSPROBLEM_NQUEENSPROBLEM_H
#define NQUEENSPROBLEM_NQUEENSPROBLEM_H


#pragma once

#include <vector>

using std::vector;

class QueensProblem {
    vector<vector<int>> chessTable;
    int numOfQueens = 0;

public:
    QueensProblem(int _numOfQueens);

    void solve();

private:
    bool setQueens(int colIndex);

    bool isPlaceValid(int rowIndex, int colIndex) const;

    void printQueens() const;
};


#endif //NQUEENSPROBLEM_NQUEENSPROBLEM_H
