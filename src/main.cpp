
#include "raylib.h"

#include "config.h"

int main() {
    InitWindow(Game::ScreenWidth, Game::ScreenHeight, Game::PROJECT_NAME);
    SetTargetFPS(60);


    Texture2D myTexture = LoadTexture("assets/graphics/testimage.png");

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(Color{0,255,0});
            DrawText("Hello, world!", 10, 10, 30, LIGHTGRAY);
            DrawTexture(myTexture, 10, 100, WHITE);

        EndDrawing();
    } 

    UnloadTexture(myTexture);

    CloseWindow();

    return 0;
}
