/*
 * main.c
 */

#include <stdio.h>
#include "pokemon.h"

int main() {
    Pokemon pikachu = create_pokemon(25, "Pikachu", 0.4, 6.0);
    print_pokemon(pikachu);
    pikachu.pokemon_id = 26;
    print_pokemon(pikachu);
    destroy_pokemon(pikachu);
    return 0;
}