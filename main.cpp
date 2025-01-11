#include "raylib.h"
#include "simulation.h"
#include <iostream>
using namespace std;

int main()
{
    const int WINDOW_HEIGHT = 750;
    const int WINDOW_WIDTH = 750;
    const int CELL_SIZE = 25;
    int fps = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "GAME OF LIFE");
    SetTargetFPS(fps);

    Simulation simulation(WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE);
    simulation.setCell(5, 29);
    simulation.setCell(5, 0);
    simulation.setCell(4, 0);
    simulation.setCell(6, 0);

    cout << "Total live neighbours: " << simulation.countLiveNeighbours(5, 29) << endl;

    while (!WindowShouldClose())
    {
        // Event Handling

        // Updating States

        // Drawing
        BeginDrawing();
        simulation.drawGrid();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
