#include "header.h"

void load_game(GameState *game) { // Переганяємо зображення
    SDL_Surface *surface = NULL;

    game->level_back = (SDL_Texture**)malloc(sizeof(SDL_Texture*) * 9);
    game->brick = (SDL_Texture**)malloc(sizeof(SDL_Texture*) * 13);
    game->manFrames = (SDL_Texture**)malloc(sizeof(SDL_Texture*) * 12);
    game->star = (SDL_Texture**)malloc(sizeof(SDL_Texture*) * 6);


    //завантажуємо фон
    surface = IMG_Load("resource/images/level/fon/fon.jpg");
    print_error(surface, "Some problems with level back1");
    game->level_back[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/fon/fon2.png");
    print_error(surface, "Some problems with level back2");
    game->level_back[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/fon/fon3.png");
    print_error(surface, "Some problems with level back3");
    game->level_back[2] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/fon/fon4.png");
    print_error(surface, "Some problems with level back4");
    game->level_back[3] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/fon/fon5.png");
    print_error(surface, "Some problems with level back5");
    game->level_back[4] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/fon/fon6.png");
    print_error(surface, "Some problems with level back6");
    game->level_back[5] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/fon/fon7.png");
    print_error(surface, "Some problems with level back7");
    game->level_back[6] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/fon/fon8.png");
    print_error(surface, "Some problems with level back8");
    game->level_back[7] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/fon/fon9.png");
    print_error(surface, "Some problems with level back9");
    game->level_back[8] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    //завантажуємо блоки
    surface = IMG_Load("resource/images/level/blocks/Jump_1.png");
    print_error(surface, "Some problems with blocks");
    game->brick[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Jump_2.png");
    print_error(surface, "Some problems with blocks");
    game->brick[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Jump_3.png");
    print_error(surface, "Some problems with blocks");
    game->brick[2] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Jump_4.png");
    print_error(surface, "Some problems with blocks");
    game->brick[3] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Jump_5.png");
    print_error(surface, "Some problems with blocks");
    game->brick[4] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Jump_6.png");
    print_error(surface, "Some problems with blocks");
    game->brick[5] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Jump_7.png");
    print_error(surface, "Some problems with blocks");
    game->brick[6] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Jump_8.png");
    print_error(surface, "Some problems with blocks");
    game->brick[7] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Jump_9.png");
    print_error(surface, "Some problems with blocks");
    game->brick[8] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Stand_1.png");
    print_error(surface, "Some problems with blocks");
    game->brick[9] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Stand_2.png");
    print_error(surface, "Some problems with blocks");
    game->brick[10] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Stand_3.png");
    print_error(surface, "Some problems with blocks");
    game->brick[11] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/blocks/Stand_4.png");
    print_error(surface, "Some problems with blocks");
    game->brick[12] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);


    //завантажуємо героя
    surface = IMG_Load("resource/images/hero/predator_stay_1.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_run_1.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_run_2.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[2] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_run_3.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[3] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_run_4.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[4] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_run_5.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[5] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_run_6.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[6] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);


    //завантажуємо смерть героя
    surface = IMG_Load("resource/images/hero/predator_death_1.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[7] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_death_2.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[8] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_death_3.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[9] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_death_4.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[10] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/hero/predator_death_5.png");
    print_error(surface, "Some problems with hero");
    game->manFrames[11] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    //завантажуємо перешкоди / портали
    surface = IMG_Load("resource/images/level/portals/portal1.png");
    print_error(surface, "Some problems with obstacles");
    game->star[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/portals/portal2.png");
    print_error(surface, "Some problems with obstacles");
    game->star[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/portals/portal3.png");
    print_error(surface, "Some problems with obstacles");
    game->star[2] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/portals/portal4.png");
    print_error(surface, "Some problems with obstacles");
    game->star[3] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/portals/portal5.png");
    print_error(surface, "Some problems with obstacles");
    game->star[4] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("resource/images/level/portals/portal6.png");
    print_error(surface, "Some problems with obstacles");
    game->star[5] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);


    //завантажуємо перемикач фону
    surface = IMG_Load("resource/images/level/fon/swap_fon.png");
    print_error(surface, "Some problems with swap_fon");
    game->swap = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);



//    surface = IMG_Load("resource/images/hero/fire.png");
//    print_error(surface, "Some problems with fire");
//    game->fire = SDL_CreateTextureFromSurface(game->renderer, surface);
//    SDL_FreeSurface(surface);




    //Завантажуємо музику
    game->bgMusic = Mix_LoadMUS("resource/sounds/bgr00.mp3");

    if(game->bgMusic != NULL) {
    Mix_VolumeMusic(70);
    }

    game->jumpSound = Mix_LoadWAV("resource/sounds/jump022.wav");
    game->landSound = Mix_LoadWAV("resource/sounds/down01.wav");
    game->dieSound = Mix_LoadWAV("resource/sounds/die01.wav");
    game->itemSound = Mix_LoadWAV("resource/sounds/item.wav");
    
       if(game->dieSound != NULL || game->jumpSound != NULL 
          || game->landSound!= NULL || game->itemSound!= NULL) {
            Mix_VolumeChunk(game->dieSound, 70);
            Mix_VolumeChunk(game->jumpSound, 88);
            Mix_VolumeChunk(game->landSound, 70);
            Mix_VolumeChunk(game->itemSound, 70);
  }

    game->man.x = 50; // стартові координати
    game->man.y = 480 / 2 - 40;
    game->man.dx = 0;
    game->man.dy = 0;
    game->man.onLedge = 0;
    game->man.animFrame = 0;
    game->man.facingLeft = 1;
    game->man.slowingDown = 0;
    game->man.lives = 0; // 1 життя
    game->man.isDead = 0;
    game->statusState = STATUS_STATE_LIVES;
    game->time = 0;
    game->scrollX = 0;
    game->deathCountdown = -1;
    game->man.max_x = 0;
    game->man.change_fon = 0;
    game->man.count = 0;
    game->colorBlock = 0;
    game->colorPortal = 0;
    game->animBlock = 0;
    game->animPortal = 0;
    game->draw_swap = -1;
    game->score = NULL;
    game->buffer_str = NULL;
    game->copydone = 0;
    game->flag = 0;
    game->flag2 = 0;

    for(int i = 0; i < NUM_LEDGES /*- 20*/; i++) {
        game->ledges[i].w = 256 - random() % 50; // довжина 256
        game->ledges[i].h = 64; // висота 64
        game->ledges[i].x = i * 480; // створюємо наступні платформи
        if(i == 0)
            game->ledges[i].y = (600 - 64 - 5); // розміщення (розмір екрану - розмір платформи - пустота знизу)
        else
            game->ledges[i].y = 500 + 100 - random() % 200;
    }

    for(int i = 1; i < NUM_SWAP_FON; i++) {
        game->swap_fon[i].w = 64; // довжина 64
        game->swap_fon[i].h = 64; // висота 64
        game->swap_fon[i].x = i * 3000 + random() % 500 - random() % 500;
        game->swap_fon[i].y = 250 + 100 - random() % 200;
    }

    init_stars(game);

    // for(int i = (NUM_LEDGES - 20); i < NUM_LEDGES; i++) { // треба правити!!!
    //     game->ledges[i].w = 256; // довжина 256
    //     game->ledges[i].h = 64;
    //     game->ledges[i].x = 350 + random() % 38400;
    //     if (i % 2 == 0)
    //         game->ledges[i].y = 200;
    //     else
    //         game->ledges[i].y = 350;
    // }
//    system("leaks -q endgame");
}
