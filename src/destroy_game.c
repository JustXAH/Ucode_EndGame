#include "header.h"

void destroy_game(GameState *game) {
//    SDL_DestroyTexture(load->texture_start);
//    SDL_DestroyTexture(load->texture_start2);
//    SDL_DestroyTexture(load->texture_quit);
//    SDL_DestroyTexture(load->texture_quit2);
//    SDL_DestroyTexture(load->texture_legends);
//    SDL_DestroyTexture(load->texture_legends2);
//    SDL_DestroyTexture(load->texture_team_name);
    SDL_DestroyTexture(game->fire);
    SDL_DestroyTexture(game->swap);

//    for (int i = 0; i < 55; i++)
//        SDL_DestroyTexture(load->texts[i]);
//    free(load->texts);

    for (int i = 0; i < 12; i++)
        SDL_DestroyTexture(game->manFrames[i]);
    free(game->manFrames);

    for (int i = 0; i < 13; i++)
        SDL_DestroyTexture(game->brick[i]);
    free(game->brick);

    for (int i = 0; i < 9; i++)
        SDL_DestroyTexture(game->level_back[i]);
    free(game->level_back);

    for (int i = 0; i < 6; i++)
        SDL_DestroyTexture(game->star[i]);
    free(game->star);

//    Mix_FreeMusic(game->backsound);
//    Mix_FreeChunk(game->clicks);
    Mix_FreeMusic(game->bgMusic);
    Mix_FreeChunk(game->dieSound);
    Mix_FreeChunk(game->jumpSound);
    Mix_FreeChunk(game->landSound);
    Mix_FreeChunk(game->itemSound);
//    Mix_CloseAudio();
//    free(load);
//    free(game);
}
