#include "header.h"

e_game main_process (SDL_Window *window, GameState *game) {
    game->status = GAME_STATE;

    int done = 0;

    while(!done) {
        do_render(game);

        collision_detect(game);

        done = process_events(window, game); // процес гри

        done = process(game);

        done = game->copydone;
        if (done == 1) {
            destroy_game(game);
            return EXIT_STATE;
        }
        if (done == 2) {
            destroy_game(game);
            return MENU_STATE;
        }
        if (done == 3) {
            destroy_game(game);
            return GAMEOVER_STATE;
        }
    }
    return GAME_STATE;
}
