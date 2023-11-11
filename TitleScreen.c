#include "raylib.h"
// Loads the title screen of the game.
void titleScreen(int screenWidth, int screenHeight){
    BeginDrawing();
    ClearBackground(GRAY);
    DrawRectangle(screenWidth / 2, 0, 128, 64, BLACK);
    EndDrawing();
}