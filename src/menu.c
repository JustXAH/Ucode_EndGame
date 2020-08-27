#include "header.h"

// #undef main

e_game menu(SDL_Window *window, LoadMenu *load, GameState *game) {

    game->status = MENU_STATE;

    if (window == NULL) {
        destroy_menu(game, load);
        return EXIT_STATE;
    }
    bool quit = false;
    // GameState load->
    SDL_Event input;
    SDL_Color color = {0, 255, 255, 0};

    TTF_Font *fnt = TTF_OpenFont("resource/images/6006.ttf", 32);

    char *ptr_user_4 = "JustXAH";
    char *ptr_user_5 = "CleverV";
    char *ptr_user_6 = "Pe4enyka";
    char *ptr_user_7 = "ogur4ik";
    char *ptr_user_8 = "helloworld";
    char *ptr_user_9 = "FlyGames";
    char *ptr_user_10 = "vovazilvova";
    char *ptr_user_11 = "YuraLOL";
    char *ptr_user_12 = "133";
    char *ptr_user_13 = "118";
    char *ptr_user_14 = "98";
    char *ptr_user_15 = "92";
    char *ptr_user_16 = "86";
    char *ptr_user_17 = "74";
    char *ptr_user_18 = "58";
    char *ptr_user_19 = "47";


    
//    game->game->game->renderer
    SDL_Rect rect;
    SDL_Rect rect2;
    SDL_Rect rect3;
    SDL_Rect rect4;
    SDL_Rect rect5;
    SDL_Rect rect6;
    SDL_Rect rect7;
    SDL_Rect rect8;
    SDL_Rect rect9;
    SDL_Rect rect10;
    SDL_Rect rect11;

//    texture = NULL;
    load->texture_menu = NULL;
    load->texture_user = NULL;
    load->texture_score = NULL;
    load->texture_start = NULL;
    load->texture_start2 = NULL;
    load->texture_quit = NULL;
    load->texture_quit2 = NULL;
    load->texture_team_name = NULL;
    load->texture_legends = NULL;
    load->texture_legends2 = NULL;

    load->menu = IMG_Load("resource/images/menu/image-32.png");
    load->user = IMG_Load("resource/images/menu/image-28.png");
    load->score = IMG_Load("resource/images/menu/image-27.png");
    load->button_start = IMG_Load("resource/images/menu/image-16.png");
    load->button_quit = IMG_Load("resource/images/menu/image-3.png");

    load->button_quit2 = IMG_Load("resource/images/menu/image-3.png");
    load->button_start2 = IMG_Load("resource/images/menu/image-16.png");

    load->button_legends = IMG_Load("resource/images/menu/legend.png");
    load->button_legends2 = IMG_Load("resource/images/menu/legend.png");

    load->team_name = IMG_Load("resource/images/menu/image-31.png");

    //Filling texture with the image using a surface
    load->texts = (SDL_Texture **)malloc(sizeof(SDL_Texture *) * 55);
    for (int i = 0; i < 55; i++)
        load->texts[i] = SDL_CreateTextureFromSurface(game->renderer, load->temp[i]);

    load->texture_menu = SDL_CreateTextureFromSurface(game->renderer, load->menu);
    load->texture_user = SDL_CreateTextureFromSurface(game->renderer, load->user);
    load->texture_score = SDL_CreateTextureFromSurface(game->renderer, load->score);
    load->texture_start = SDL_CreateTextureFromSurface(game->renderer, load->button_start);
    load->texture_start2 = SDL_CreateTextureFromSurface(game->renderer, load->button_start2);
    load->texture_quit = SDL_CreateTextureFromSurface(game->renderer, load->button_quit);
    load->texture_quit2 = SDL_CreateTextureFromSurface(game->renderer, load->button_quit2);
    load->texture_team_name = SDL_CreateTextureFromSurface(game->renderer, load->team_name);
    load->texture_legends = SDL_CreateTextureFromSurface(game->renderer, load->button_legends);
    load->texture_legends2 = SDL_CreateTextureFromSurface(game->renderer, load->button_legends2);

    //Deleting the temporary surface
     for (int i = 0; i < 55; i++)
        SDL_FreeSurface(load->temp[i]);
    free(load->temp);

    rect.x = 0; //Extreme left of the window
    rect.y = 0; //Very bottom of the window
    rect.w = 1280; //100 pixels width
    rect.h = 720; //100 pixels height
    //'rect' defines the dimensions for the bottom-left of the window


    SDL_FreeSurface(load->button_start);

    rect2.x = 555; //Extreme left of the window
    rect2.y = 218; //Very bottom of the window
    rect2.w = 150; //100 pixels width
    rect2.h = 48; //100 pixels height

    SDL_FreeSurface(load->button_start2);

    rect4.x = 553; //Extreme left of the window
    rect4.y = 215; //Very bottom of the window
    rect4.w = 155; //100 pixels width
    rect4.h = 51; //100 pixels height

    SDL_FreeSurface(load->button_quit);

    rect3.x = 441; //Extreme left of the window
    rect3.y = 340; //Very bottom of the window
    rect3.w = 373; //100 pixels width
    rect3.h = 118; //100 pixels height  

    SDL_FreeSurface(load->button_quit2);

    rect5.x = 437; //Extreme left of the window
    rect5.y = 335; //Very bottom of the window
    rect5.w = 390; //100 pixels width
    rect5.h = 127; //100 pixels height

    SDL_FreeSurface(load->button_legends);

    rect6.x = 527; //Extreme left of the window
    rect6.y = 290; //Very bottom of the window
    rect6.w = 215; //100 pixels width
    rect6.h = 55; //100 pixels height 

    SDL_FreeSurface(load->button_legends2);

    rect7.x = 523; //Extreme left of the window
    rect7.y = 285; //Very bottom of the window
    rect7.w = 215; //100 pixels width
    rect7.h = 60; //100 pixels height 

    SDL_FreeSurface(load->team_name);

    rect8.x = 1050; //Extreme left of the window
    rect8.y = 670; //Very bottom of the window
    rect8.w = 200; //100 pixels width
    rect8.h = 50; //100 pixels height

    SDL_FreeSurface(load->score);

    rect9.x = 680; //Extreme left of the window
    rect9.y = 120; //Very bottom of the window
    rect9.w = 175; //100 pixels width
    rect9.h = 40; //100 pixels height

    SDL_FreeSurface(load->user);

    rect10.x = 470; //Extreme left of the window
    rect10.y = 120; //Very bottom of the window
    rect10.w = 175; //100 pixels width
    rect10.h = 40; //100 pixels height

    rect11.x = 20; //Extreme left of the window
    rect11.y = 20; //Very bottom of the window
    rect11.w = 150; //100 pixels width
    rect11.h = 50; //100 pixels height

    Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 4096);
    
    game->clicks = Mix_LoadWAV("resource/sounds/click.wav");
    game->backsound = Mix_LoadMUS("resource/sounds/background.ogg");
 
    Mix_PlayMusic(game->backsound, -1);

    int i = 0;

    while (!quit) {
        int x;
        int y;

        x = input.motion.x;
        y = input.motion.y;

        while (SDL_PollEvent(&input) > 0) {
            if (input.type == SDL_QUIT) {
//                quit = true;
                destroy_menu(game, load);
                return EXIT_STATE;
            }
        }

        //меню
        if (input.type == SDL_MOUSEBUTTONDOWN) {
            if (input.button.button == SDL_BUTTON_LEFT
                && input.button.x >= 20 && input.button.x <= 100
                && input.button.y >= 20 && input.button.y <= 50) {
                Mix_PlayChannel(2, game->clicks, 0);
                // Mix_FreeMusic(game->backsound);
                game->flag2 = 0;
            }
        }
        //start button
        if (input.type == SDL_MOUSEBUTTONDOWN) {
            if (input.button.button == SDL_BUTTON_LEFT
                && input.button.x >= 560 && input.button.x <= 695
                && input.button.y >= 230 && input.button.y <= 260) {
                Mix_PlayChannel(2, game->clicks, 0);
                // Mix_FreeMusic(game->backsound);
                destroy_menu(game, load);
                return GAME_STATE;
            }
            if (input.button.button == SDL_BUTTON_LEFT
                && input.button.x >= 560 && input.button.x <= 695
                && input.button.y >= 230 && input.button.y <= 260) {
                Mix_PlayChannel(2, game->clicks, 0);
                // Mix_FreeMusic(game->backsound);
                destroy_menu(game, load);
                return GAME_STATE;
            }
        }

        //legend button
        if (input.type == SDL_MOUSEBUTTONDOWN) {
            if (input.button.button == SDL_BUTTON_LEFT
                && input.button.x >= 538 && input.button.x <= 720
                && input.button.y >= 290 && input.button.y <= 340) {
                Mix_PlayChannel(2, game->clicks, 0);
                quit = false;
                game->flag2 = 1;
//                leader(window, game->game->renderer, NULL);

            }
        }

        //quit bitton
        if (input.type == SDL_MOUSEBUTTONDOWN) {
            if (input.button.button == SDL_BUTTON_LEFT
                && input.button.x >= 580 && input.button.x <= 680
                && input.button.y >= 375 && input.button.y <= 410) {
                Mix_PlayChannel(2, game->clicks, 0);
                destroy_menu(game, load);
                return EXIT_STATE;
            }
        }
        if (input.type == SDL_KEYDOWN) {
            switch (input.key.keysym.sym) {
                case SDLK_ESCAPE:
                    destroy_menu(game, load);
                    quit = true;
                    Mix_FreeMusic(game->backsound);
                    Mix_FreeChunk(game->clicks);
                    return EXIT_STATE;
                    break;
                default:
                    break;
            }
        }


        SDL_RenderCopy(game->renderer, load->texts[5], NULL, &rect);

        if (i == 0) {
            SDL_Delay(45);
            SDL_RenderCopy(game->renderer, load->texts[i], NULL, &rect);
            if ((y >= 225 && y <= 260) && (x >= 560 && x <= 695)) {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_start2, NULL, &rect4);
                    SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else if ((y >= 375 && y <= 41) && (x >= 580 && x <= 680)) {
                SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                SDL_RenderCopy(game->renderer, load->texture_quit2, NULL, &rect5);
                SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else if ((x >= 528 && x <= 73) && (y >= 290 && y <= 340)) {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_legends2, NULL, &rect7);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                    SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            }
        }
        if (i > 0 && i < 54) {
            SDL_Delay(42);
            SDL_RenderCopy(game->renderer, load->texts[i], NULL, &rect);
            if ((y >= 225 && y <= 260) && (x >= 560 && x <= 695)) {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_start2, NULL, &rect4);
                    SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else if ((y >= 375 && y <= 410) && (x >= 580 && x <= 680)) {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                    SDL_RenderCopy(game->renderer, load->texture_quit2, NULL, &rect5);
                    SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else if ((x >= 525 && x <= 750) && (y >= 290 && y <= 340)) {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_legends2, NULL, &rect7);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                    SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            }
        } else if (i == 54) {
            SDL_Delay(45);
            SDL_RenderCopy(game->renderer, load->texts[i], NULL, &rect);
            if ((y >= 225 && y <= 260) && (x >= 560 && x <= 695)) {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_start2, NULL, &rect4);
                    SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else if ((y >= 375 && y <= 410) && (x >= 580 && x <= 680)) {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                    SDL_RenderCopy(game->renderer, load->texture_quit2, NULL, &rect5);
                    SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else if ((x >= 525 && x <= 750) && (y >= 290 && y <= 340)) {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_legends2, NULL, &rect7);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            } else {
                if (game->flag2 == 0) {
                    SDL_RenderCopy(game->renderer, load->texture_quit, NULL, &rect3);
                    SDL_RenderCopy(game->renderer, load->texture_legends, NULL, &rect6);
                    SDL_RenderCopy(game->renderer, load->texture_start, NULL, &rect2);
                } else {
                    SDL_RenderCopy(game->renderer, load->texture_user, NULL, &rect10);
                    SDL_RenderCopy(game->renderer, load->texture_score, NULL, &rect9);
                    draw_text(color, 500, 230, ptr_user_4, game->renderer, fnt);
                    draw_text(color, 500, 260, ptr_user_5, game->renderer, fnt);
                    draw_text(color, 500, 290, ptr_user_6, game->renderer, fnt);
                    draw_text(color, 500, 320, ptr_user_7, game->renderer, fnt);
                    draw_text(color, 500, 350, ptr_user_8, game->renderer, fnt);
                    draw_text(color, 500, 380, ptr_user_9, game->renderer, fnt);
                    draw_text(color, 500, 410, ptr_user_10, game->renderer, fnt);
                    draw_text(color, 500, 440, ptr_user_11, game->renderer, fnt);
                    draw_text(color, 750, 230, ptr_user_12, game->renderer, fnt);
                    draw_text(color, 750, 260, ptr_user_13, game->renderer, fnt);
                    draw_text(color, 750, 290, ptr_user_14, game->renderer, fnt);
                    draw_text(color, 750, 320, ptr_user_15, game->renderer, fnt);
                    draw_text(color, 750, 350, ptr_user_16, game->renderer, fnt);
                    draw_text(color, 750, 380, ptr_user_17, game->renderer, fnt);
                    draw_text(color, 750, 410, ptr_user_18, game->renderer, fnt);
                    draw_text(color, 750, 440, ptr_user_19, game->renderer, fnt);
                    SDL_RenderCopy(game->renderer, load->texture_menu, NULL, &rect11);
                }
                SDL_RenderCopy(game->renderer, load->texture_team_name, NULL, &rect8);
                SDL_RenderPresent(game->renderer);
            }
        }
        i++;
        if (i == 55)
            i = 0;
    }

    // Deleting the texture
    destroy_menu(game, load);

    return MENU_STATE;
}
