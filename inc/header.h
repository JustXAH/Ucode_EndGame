#pragma once

#define GRAVITY 0.362f
#define STATUS_STATE_LIVES 0
#define STATUS_STATE_GAME 1
#define STATUS_STATE_GAMEOVER 2
#define STATUS_STATE_WIN 3

#define NUM_STARS 100
#define NUM_LEDGES 120
#define NUM_SWAP_FON 10

#define WINDOW_H 1280
#define WINDOW_W 720

#define SPEED_BLOCK 4
#define SPEED_RETURN_BLOCK 4
#define SPEED_PORTAL 10


//наши фреймворки
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <SDL2_mixer/SDL_mixer.h>

//системные библиотеки
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>

//декларация функций

typedef struct // Персонаж / MAn
{
    float x, y;
    float dx, dy;
    short lives;
    char *name;
    int onLedge, isDead;
    int animFrame, facingLeft, slowingDown;
    int count;
    int max_x;
    int change_fon;
} Man;

typedef struct // Перешкоди / Star
{
    int x, y, baseX, baseY, mode;
    float phase;
} Star;

typedef struct { // Платформи / Ledge
    int x, y, w, h;
}   Ledge;

typedef struct // Перемикач фону
{
    int x, y, w, h;
} Swap;

typedef enum e_gamestate{
    MENU_STATE,
    GAME_STATE,
    GAMEOVER_STATE,
//    LEADERBOARD_STATE,
    EXIT_STATE
}             e_game;

typedef struct  // Безпосередньо структура гри / GameState
{
    float scrollX;
    Man man;
    Star stars[NUM_STARS];
    Ledge ledges[NUM_LEDGES];
    Swap swap_fon[NUM_SWAP_FON];
    //картинки
    SDL_Texture **star;
    SDL_Texture *swap;
    SDL_Texture **manFrames;
    SDL_Texture **brick;
    SDL_Texture *fire;
    SDL_Texture **level_back;
    //шрифт
    int time, deathCountdown;
    int statusState;
    //звук
    int musicChannel;
    Mix_Music *bgMusic;
    Mix_Chunk *jumpSound, *landSound, *dieSound, *itemSound;
    Mix_Chunk *clicks;
    Mix_Music *backsound;

    SDL_Renderer *renderer;

    
    int block;
    int animBlock, animPortal, flag, flag2;
    int colorBlock, colorPortal;
    int draw_swap;
    char *score;
    char *buffer_str;
    int copydone;

    e_game status;

} GameState;

typedef struct {

    SDL_Texture **texts;
    SDL_Surface **temp;

    SDL_Surface *user;
    SDL_Surface *menu;
    SDL_Surface *score;
    SDL_Surface *button_start;
    SDL_Surface *button_start2;
    SDL_Surface* button_quit;
    SDL_Surface* button_quit2;
    SDL_Surface *team_name;
    SDL_Surface *button_legends;
    SDL_Surface *button_legends2;

    SDL_Texture *texture_menu;
    SDL_Texture *texture_user;
    SDL_Texture *texture_score;
    SDL_Texture *texture_start;
    SDL_Texture *texture_start2;
    SDL_Texture *texture_quit;
    SDL_Texture *texture_quit2;
    SDL_Texture *texture_team_name;
    SDL_Texture *texture_legends;
    SDL_Texture *texture_legends2;
    
}             LoadMenu;

e_game main_process (SDL_Window *window, GameState *game);
e_game init_game_over(GameState *game, SDL_Window *window, LoadMenu *load);
e_game menu(SDL_Window *window, LoadMenu *load, GameState *game);
//e_game leader(SDL_Window *window, GameState *game, LoadMenu *load_menu);

void destroy_menu(GameState *game, LoadMenu *load);
void destroy_game(GameState *game);
char *mx_file_to_str(const char *filename);
void print_error(SDL_Surface *surface, char *s);
void init_stars(GameState *game);
void load_game(GameState *game);
int process(GameState *game);
void collision_detect(GameState *game);
int process_events(SDL_Window *window, GameState *game);
char *mx_itoa(GameState *game);
void do_render(GameState *game);
void load_menu(LoadMenu *load, GameState *game);
void draw_text(SDL_Color color, int x, int y, char *text, SDL_Renderer *renderer, TTF_Font *font);
void blocks_animation(GameState *game);
void portals_animation(GameState *game);
void change_fon(GameState *game);
char *mx_strnew(const int size);
