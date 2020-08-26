//#include "header.h"

e_game leader(SDL_Window *window, GameState *game , LoadMenu *load) {
    game->status = LEADERBOARD_STATE;

    TTF_Init();
    if (window == NULL) {
        return EXIT_STATE;
    }
    bool quit = false; 
    SDL_Event event;
    
    SDL_Texture* texture;

    SDL_Surface* temp;

    SDL_Rect rect;

    texture = NULL;

    temp = IMG_Load("resource/images/level/leaderboard/leaderboard_1.jpg");

    texture = SDL_CreateTextureFromSurface(game->renderer, temp);

    SDL_FreeSurface(temp);

    TTF_Font *fnt = TTF_OpenFont("resource/images/6006.ttf", 32);


    SDL_Color color = {0, 255, 255, 0};

//    char *ptr_n[14] = {"resource/text/username.txt"};
//    char *ptr_user = mx_file_to_str(ptr_n[0]);
//    char *ptr_user_1;
//    char *ptr_user_2;
//    char *ptr_user_3;
//    int k = 0;
//    int k_2 = 0;
//    int buf = 0;
//    int p_2 = 0;
//    for (k = 0; ptr_user[k] != '\n';) {
//        k++;
//        buf = k + 1;
//    }
//    ptr_user_1 = mx_strnew(k);
//    for (k = 0; ptr_user[k] != '\n'; k++)
//        ptr_user_1[k] = ptr_user[k];
//    k += 1;
//    for (; ptr_user[k] != '\n';) {
//        k++;
//        k_2++;
//    }
//    ptr_user_2 = mx_strnew(k_2);
//    for (; ptr_user[buf] != '\n'; buf++) {
//        ptr_user_2[p_2] = ptr_user[buf];
//        p_2++;
//    }
//    buf = 0;
//    k_2 = k;
//    for (;ptr_user[k] != '\0'; k++)
//        buf++;
//    ptr_user_3 = mx_strnew(buf);
//    buf = 0;
//    k_2 += 1;
//    for (;ptr_user[k_2] != '\n'; k_2++) {
//        ptr_user_3[buf] = ptr_user[k_2];
//        buf++;
//    }
    char *ptr_user_4 = "-----       -";
    char *ptr_user_5 = "-----       -";
    char *ptr_user_6 = "-----       -";
    char *ptr_user_7 = "-----       -";
    char *ptr_user_8 = "-----       -";
    char *ptr_user_9 = "-----       -";
    char *ptr_user_10 = "-----       -";
    char *ptr_user_11 = "-----       -";

    load->texture_user = NULL;
    load->texture_score = NULL;

    load->texture_user = SDL_CreateTextureFromSurface(game->renderer, load->user);
    load->texture_score = SDL_CreateTextureFromSurface(game->renderer, load->score);

    load->user = IMG_Load("resource/images/menu/image-28.png");
    load->score = IMG_Load("resource/images/menu/image-27.png");

    SDL_Rect rect9;
    SDL_Rect rect10;


    SDL_FreeSurface(load->score);

    rect9.x = 600; //Extreme left of the window
    rect9.y = 100; //Very bottom of the window
    rect9.w = 175; //100 pixels width
    rect9.h = 40; //100 pixels height

    SDL_FreeSurface(load->user);

    rect10.x = 450; //Extreme left of the window
    rect10.y = 100; //Very bottom of the window
    rect10.w = 175; //100 pixels width
    rect10.h = 40; //100 pixels height

    while (!quit) {
        while (SDL_PollEvent(&event)) {
        }
    SDL_RenderCopy(game->renderer, texture, NULL, &rect);
//        draw_text(color, 500, 140, ptr_user_1, game->renderer, fnt);
        SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
        SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
//        draw_text(color, 500, 170, ptr_user_2, game->renderer, fnt);
//        draw_text(color, 500, 200, ptr_user_3, game->renderer, fnt);
        draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
        draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
        draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
        draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
        draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
        draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
        draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
        draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);

        if (event.type == SDL_MOUSEBUTTONDOWN) {
            if (event.button.button == SDL_BUTTON_LEFT
                && event.button.x >= 0 && event.button.x <= 200
                && event.button.y >= 0 && event.button.y <= 200)  {
                SDL_RenderClear(game->renderer);
                SDL_DestroyTexture(texture);
                return MENU_STATE;
            }
        }
    SDL_RenderPresent(game->renderer);
    }
    SDL_RenderClear(game->renderer);
    SDL_DestroyTexture(texture);
    return MENU_STATE;
}
