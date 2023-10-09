/*
 * main.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon-lib/pokemon.h"

int main() {

    char *types[2];
    types[0] = strdup("Electrical");
    types[1] = strdup("Earth");

    Pokemon* pikachu = create_pokemon(25, "Pikachu", 0.4, 6.0, types);
    print_pokemon(pikachu,stdout);
    Pokemon* raichu = malloc(sizeof(Pokemon*));
    set_pokemon_id(raichu,26);
    set_pokemon_name(raichu,"Raichu");
    set_pokemon_weight(raichu,0.9);
    set_pokemon_height(raichu,12.0);
    print_pokemon(raichu,stdout);

    free(types[0]);
    free(types[1]);
    free(raichu);
    destroy_pokemon(pikachu);
    return 0;
}