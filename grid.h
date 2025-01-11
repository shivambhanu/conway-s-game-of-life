#pragma once
#include <vector>
using namespace std;

class Grid
{
public:
    Grid(int width, int height, int cell_size)
    : rows(height/cell_size), columns(width/cell_size), cell_size(cell_size), cells(rows, vector<bool>(columns, false)) {};
    bool isCellValid(int row, int column) const;
    int getRows() const;
    int getColumns() const;
    bool getCell(int row, int column);
    void Draw();
    void setCell(int row, int column);
private:
    int rows;
    int columns;
    int cell_size;
    vector<vector<bool>> cells;
};



// vector<vector<int>> v(rows, vector<int>(cols, givenValue));   // will initialize a 2d vector with given value