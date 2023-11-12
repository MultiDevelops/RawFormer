#pragma once
#include "raylib.h"
#include "stdio.h"
Texture2D playerTex;
Image playerImage;
Vector2 playerPos;
// Loads the game.
void gameLoader(){
    DrawTextureV(playerTex, playerPos, WHITE);
}
// Loads the title screen of the game. The screen width variable will be divided by 2 for the X pos of the button and the screen height variable will be subtracted by 50 and be used as the Y pos.
void titleScreen(int screenWidth, int screenHeight){
    playerImage = LoadImage("res/gfx/player.png");
    playerTex = LoadTextureFromImage(playerImage);
    ClearBackground(RAYWHITE);
    DrawTextureV(playerTex, playerPos, WHITE);
    Rectangle buttonRectangle = {screenWidth / 2.5, screenHeight - 50, 128, 64};
    ClearBackground(GRAY);
    DrawRectangleRec(buttonRectangle, BLACK);
    DrawText("Play", screenWidth / 3, screenHeight - 50, 18, WHITE);
    if(GetMouseX() >= buttonRectangle.x && GetMouseY() >= buttonRectangle.y && IsMouseButtonDown(0)){
        printf("pressed");
    }
    gameLoader();
    return;
}