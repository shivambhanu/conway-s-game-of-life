#pragma once
#include "grid.h"

class Simulation
{
public:
    Simulation(int window_width, int window_height, int cell_size)
        : grid(window_width, window_height, cell_size), temp_grid(window_width, window_height, cell_size)
    {
        grid.initiateGrid();
    };
    void drawGrid();
    void setCell(int row, int column);
    int countLiveNeighbours(int row, int column);
    void updateGrid();
private:
    const int row_offset[8] = {0, -1, -1, -1, 0, 1, 1, 1};
    const int column_offset[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    Grid grid;
    Grid temp_grid;
};
