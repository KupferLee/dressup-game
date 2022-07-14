#include <cstdlib>

#include "raylib.h"

#include "config.h"

#include <fstream>
#include <iostream>

#include "body.h"
#include "hair.h"
#include "top.h"
#include "pants.h"
#include "shoes.h"
#include "user_interface.h"
#include "animation.h"

int main() {
    // Raylib initialization
    // Project name, screen size, fullscreen mode etc. can be specified in the config.h.in file
    InitWindow(Game::ScreenWidth, Game::ScreenHeight, Game::PROJECT_NAME);
    SetTargetFPS(60);

#ifdef GAME_START_FULLSCREEN
    ToggleFullscreen();
#endif

    // Your own initialization code here
    // ...
    // ...

    //Enum item - hair, top, pants, shoes
    enum item { i_hair, i_top, i_pants, i_shoes, i_body };
    item myItem = i_hair;

    //class to open and close files
    //tried as pointer but then the code using it doesnt work properly
    std::fstream textStream;

    body* template_body = new body;
    hair* template_hair = new hair;
    top* template_top = new top;
    pants* template_pants = new pants;
    shoes* template_shoes = new shoes;
    user_interface* template_UI = new user_interface;
    animation* testAnimation = new animation;

    Texture2D myTexture = LoadTexture("assets/graphics/testimage.png");
    Texture2D background_1 = LoadTexture("assets/graphics/backgrounds/background_1.png");

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        if (IsKeyPressed(KEY_SPACE))
        {
            ToggleFullscreen();
        }

        if (IsKeyPressed(KEY_ENTER))
        {
            //why doesnt it work?
            //txt files open
            textStream.open("./assets/txt/test.txt", std::ios::out);
            if (textStream.is_open()) std::cout << "is open." << std::endl;
            //like with cout << text is written in file
            textStream << "This is a test file." << std::endl;
            
            std::cout << "Has been written." << std::endl;
            //file is closed again
            textStream.close();
        }

        //switch item case hair, top, pants, shoes
        switch (myItem)
        {
        case i_hair:

            template_hair->update();

            if (IsKeyPressed(KEY_S))
            {
                myItem = i_top;
            }

            if (IsKeyPressed(KEY_W))
            {
                myItem = i_body;
            }
            break;

        case i_top:

            template_top->update();
            if (IsKeyPressed(KEY_S))
            {
                myItem = i_pants;
            }

            if (IsKeyPressed(KEY_W))
            {
                myItem = i_hair;
            }
            break;

        case i_pants:

            template_pants->update();

            if (IsKeyPressed(KEY_S))
            {
                myItem = i_shoes;
            }

            if (IsKeyPressed(KEY_W))
            {
                myItem = i_top;
            }
            break;

        case i_shoes:

            template_shoes->update();

            if (IsKeyPressed(KEY_S))
            {
                myItem = i_body;
            }

            if (IsKeyPressed(KEY_W))
            {
                myItem = i_pants;
            }
            break;

        case i_body:

            template_body->update();

            if (IsKeyPressed(KEY_S))
            {
                myItem = i_shoes;
            }

            if (IsKeyPressed(KEY_W))
            {
                myItem = i_hair;
            }

            break;

        default:
            break;

        }



        BeginDrawing();

        ClearBackground(WHITE);
        DrawTexture(background_1, 0, 0, WHITE);
        template_body->draw();
        template_hair->draw();
        template_pants->draw();
        template_top->draw();
        template_shoes->draw();

        switch (myItem)
        {
        case i_hair:
            DrawTexture(template_UI->texture_1, 0, 0, WHITE);
            break;
        
        case i_top:
            DrawTexture(template_UI->texture_2, 0, 0, WHITE);
            break;

        case i_pants:
            DrawTexture(template_UI->texture_3, 0, 0, WHITE);
            break;

        case i_shoes:
            DrawTexture(template_UI->texture_4, 0, 0, WHITE);
            break;

        default:
            break;
        }
        
        testAnimation->drawPro();

        EndDrawing();
    }

    // De-initialization here
    // ...
    // ...
    template_body->unload_texture();
    template_hair->unload_texture();
    template_pants->unload_texture();
    template_shoes->unload_texture();
    template_top->unload_texture();
    testAnimation->unload_texture();

    // Close window and OpenGL context
    CloseWindow();

    return EXIT_SUCCESS;
}
