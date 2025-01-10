#include "raylib.h"

int main() {
    const int WINDOW_HEIGHT = 750;
    const int WINDOW_WIDTH = 750;
    int fps = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "GAME OF LIFE");
    SetTargetFPS(fps);

    while (!WindowShouldClose()) {
        // Event Handling

        // Updating States

        // Drawing
        BeginDrawing();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}