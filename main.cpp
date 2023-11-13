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
    @version 0.0.1.1 11/12/2023
*/

// Include libraries and header files
#include "raylib.h"

// game states, screens, and setup
// setup window and add game icon
void SetupWindow()
{
    // validate window is not taller than monitor, if so shrink window
    /* consider changing to:
        if screenHeight > monitorHeight
            set window size to next lowest resolution
    */
    int monitor = GetCurrentMonitor();
    int maxHeight = GetMonitorHeight(monitor) - 40;
    if (GetScreenHeight() > maxHeight) {
        SetWindowSize(GetScreenWidth(), maxHeight);
    }

    SetTargetFPS(144);

    // load image for window icon
    Image icon = LoadImage("_resources/icons/Icon.6_98.png");
    // check image format; convert to desired format
    ImageFormat(&icon, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
    // replace background and border colors with transparent
    ImageColorReplace(&icon, BLACK, BLANK);
    ImageColorReplace(&icon, Color{136, 136, 136, 255}, BLANK);
    // set icon
    SetWindowIcon(icon);

    // free image data
    UnloadImage(icon);
}

// Controls the program
int main()
{
    // setup window
    SetConfigFlags(FLAG_VSYNC_HINT);    // Try enabling V-Sync on GPU
    InitWindow(1280, 700, "Stranded 2.0");
    SetupWindow();

    // load assets
    // init audio
    // init resources

    // set game state to loading

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