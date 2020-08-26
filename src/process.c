#include "header.h"

int process(GameState *game) {
    // int j = 0;
    game->time++;

    if(game->man.isDead) { // Анімація смерті
        game->man.animFrame = 7;
        do_render(game);
        SDL_Delay(200);
        game->man.animFrame = 8;
        do_render(game);
        SDL_Delay(200);
        game->man.animFrame = 9;
        do_render(game);
        SDL_Delay(200);
        game->man.animFrame = 10;
        do_render(game);
        SDL_Delay(200);
        game->man.animFrame = 11;
        do_render(game);
        SDL_Delay(400);
        game->time = 0;
        game->statusState = STATUS_STATE_GAMEOVER;
        game->copydone = 3;
        return 3;
    }

    if(game->statusState == STATUS_STATE_LIVES) {
        if(game->time > 120) {
            game->statusState = STATUS_STATE_GAME;
            Mix_PlayMusic(game->bgMusic, -1);
        }
    }

    else if(game->statusState == STATUS_STATE_GAME) {
        if(!game->man.isDead) {
            Man *man = &game->man;
            man->x += man->dx;
            man->y += man->dy;
            if(man->dx != 0 && man->onLedge && !man->slowingDown) {
                if(game->time % 6 == 0) {
                    if(man->animFrame == 0)
                        man->animFrame = 1;
                    else if(man->animFrame == 1)
                        man->animFrame = 2;
                    else if(man->animFrame == 2)
                        man->animFrame = 3;
                    else if(man->animFrame == 3)
                        man->animFrame = 4;
                    else if(man->animFrame == 4)
                        man->animFrame = 5;
                    else if(man->animFrame == 5)
                        man->animFrame = 6;
                    else
                        man->animFrame = 0;
                }

            }
            man->dy += GRAVITY;
            blocks_animation(game);
            portals_animation(game);
            change_fon(game);

            for(int i = 0; i < NUM_STARS; i++) { // рух перешкод
                game->stars[i].x = game->stars[i].baseX;
                game->stars[i].y = game->stars[i].baseY;    
                if(game->stars[i].mode == 0)
                    game->stars[i].x = game->stars[i].baseX + sinf(game->stars[i].phase+game->time * 0.06f) * 75;
                else
                    game->stars[i].y = game->stars[i].baseY + cosf(game->stars[i].phase+game->time * 0.06f) * 75;
            }
        }
        if(game->man.isDead && game->deathCountdown < 0)
           game->deathCountdown = 120;
        if(game->deathCountdown >= 0) {
            game->deathCountdown--;
            if(game->deathCountdown < 0) {
                game->man.lives--;              
                if(game->man.lives >= 0) {
                    game->statusState = STATUS_STATE_LIVES;
                    game->time = 0;
                    //reset
                    game->man.isDead = 0;
                    game->man.x = 100;
                    game->man.y = 240-40;
                    game->man.dx = 0;
                    game->man.dy = 0;
                    game->man.onLedge = 0;
                    init_stars(game);
                }
            }
        }
    }
    game->scrollX = -game->man.x + 700 / 2;
    if(game->scrollX > 1000) //скрол вліво на початку екрану
        game->scrollX = 1000;
    if(game->scrollX < -38000 + 320 / 2)
        game->scrollX = -38000 + 320 / 2;

    return 0;
}
