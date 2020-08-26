#include "header.h"

void do_render(GameState *game) {
    char *str = mx_itoa(game);

    game->buffer_str = "score";

    SDL_Color color = {255, 30, 200, 0};
    // SDL_Color color2 = {200, 30, 0, 0};
    TTF_Font *fnt = TTF_OpenFont("resource/images/6006.ttf", 32);

    SDL_RenderClear(game->renderer);
    SDL_RenderCopy(game->renderer, game->level_back[game->man.change_fon], NULL, NULL);

    // for (int i = 0; i < NUM_LEDGES; i++) { // Малюємо платформу
    //     SDL_Rect ledgeRect = {game->scrollX + game->ledges[i].x, game->ledges[i].y, game->ledges[i].w, game->ledges[i].h };
    //     SDL_RenderCopy(game->renderer, game->brick[0], NULL, &ledgeRect);
    // }

    for (int i = 0; i < NUM_LEDGES; i++) { // Фарбуємо платформу
        if (game->man.onLedge && game->man.x > game->ledges[i].x - 50 && game->man.x < game->ledges[i].x + 250) {
            SDL_Rect ledgeRect = {game->scrollX + game->ledges[i].x, game->ledges[i].y, game->ledges[i].w, game->ledges[i].h };
            SDL_RenderCopy(game->renderer, game->brick[game->animBlock], NULL, &ledgeRect);
        }
        else if (game->man.x > game->ledges[i].x - 50 && game->man.x < game->ledges[i].x + 345) {
            SDL_Rect ledgeRect = {game->scrollX + game->ledges[i].x, game->ledges[i].y, game->ledges[i].w, game->ledges[i].h };
            SDL_RenderCopy(game->renderer, game->brick[game->animBlock], NULL, &ledgeRect);
        }
        else {
            SDL_Rect ledgeRect = {game->scrollX + game->ledges[i].x, game->ledges[i].y, game->ledges[i].w, game->ledges[i].h };
            SDL_RenderCopy(game->renderer, game->brick[0], NULL, &ledgeRect);
        }
    }

    // for (int i = 0; i < NUM_STARS; i++) { // Малюємо перешкоди
    //     SDL_Rect starRect = { game->scrollX + game->stars[i].x, game->stars[i].y, 64, 64 };
    //     SDL_RenderCopy(game->renderer, game->star, NULL, &starRect);
    // }


    for (int i = 0; i < NUM_STARS; i++) { // Малюємо перешкоди
        SDL_Rect starRect = { game->scrollX + game->stars[i].x, game->stars[i].y, 69, 69 }; //124 - 69 / 64-64
        SDL_RenderCopy(game->renderer, game->star[game->animPortal], NULL, &starRect);
    }

    SDL_Rect rect = {game->scrollX + game->man.x, game->man.y, 48, 48}; // Малюємо персонажа
    SDL_RenderCopyEx(game->renderer, game->manFrames[game->man.animFrame],
                     NULL, &rect, 0, NULL, (game->man.facingLeft == 0));


    // if (game->man.x > game->man.max_x - 50) {
        for(int i = 0; i < NUM_SWAP_FON; i++) { // малюємо перемикачі фону
            if (i > game->draw_swap) {
                SDL_Rect swap_fon = {game->scrollX + game->swap_fon[i].x, game->swap_fon[i].y, game->swap_fon[i].w, game->swap_fon[i].h };
                SDL_RenderCopy(game->renderer, game->swap, NULL, &swap_fon);
            }
        }

    draw_text(color, 1130, 27, game->score, game->renderer, fnt);
    draw_text(color, 1020, 27, game->buffer_str, game->renderer, fnt);

    SDL_RenderPresent(game->renderer);

    free(str);
    TTF_CloseFont(fnt);



}



