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

void test_imprimir() {
    // Crear un Pokémon
    Pokemon* pikachu = create_pokemon(25, "Pikachu", 0.4, 6.0);
    if (pikachu == NULL) {
        printf("ERROR: No s'ha pogut crear el Pokémon.\n");
        exit(-1);
    }

    // Redirigir la sortida estàndard a un fitxer per a comprovar-la
    FILE* fp = fopen("test_output.txt", "w");
    if (fp == NULL) {
        printf("ERROR: No s'ha pogut obrir el fitxer de sortida per a les proves.\n");
        destroy_pokemon(pikachu);
        exit(-1);
    }

    // Imprimir el Pokémon en el fitxer
    print_pokemon(pikachu, fp);
    fclose(fp);

    // Obrir el fitxer per llegir-lo
    fp = fopen("test_output.txt", "r");
    if (fp == NULL) {
        printf("ERROR: No s'ha pogut llegir el fitxer de sortida per a les proves.\n");
        destroy_pokemon(pikachu);
        exit(-1);
    }

    char expected_output[] = "Pokemon: Pikachu\nPokemon ID: 25\nPokemon Height: 0.400000\nPokemon Weight: 6.000000\n";
    char buffer[1000];
    char output[1000] = "";

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        strcat(output,buffer);
    } 

    if (strncmp(output, expected_output, strlen(expected_output)) != 0) {
        printf("ERROR: La cadena de sortida no coincideix.\n");
    } else {
        printf("Test de print_pokemon passat amb èxit.\n");
    }

    fclose(fp);

    // Alliberar memòria
    destroy_pokemon(pikachu);
}




int main() {
    test_crear_pokemon();
    test_imprimir();
    return 0;
}