#include "header.h"

void blocks_animation(GameState *game) {
    if (game->man.onLedge == 0) {
        game->flag = 0;
        if (game->animBlock == 8) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_RETURN_BLOCK) {
                game->animBlock = 7;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 7) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_RETURN_BLOCK) {
                game->animBlock = 6;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 6) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_RETURN_BLOCK) {
                game->animBlock = 5;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 5) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_RETURN_BLOCK) {
                game->animBlock = 4;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 4) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_RETURN_BLOCK) {
                game->animBlock = 3;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 3) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_RETURN_BLOCK) {
                game->animBlock = 2;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 2) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_RETURN_BLOCK) {
                game->animBlock = 1;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 1) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_RETURN_BLOCK) {
                game->animBlock = 0;
                game->colorBlock = 0;
            }
        }
    }
    else if (game->man.onLedge == 1) {
        if (game->animBlock == 0) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_BLOCK) {
                game->animBlock = 1;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 1) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_BLOCK) {
                game->animBlock = 2;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 2) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_BLOCK) {
                game->animBlock = 3;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 3) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_BLOCK) {
                game->animBlock = 4;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 4) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_BLOCK) {
                game->animBlock = 5;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 5) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_BLOCK) {
                game->animBlock = 6;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 6) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_BLOCK) {
                game->animBlock = 7;
                game->colorBlock = 0;
            }
        } else if (game->animBlock == 7) {
            game->colorBlock++;
            if (game->colorBlock == SPEED_BLOCK) {
                game->animBlock = 8;
                game->colorBlock = 0;
                game->flag = 1;
            }
        }
    }
//    if (game->animBlock >= 8 && game->man.onLedge == 1 && game->flag == 1){
//        if (game->animBlock == 8) {
//            game->colorBlock++;
//            printf("oooops\n");
//            if (game->colorBlock == SPEED_BLOCK) {
//                game->animBlock = 9;
//                game->colorBlock = 0;
//            }
//        } else if (game->animBlock == 9) {
//            game->colorBlock++;
//            if (game->colorBlock == SPEED_BLOCK) {
//                game->animBlock = 10;
//                game->colorBlock = 0;
//            }
//        } else if (game->animBlock == 10) {
//            game->colorBlock++;
//            if (game->colorBlock == SPEED_BLOCK) {
//                game->animBlock = 11;
//                game->colorBlock = 0;
//            }
//        } else if (game->animBlock == 11) {
//            game->colorBlock++;
//            if (game->colorBlock == SPEED_BLOCK) {
//                game->animBlock = 12;
//                game->colorBlock = 0;
//            }
//        } else if (game->animBlock == 12) {
//            game->colorBlock++;
//            if (game->colorBlock == SPEED_BLOCK) {
//                game->animBlock = 8;
//                game->colorBlock = 0;
//            }
//        }
//    }


    return;
}
