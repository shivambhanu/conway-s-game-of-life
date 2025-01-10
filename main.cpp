#include "raylib.h"
#include "grid.h"

int main()
{
    const int WINDOW_HEIGHT = 750;
    const int WINDOW_WIDTH = 750;
    const int CELL_SIZE = 25;
    int fps = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "GAME OF LIFE");
    SetTargetFPS(fps);
    Grid grid(WINDOW_HEIGHT, WINDOW_WIDTH, CELL_SIZE);

    grid.setCell(4, 14);

    while (!WindowShouldClose())
    {
        // Event Handling

        // Updating States

        // Drawing
        BeginDrawing();
        grid.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}