#include "header.h"

void portals_animation(GameState *game) {
    if (game->animPortal == 0) {
        game->colorPortal++;
        if (game->colorPortal == SPEED_PORTAL) {
            game->animPortal = 1;
            game->colorPortal = 0;
        }
    }
    else if (game->animPortal == 1) {
        game->colorPortal++;
        if (game->colorPortal == SPEED_PORTAL) {
            game->animPortal = 2;
            game->colorPortal = 0;
        }
    }
    else if (game->animPortal == 2) {
        game->colorPortal++;
        if (game->colorPortal == SPEED_PORTAL) {
            game->animPortal = 3;
            game->colorPortal = 0;
        }
    }
    else if (game->animPortal == 3) {
        game->colorPortal++;
        if (game->colorPortal == SPEED_PORTAL) {
            game->animPortal = 4;
            game->colorPortal = 0;
        }
    }
    else if (game->animPortal == 4) {
        game->colorPortal++;
        if (game->colorPortal == SPEED_PORTAL) {
            game->animPortal = 5;
            game->colorPortal = 0;
        }
    }
    else if (game->animPortal == 5) {
        game->colorPortal++;
        if (game->colorPortal == SPEED_PORTAL) {
            game->animPortal = 0;
            game->colorPortal = 0;
        }
    }
}
