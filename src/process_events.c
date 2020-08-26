#include "header.h"

int process_events(SDL_Window *window, GameState *game) {
    int done = 0;
    SDL_Event event;
    do_render(game);

    process(game);

    while(SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_WINDOWEVENT_CLOSE: {
                if (window) {
                    game->copydone = 3;
                    done = 1;
                    return done;
                }
            }
                break;
            case SDL_KEYDOWN: {
                switch(event.key.keysym.sym) {
                    case SDLK_UP:
                        if (game->man.onLedge) {
                            game->man.dy = -10;
                            game->man.onLedge = 0;
                            Mix_PlayChannel(1, game->jumpSound, 0);
                        }
                        break;
                         case SDLK_m: // виключення звуку
                             game->copydone = 2;

                         break;
                    case SDLK_q:
                        game->copydone = 2;

                }
            }
                break;
            case SDL_QUIT:
                game->copydone = 1;
                done = 1;
                break;
        }
    }
    const Uint8 *state = SDL_GetKeyboardState(NULL);
    if(state[SDL_SCANCODE_UP])
        game->man.dy -= 0.2f;
    if(state[SDL_SCANCODE_LEFT]) {
        game->man.dx -= 0.5;
        if(game->man.dx < -6)
            game->man.dx = -6;
        game->man.facingLeft = 0;
        game->man.slowingDown = 0;
    }
    else if(state[SDL_SCANCODE_RIGHT]) {
        game->man.dx += 0.5;
        if(game->man.dx > 6)
            game->man.dx = 6;
        game->man.facingLeft = 1;
        game->man.slowingDown = 0;
    }
    else {
        game->man.animFrame = 0;
        game->man.dx *= 0.8f;
        game->man.slowingDown = 1;
        if(fabsf(game->man.dx) < 0.1f)
            game->man.dx = 0;
    }
    if (state[SDL_SCANCODE_DOWN]) { // пришвидшить падіння вниз
        game->man.y +=5; 
    }
    return done;
}
