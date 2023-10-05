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

void print_pokemon(Pokemon* pokemon, FILE *stream) {
    if (stream == NULL) {
        stream = stdout;
    }
    fprintf(stream, "Pokemon: %s\n", pokemon->name);
    fprintf(stream, "Pokemon ID: %d\n", pokemon->pokemon_id);
    fprintf(stream, "Pokemon Height: %f\n", pokemon->height);
    fprintf(stream, "Pokemon Weight: %f\n", pokemon->weight);
}

void destroy_pokemon(Pokemon* pokemon) {
    free(pokemon->name);
    free(pokemon);
}

void set_pokemon_id(Pokemon* pokemon, int id){
    pokemon->pokemon_id = id;
}

int  get_pokemon_id(Pokemon* pokemon){
    return pokemon->pokemon_id;
}

void set_pokemon_name(Pokemon* pokemon, char* name){
    strcpy(pokemon->name, name);
}

char*  get_pokemon_name(Pokemon* pokemon){
    return pokemon->name;
}

void set_pokemon_height(Pokemon* pokemon, double height){
    pokemon->height = height;
}

double  get_pokemon_height(Pokemon* pokemon){
    return pokemon->height;
}

void set_pokemon_weight(Pokemon* pokemon, double weight){
    pokemon->weight = weight;
}

double  get_pokemon_weight(Pokemon* pokemon){
    return pokemon->weight;
}