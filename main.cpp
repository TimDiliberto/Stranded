/*
Stranded_2.0/main.cpp
Main program flow which controls four main systems:
 * Loader
 * Game
 * Map
 * Screens

I referenced JeffM2501's 'RPG Example' to learn raylib and additional C++. His
project's github is linked below:
https://github.com/raylib-extras/RPGExample/tree/main

Tim Diliberto
*/
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