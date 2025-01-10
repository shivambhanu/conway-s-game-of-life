#include "raylib.h"

int main() {
    // Initialize the window
    InitWindow(600, 600, "Animation");

    SetTargetFPS(60);
    // Vector2 position = {300, 300};
    int speedOne = 3, speedTwo = 3;
    int x1 = 20, y1 = 300;
    int x2 = 300, y2 = 20;

    // Game loop
    while (!WindowShouldClose()) {
        x1 += speedOne;
        y2 += speedTwo;

        if (x1 > 580 || x1 < 20) speedOne *= -1;
        if (y2 > 580 || y2 < 20) speedTwo *= -1;


        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircle(x1, y1, 20, RED);
        DrawCircle(x2, y2, 20, GREEN);

        //Moving the circle using keys
        // if (IsKeyDown(KEY_LEFT)) position.x-=5;
        // if (IsKeyDown(KEY_UP)) position.y-=5;
        // if (IsKeyDown(KEY_RIGHT)) position.x+=5;
        // if (IsKeyDown(KEY_DOWN)) position.y+=5;

        EndDrawing();
    }

    CloseWindow();
    return 0;
}