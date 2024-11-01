#include "raylib.h"

int main() {
    InitWindow(800, 600, "GameOff2024");
    SetTargetFPS(60);


    Texture2D myTexture = LoadTexture("assets/graphics/testimage.png");

    while (!WindowShouldClose()) {
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
