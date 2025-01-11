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

void Simulation::updateGrid()
{
    for (int row = 0; row < grid.getRows(); row++)
    {
        for (int column = 0; column < grid.getColumns(); column++)
        {
            int live_neighbours = countLiveNeighbours(row, column);

            if (grid.getCell(row, column))
            {
                if (live_neighbours < 2 || live_neighbours > 3)
                    temp_grid.unsetCell(row, column);
                else
                    temp_grid.setCell(row, column);
            }else
            {
                if (live_neighbours == 3)
                    temp_grid.setCell(row, column);
                else
                    temp_grid.unsetCell(row, column);
            }
        }
    }
    grid = temp_grid;
}
