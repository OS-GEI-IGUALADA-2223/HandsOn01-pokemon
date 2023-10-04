/*
 * pokemon.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen(), strcpy()
#include "pokemon.h"

struct pokemon {
    int          pokemon_id;
    char *       name;
    double       height;
    double       weight;
};

Pokemon* create_pokemon(int pokemon_id, char *name, double height, double weight) {
    Pokemon* pokemon;
    pokemon = malloc(sizeof(Pokemon));
    pokemon->pokemon_id = pokemon_id;
    pokemon->name = malloc( (strlen(name) +1) * sizeof(char));
    strcpy(pokemon->name, name);
    pokemon->height = height;
    pokemon->weight = weight;

    return pokemon;
}

void print_pokemon(Pokemon* pokemon) {
    printf("Pokemon: %s\n", pokemon->name);
    printf("Pokemon ID: %d\n", pokemon->pokemon_id);
    printf("Pokemon Height: %f\n", pokemon->height);
    printf("Pokemon Weight: %f\n", pokemon->weight);
}

void destroy_pokemon(Pokemon* pokemon) {
    free(pokemon->name);
    free(pokemon);
}

void set_pokemon_id(Pokemon* pokemon, int id){
    pokemon->pokemon_id = id;
}