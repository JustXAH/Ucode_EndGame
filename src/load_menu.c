#include "header.h"

void load_menu(LoadMenu *load, GameState *game) {
    game->flag2 = 0;
    load->temp = (SDL_Surface**)malloc(sizeof(SDL_Surface) * 55);
    load->temp[0] = IMG_Load("resource/images/Menu_background/image-3.jpg");
    load->temp[1] = IMG_Load("resource/images/Menu_background/image-4.jpg");
    load->temp[2] = IMG_Load("resource/images/Menu_background/image-5.jpg");
    load->temp[3] = IMG_Load("resource/images/Menu_background/image-6.jpg");
    load->temp[4] = IMG_Load("resource/images/Menu_background/image-7.jpg");
    load->temp[5] = IMG_Load("resource/images/Menu_background/image-8.jpg");
    load->temp[6] = IMG_Load("resource/images/Menu_background/image-9.jpg");
    load->temp[7] = IMG_Load("resource/images/Menu_background/image-10.jpg");
    load->temp[8] = IMG_Load("resource/images/Menu_background/image-11.jpg");
    load->temp[9] = IMG_Load("resource/images/Menu_background/image-12.jpg");
    load->temp[10] = IMG_Load("resource/images/Menu_background/image-13.jpg");
    load->temp[11] = IMG_Load("resource/images/Menu_background/image-14.jpg");
    load->temp[12] = IMG_Load("resource/images/Menu_background/image-15.jpg");
    load->temp[13] = IMG_Load("resource/images/Menu_background/image-16.jpg");
    load->temp[14] = IMG_Load("resource/images/Menu_background/image-17.jpg");
    load->temp[15] = IMG_Load("resource/images/Menu_background/image-18.jpg");
    load->temp[16] = IMG_Load("resource/images/Menu_background/image-19.jpg");
    load->temp[17] = IMG_Load("resource/images/Menu_background/image-20.jpg");
    load->temp[18] = IMG_Load("resource/images/Menu_background/image-21.jpg");
    load->temp[19] = IMG_Load("resource/images/Menu_background/image-22.jpg");
    load->temp[20] = IMG_Load("resource/images/Menu_background/image-23.jpg");
    load->temp[21] = IMG_Load("resource/images/Menu_background/image-24.jpg");
    load->temp[22] = IMG_Load("resource/images/Menu_background/image-25.jpg");
    load->temp[23] = IMG_Load("resource/images/Menu_background/image-26.jpg");
    load->temp[24] = IMG_Load("resource/images/Menu_background/image-27.jpg");
    load->temp[25] = IMG_Load("resource/images/Menu_background/image-28.jpg");
    load->temp[26] = IMG_Load("resource/images/Menu_background/image-29.jpg");
    load->temp[27] = IMG_Load("resource/images/Menu_background/image-30.jpg");
    load->temp[28] = IMG_Load("resource/images/Menu_background/image-29.jpg");
    load->temp[29] = IMG_Load("resource/images/Menu_background/image-28.jpg");
    load->temp[30] = IMG_Load("resource/images/Menu_background/image-27.jpg");
    load->temp[31] = IMG_Load("resource/images/Menu_background/image-26.jpg");
    load->temp[32] = IMG_Load("resource/images/Menu_background/image-25.jpg");
    load->temp[33] = IMG_Load("resource/images/Menu_background/image-24.jpg");
    load->temp[34] = IMG_Load("resource/images/Menu_background/image-23.jpg");
    load->temp[35] = IMG_Load("resource/images/Menu_background/image-22.jpg");
    load->temp[36] = IMG_Load("resource/images/Menu_background/image-21.jpg");
    load->temp[37] = IMG_Load("resource/images/Menu_background/image-20.jpg");
    load->temp[38] = IMG_Load("resource/images/Menu_background/image-19.jpg");
    load->temp[39] = IMG_Load("resource/images/Menu_background/image-18.jpg");
    load->temp[40] = IMG_Load("resource/images/Menu_background/image-17.jpg");
    load->temp[41] = IMG_Load("resource/images/Menu_background/image-16.jpg");
    load->temp[42] = IMG_Load("resource/images/Menu_background/image-15.jpg");
    load->temp[43] = IMG_Load("resource/images/Menu_background/image-14.jpg");
    load->temp[44] = IMG_Load("resource/images/Menu_background/image-13.jpg");
    load->temp[45] = IMG_Load("resource/images/Menu_background/image-12.jpg");
    load->temp[46] = IMG_Load("resource/images/Menu_background/image-11.jpg");
    load->temp[47] = IMG_Load("resource/images/Menu_background/image-10.jpg");
    load->temp[48] = IMG_Load("resource/images/Menu_background/image-9.jpg");
    load->temp[49] = IMG_Load("resource/images/Menu_background/image-8.jpg");
    load->temp[50] = IMG_Load("resource/images/Menu_background/image-7.jpg");
    load->temp[51] = IMG_Load("resource/images/Menu_background/image-6.jpg");
    load->temp[52] = IMG_Load("resource/images/Menu_background/image-5.jpg");
    load->temp[53] = IMG_Load("resource/images/Menu_background/image-4.jpg");
    load->temp[54] = IMG_Load("resource/images/Menu_background/image-3.jpg");

//    const char *clicks = "resource/sounds/click.wav";
//    const char *backsound = "resource/sounds/background.ogg"
   
  
    // Mix_VolumeChunk(load->clicks, 50);
    // printf("point1\n");
    // exit(1);
    // load->backsound = Mix_LoadMUS("resource/sounds/background.ogg");
    // Mix_VolumeMusic(100);

//    system("leaks -q endgame");
}
