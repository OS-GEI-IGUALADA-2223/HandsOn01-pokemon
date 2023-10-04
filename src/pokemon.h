/*
 * pokemon.h
 */

#ifndef _POKEMON_H_
#define _POKEMON_H_

typedef struct pokemon {
    int          pokemon_id;
    char *       name;
    double       height;
    double       weight;
} Pokemon;

Pokemon create_pokemon(int pokemon_id, char *name, double height, double weight);
void print_pokemon(Pokemon pokemon);
void destroy_pokemon(Pokemon pokemon);

#endif // _POKEMON_H_