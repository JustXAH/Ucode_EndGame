#include "../inc/header.h"

int main(int argc, char *argv[]) {
    LoadMenu *load = (LoadMenu*)malloc(sizeof(LoadMenu));
    GameState *game = (GameState*)malloc(sizeof(GameState));
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Surface *cursor_surf;
    SDL_Cursor *cursor = NULL;

    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    TTF_Init();

    srandom((int)time(NULL));

    window = SDL_CreateWindow(&argv[0][2], //створюємо вікно
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              WINDOW_H,
                              WINDOW_W,
                              0
                              );
    cursor_surf = IMG_Load("resource/images/menu/cursor.png");
    cursor = SDL_CreateColorCursor(cursor_surf, 0, 0);
    SDL_SetCursor(cursor);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED 
                                  | SDL_RENDERER_PRESENTVSYNC);
    game->renderer = renderer;

    Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 4096); //initialize sound


    
//    menu(window, renderer, load, game);
    game->status = MENU_STATE;

    int done = 0;

    while(!done) {
        switch (game->status) {
            case MENU_STATE:
                load_menu(load, game);
                game->status = menu(window, load, game);
                break;
            case GAME_STATE:
                load_game(game);
                game->status = main_process(window, game);
                break;
            case GAMEOVER_STATE:
                game->status = init_game_over(game, window, load);
                break;
            case EXIT_STATE:
                exit(0);
                break;
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    Mix_CloseAudio();
    free(load);
    free(game);
    Mix_Quit();
    TTF_Quit();
    free(cursor);
    SDL_Quit();
    argc = 0;
    exit(0);
}
