#include "raylib.h"

int main()
{
    // setup window
    InitWindow(1280, 700, "Stranded 2.0");
    SetTargetFPS(144);

    // game loop
    while (!WindowShouldClose()) {
        //update screen for current frame
        BeginDrawing();
        ClearBackground(BLACK);

        // draw map

        // draw screen

        // audio

        EndDrawing();
    }

    CloseWindow();

    return 0;
}