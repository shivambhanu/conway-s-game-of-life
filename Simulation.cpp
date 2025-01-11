#include "simulation.h"


void Simulation::drawGrid()
{
    grid.Draw();
}


void Simulation::setCell(int row, int column)
{
    grid.setCell(row, column);
}

int Simulation::countLiveNeighbours(int row, int column)
{
    int live_neighbours = 0;

    for (int i = 0; i < 8; i++)
    {
        int neighbourRow = (row + row_offset[i]) % grid.getRows();  // Note: The grid is toroidal
        int neighbourColumn = (column + column_offset[i]) % grid.getColumns();  // Note: The grid is toroidal
        live_neighbours += grid.getCell(neighbourRow, neighbourColumn) ? 1 : 0;
    }
    return live_neighbours;
}
