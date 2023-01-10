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

#include <stdio.h>
#include "SDL2/SDL.h"

#define true 1
#define false 0

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


int main() {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Chip 8 Emulator", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Event windowEvent;

    while (true) {
        if (SDL_PollEvent(&windowEvent)) {
            if (windowEvent.type == SDL_QUIT) {
                break;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;

}