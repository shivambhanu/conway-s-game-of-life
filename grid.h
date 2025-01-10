#pragma once
#include <vector>
using namespace std;

class Grid
{
public:
    Grid(int height, int width, int cell_size)
    : rows(height/cell_size), columns(width/cell_size), cell_size(cell_size), cells(rows, vector<int>(columns, 0)) {};
    void Draw();
    void setCell(int row, int column);
private:
    int rows;
    int columns;
    int cell_size;
    vector<vector<int>> cells;
};



// vector<vector<int>> v(rows, vector<int>(cols, givenValue));   // will initialize a 2d vector with given value