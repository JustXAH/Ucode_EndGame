#include "header.h"

void destroy_menu(GameState *game, LoadMenu *load) {

    SDL_DestroyTexture(load->texture_start);
    SDL_DestroyTexture(load->texture_start2);
    SDL_DestroyTexture(load->texture_quit);
    SDL_DestroyTexture(load->texture_quit2);
    SDL_DestroyTexture(load->texture_legends);
    SDL_DestroyTexture(load->texture_legends2);
    SDL_DestroyTexture(load->texture_team_name);

    for (int i = 0; i < 55; i++)
        SDL_DestroyTexture(load->texts[i]);
    free(load->texts);

    Mix_FreeMusic(game->backsound);
    Mix_FreeChunk(game->clicks);
}
