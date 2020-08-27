#include "header.h"

e_game init_game_over(GameState *game, SDL_Window *window, LoadMenu *load) {
    game->status = GAMEOVER_STATE;

    bool quit = false;
    SDL_Event event;
    char *ptr2[13] = {"username.txt"};
    char *ptr[10] = {"score.txt"};
    window = NULL;
    load = NULL;
    char *count = mx_itoa(game);
    FILE *board;
    board = fopen(ptr[0], "w+");
    for (int i = 0; i < 1; i++) {
        fprintf(board, "%s\n", count);
    }
    fclose(board);
    

    SDL_Surface *temp = IMG_Load("resource/images/menu/synth-retrowave-synthwave-fon-new-retro-wave-sintveiv-retr-8.jpg");
    SDL_Texture *texture = SDL_CreateTextureFromSurface(game->renderer, temp);
    SDL_Rect rect;

    SDL_Surface *temp1 = IMG_Load("resource/images/menu/image-32.png");
    SDL_Texture *texture1 = SDL_CreateTextureFromSurface(game->renderer, temp1);
    SDL_Rect rect1;
    rect1.x = 20; //Extreme left of the window
    rect1.y = 10; //Very bottom of the window
    rect1.w = 125; //100 pixels width
    rect1.h = 60; //100 pixels height

    SDL_Surface *temp2 = IMG_Load("resource/images/menu/image-33.png");
    SDL_Texture *texture2 = SDL_CreateTextureFromSurface(game->renderer, temp2);
    SDL_Rect rect2;
    rect2.x = 500; //Extreme left of the window
    rect2.y = 90; //Very bottom of the window
    rect2.w = 250; //100 pixels width
    rect2.h = 80; //100 pixels height
    
    SDL_Surface *temp3 = IMG_Load("resource/images/menu/image-36.png");
    SDL_Texture *texture3 = SDL_CreateTextureFromSurface(game->renderer, temp3);
    SDL_Rect rect3;
    rect3.x = 500; //Extreme left of the window
    rect3.y = 160; //Very bottom of the window
    rect3.w = 250; //100 pixels width
    rect3.h = 80; //100 pixels height
    // SDL_Surface *temp3 = IMG_Load("resource/images/menu/Jump_1.png");
    // SDL_Texture *texture3 = SDL_CreateTextureFromSurface(game->renderer, temp3);
    // SDL_Rect rect3;
    // rect3.x = 450; //Extreme left of the window
    // rect3.y = 300; //Very bottom of the window
    // rect3.w = 300; //100 pixels width
    // rect3.h = 50; //100 pixels height

    // SDL_Rect rect4;
    // rect4.x = 760; //Extreme left of the window
    // rect4.y = 300; //Very bottom of the window
    // rect4.w = 50; //100 pixels width
    // rect4.h = 50; //100 pixels height

    // SDL_Surface *temp4 = IMG_Load("resource/images/menu/image34.png");
    // SDL_Texture *texture4 = SDL_CreateTextureFromSurface(game->renderer, temp4);
    // SDL_Rect rect5;
    // rect5.x = 250; //Extreme left of the window
    // rect5.y = 320; //Very bottom of the window
    // rect5.w = 160; //100 pixels width
    // rect5.h = 50; //100 pixels height

    // char *score = "98";

    SDL_FreeSurface(temp);
    char text[16] = "\0";
    bool flag = true;

    rect.x = 0; //Extreme left of the window
    rect.y = 0; //Very bottom of the window
    rect.w = 1280; //100 pixels width
    rect.h = 720; //100 pixels height
    SDL_Color color = {0, 255, 255, 0};
    TTF_Font *fnt = TTF_OpenFont("resource/images/6006.ttf", 32);

    if (TTF_Init() == -1) {
        printf("TTF_Init: %s\n", TTF_GetError());
        return EXIT_STATE;
    }
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_MOUSEBUTTONDOWN) {
                if (event.button.button == SDL_BUTTON_LEFT
                    && event.button.x >= 0 && event.button.x <= 120
                    && event.button.y >= 0 && event.button.y <= 75)  {
                    return MENU_STATE;
                }
            }
            int key = event.key.keysym.sym;
                if (key == SDLK_BACKSPACE) {
                    if (flag) {
                        if (strlen(text)) {
                            text[strlen(text)-1]='\0';
                            flag = false;
                        }
                    }
                else
                    flag = true;
                }
                    if (event.type == SDL_TEXTINPUT) {
                        if (strlen(text) < 16-1)
                            strcat(text, event.text.text);
                    }
        }

    SDL_RenderCopy(game->renderer, texture, NULL, &rect);
    SDL_RenderCopy(game->renderer, texture1, NULL, &rect1);
    SDL_RenderCopy(game->renderer, texture2, NULL, &rect2);
    SDL_RenderCopy(game->renderer, texture3, NULL, &rect3);
    // SDL_RenderCopy(game->renderer, texture3, NULL, &rect4);
    // SDL_RenderCopy(game->renderer, texture4, NULL, &rect5);
    draw_text(color, 460, 310, text, game->renderer, fnt);
    // draw_text(color, 770, 310, score, game->renderer, fnt);
    SDL_RenderPresent(game->renderer);

    }
    FILE *board2;
    board2 = fopen(ptr2[0], "w+");
    for (int i = 0; i < 1; i++) {
        fprintf(board2, "%s\n", text);
    }
    fclose(board2);
    SDL_RenderClear(game->renderer);
    SDL_DestroyTexture(texture);
    return MENU_STATE;
}


