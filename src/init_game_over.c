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

    SDL_FreeSurface(temp);
    char text[16] = "\0";
    printf("%s", text);
    bool flag = true;

    rect.x = 0; //Extreme left of the window
    rect.y = 0; //Very bottom of the window
    rect.w = 1280; //100 pixels width
    rect.h = 720; //100 pixels height
    SDL_Color color = {200, 30, 0, 0};
    TTF_Font *fnt = TTF_OpenFont("resource/images/6006.ttf", 32);

    if (TTF_Init() == -1) {
        printf("TTF_Init: %s\n", TTF_GetError());
        return EXIT_STATE;
    }
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_MOUSEBUTTONDOWN) {
                if (event.button.button == SDL_BUTTON_LEFT
                    && event.button.x >= 0 && event.button.x <= 200
                    && event.button.y >= 0 && event.button.y <= 200)  {
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
    draw_text(color, 500, 340, text, game->renderer, fnt);
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


