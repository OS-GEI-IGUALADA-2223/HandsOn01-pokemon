/*
 * test.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon.h"

void test_crear_pokemon() 
{

    Pokemon* pikachu = create_pokemon(25, "Pikachu", 0.4, 6.0);
    
    if ( get_pokemon_id(pikachu) != 25 ||
         strcmp(get_pokemon_name(pikachu), "Pikachu") != 0 ||
         get_pokemon_height(pikachu) != 0.4 ||
         get_pokemon_weight(pikachu) != 6.0 
        ){
        printf("ERROR: test_crear_pokemon NO SUPERAT. Dades incorrectes.\n");
    } else {
        printf("Test de test_crear_pokemon passat amb èxit.\n");
    }

    destroy_pokemon(pikachu);
}

int main() {
    test_crear_pokemon();
    return 0;
}