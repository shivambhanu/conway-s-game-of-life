#include "raylib.h"
#include "simulation.h"
#include <iostream>
using namespace std;

int main()
{
    const int WINDOW_WIDTH = 750;
    const int WINDOW_HEIGHT = 750;
    const int CELL_SIZE = 25;
    int fps = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "GAME OF LIFE");
    SetTargetFPS(fps);
    Simulation simulation(WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE);

    while (!WindowShouldClose())
    {
        // Event Handling
        if (IsKeyPressed(KEY_ENTER))
        {
            simulation.start();
            SetWindowTitle("Game of Life is running...");
        }
        else if (IsKeyPressed(KEY_SPACE))
        {
            simulation.stop();
            SetWindowTitle("Game of Life has stopped!");
        }
        // Updating States
        simulation.updateGrid();

        // Drawing
        BeginDrawing();
        ClearBackground(GRAY);
        simulation.drawGrid();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
