#pragma once
#include "grid.h"

class Simulation
{
public:
    Simulation(int window_width, int window_height, int cell_size)
        : grid(window_width, window_height, cell_size), temp_grid(window_width, window_height, cell_size), run(false)
    {
        // grid.initiateGrid();
    };
    void drawGrid();
    void setCell(int row, int column);
    int countLiveNeighbours(int row, int column);
    void updateGrid();
    bool isRunning() const {return run; }
    void start() {run = true; }
    void stop() {run = false; }
    void clearGrid();
    void createRandomState();
    void toggleCell(int row, int column);
private:
    const int row_offset[8] = {0, -1, -1, -1, 0, 1, 1, 1};
    const int column_offset[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    Grid grid;
    Grid temp_grid;
    bool run;
};
