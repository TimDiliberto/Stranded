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

    @author Tim Diliberto
    @version 0.0.1.0 11/12/2023
*/

// Include libraries and header files
#include "raylib.h"

// game states, screens, and setup

// Controls the program
int main()
{
    // setup window
    InitWindow(1280, 700, "Stranded 2.0");
    SetTargetFPS(144);

    // load assets

    // game loop
    while (!WindowShouldClose()) {
        // call update for current game state

        //update screen for current frame
        BeginDrawing();
        ClearBackground(BLACK);

        // draw map

        // draw screen

        // update audio

        EndDrawing();
    }

    // shutdown audio
    // cleanup resources
    CloseWindow();

    return 0;
}