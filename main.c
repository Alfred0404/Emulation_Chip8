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
#include "SDL.h"
#define true 1
#define false 0

const SCREEN_WIDTH = 640;
const SCREEN_HEIGHT = 480;


void init_sdl(void) {

}


void cleanup_sdl(void) {

}


int main() {
    printf("----------DEBUT DU PROJET----------\n");

    // Initialize SDL

    // Final cleanup

    return 0;
}