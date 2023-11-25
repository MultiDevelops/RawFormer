#pragma once
#include "raylib.h"
#include "stdio.h"
Texture2D playerTex;
Image playerImage;
Vector2 playerPos = {0, 450 - 128};
// Loads the game.
void gameLoader(int screenWidth, int screenHeight){
    BeginDrawing();
    ClearBackground(SKYBLUE);
    playerImage = LoadImage("../res/gfx/player.png");
    ImageResize(&playerImage, 64, 128);
    playerTex = LoadTextureFromImage(playerImage);
    Rectangle buttonRectangle = {screenWidth / 2.5, screenHeight - 50, 128, 64};
    DrawTextureV(playerTex, playerPos, WHITE);
    EndDrawing();
}
// Loads the title screen of the game. The screen width variable will be divided by 2 for the X pos of the button and the screen height variable will be subtracted by 50 and be used as the Y pos.
void titleScreen(int screenWidth, int screenHeight){
    /*
    BeginDrawing();
    playerImage = LoadImage("../res/gfx/player.png");
    playerTex = LoadTextureFromImage(playerImage);
    Rectangle buttonRectangle = {screenWidth / 2.5, screenHeight - 50, 128, 64};
    ClearBackground(GRAY);
    DrawRectangleRec(buttonRectangle, BLACK);
    DrawText("Play", screenWidth / 3, screenHeight - 50, 18, WHITE);
    if (GetMouseX() >= buttonRectangle.x && GetMouseY() >= buttonRectangle.y && IsMouseButtonDown(0)) {
        gameLoader();
        return;
    }
    EndDrawing();*/
}