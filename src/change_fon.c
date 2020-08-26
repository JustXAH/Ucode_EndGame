#include "header.h"

void change_fon(GameState *game) {
    int j = 0;

    for(int i = 1; i < NUM_SWAP_FON; i++) {
        if (i > game->draw_swap){
            if ((fabs(game->man.x - game->swap_fon[i].x)) < 50) {
                if ((fabs(game->man.y - game->swap_fon[i].y)) < 50) {
                       Mix_PlayChannel(4, game->itemSound, 0);
                        j = random() % 9;
                        if (j > 8)
                            j = 8;
                        if (j != game->man.change_fon)
                            game->man.change_fon = j;
                        else
                            game->man.change_fon = j - 1;
                    game->draw_swap += 1;
                }
            }
        }
    }
}

    //     game->swap_fon[i].w = 64; // довжина 64
    //     game->swap_fon[i].h = 64; // висота 64
    //     game->swap_fon[i].x = i * 3000 + random() % 500 - random() % 500;
    //     game->swap_fon[i].y = 250 + 100 - random() % 200;
    // }


