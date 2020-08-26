#include "header.h"

void init_stars(GameState *game) {
    for(int i = 0; i < NUM_STARS; i++) {
        game->stars[i].baseX = WINDOW_H / 2 + random() % (65000); //38400
        game->stars[i].baseY = random() % 650;
        if (game->stars[i].baseY <= 100)
            game->stars[i].baseY +=200;
        if (game->stars[i].baseY > 100 && game->stars[i].baseY <= 200)
            game->stars[i].baseY +=100;
        if (game->stars[i].baseY > 200 && game->stars[i].baseY < 300)
            game->stars[i].baseY += 100;
        if (game->stars[i].baseY > 400 && game->stars[i].baseY < 650)
            game->stars[i].baseY -= 180;
        game->stars[i].mode = random() % 2;
        game->stars[i].phase = 2 * 3.14 * (random() % WINDOW_H / 2)/360.0f;
    }
}
