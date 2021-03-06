#include "raylib.h"
#include "utils.h"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int fontSize = 20;
    const int screenWidth = 2000;
    const int screenHeight = 1200;

    char* text = "Congrats! You created your first window!";
    const int textWidth = MeasureText(text, fontSize);
    const int textCenterX = getCenter(screenWidth, textWidth);
    const int textCenterY = getCenter(screenHeight, fontSize);

    //--------------------------------------------------------------------------------------
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    // Set our game to run at 60 frames-per-second
    SetTargetFPS(60);
    // Main game loop
    // Detect window close button or ESC key
    while (!WindowShouldClose())
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            ClearBackground(PURPLE);
            DrawText(text, textCenterX, textCenterY, fontSize, RAYWHITE);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }
    // De-Initialization
    //--------------------------------------------------------------------------------------
    // Close window and OpenGL context
    CloseWindow();
    //--------------------------------------------------------------------------------------
    return 0;
}
