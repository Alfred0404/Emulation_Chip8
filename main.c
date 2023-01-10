#include <stdio.h>
#include "SDL2/SDL.h"

/* Chip 8 specifications :

- memory : 4Kbits (4096 bits)
- opcodes : 35 instructions
- registers : 15 8bits
- index register and program counter : values between 0x000 and 0xFFF
- memory map :
    0x000-0x1FF : Chip 8 interpreter (contains font set in emu)
    0x050-0x0A0 : Used for the built in 4x5 pixel font set (0-F)
    0x200-0xFFF : Program ROM and work RAM

- graphic system : one instruction to draw sprite on the screen
                   only black and white and has 2048px (63 x 32)

- HEX based keypad (16 keys) 

*/


#define true 1
#define false 0

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


int init_sdl(void) {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER) != 0) {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return 1;
    }
    return 0;
}


void final_cleanup(void) {
    SDL_Quit();
}


int main(int argv, char** args) {
    (void)argv;
    (void)args;

    // Init SDL
    if(init_sdl() != 0) exit(EXIT_FAILURE);

    //Final cleanup
    final_cleanup();

    exit(EXIT_SUCCESS);

}