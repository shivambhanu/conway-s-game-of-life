#include "grid.h"
#include <raylib.h>
#include <iostream>
#include <random>
using namespace std;

// Use const for functions that do not modify the state of the object (e.g., getter functions like getColumns).
bool Grid::isCellValid(int row, int column) const
{
    if (row >= 0 && row < rows && column >= 0 && column < columns)
        return true;
    return false;
}

int Grid::getRows() const
{
    return rows;
}

int Grid::getColumns() const
{
    return columns;
}

bool Grid::getCell(int row, int column)
{
    return isCellValid(row, column) ? cells[row][column] : false;
}

void Grid::Draw()
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            Color color = cells[row][column] ? Color{0, 255, 0, 255} : Color{55, 55, 55, 255};
            DrawRectangle(column*cell_size, row*cell_size, cell_size-1, cell_size-1, color);
        }
    }
}

void Grid::setCell(int row, int column)
{
    if (isCellValid(row, column))
        cells[row][column] = true;
    else
        cout << "Invalid cell coordinate";
}

void Grid::unsetCell(int row, int column)
{
    if (isCellValid(row, column))
        cells[row][column] = false;
    else
        cout << "Invalid cell coordinate";
}

void Grid::initiateGrid()
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            int random_value = GetRandomValue(0, 4);  // a function from raylib library
            cells[row][column] = (random_value == 4);
        }
    }
}

void Grid::clear()
{
    for (int row = 0; row < rows; row++)
        for (int column = 0; column < columns; column++)
            cells[row][column] = false;
}

void Grid::toggleCell(int row, int column)
{
    if (isCellValid(row, column))
        cells[row][column] = !cells[row][column];
}
