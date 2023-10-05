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
    char *       types[2];
};

Pokemon* create_pokemon(int pokemon_id, char *name, double height, double weight, char* types[2]) {
    Pokemon* pokemon;
    pokemon = malloc(sizeof(Pokemon));
    pokemon->pokemon_id = pokemon_id;
    pokemon->name = malloc( (strlen(name) +1) * sizeof(char));
    strcpy(pokemon->name, name);
    pokemon->height = height;
    pokemon->weight = weight;

    for (int i=0; i<2; i++){
        pokemon->types[i] = malloc( (strlen(types[i]) +1) * sizeof(char));
        strcpy(pokemon->types[i], types[i]);
    }

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
    fprintf(stream, "Types: %s & %s\n", pokemon->types[0], pokemon->types[1]);
}

void destroy_pokemon(Pokemon* pokemon) {
    free(pokemon->name);
    for (int i=0; i<2; i++){
        free(pokemon->types[i]);
    }
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

char** get_pokemon_types(Pokemon* pokemon){
    return pokemon->types;
}

void set_pokemon_types(Pokemon* pokemon, char* types[2]){
    for (int i=0; i<2; i++){
        strcpy(pokemon->types[i], types[i]);
    }
}

Pokemon* crear_des_de_cadena(char *cadena) {
    Pokemon* p = malloc(sizeof(struct pokemon));
    p->name = malloc(sizeof(char) * 100);
    for (int i=0; i<2; i++){
        p->types[i] = malloc(sizeof(char) * 100);
    }
    if (p == NULL) {
        fprintf(stderr, "Error creant el pokemon\n");
        return NULL;
    }

    sscanf(cadena, "%d %s %lf %lf %s %s", &p->pokemon_id, p->name, &p->height, &p->weight, p->types[0],p->types[1]);
    return p;
}