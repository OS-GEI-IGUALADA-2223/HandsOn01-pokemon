/*
 * pokemon.h
 */

#ifndef _POKEMON_H_
#define _POKEMON_H_

typedef struct pokemon Pokemon;

Pokemon* create_pokemon(int pokemon_id, char *name, double height, double weight);
void print_pokemon(Pokemon* pokemon);
void destroy_pokemon(Pokemon* pokemon);
void set_pokemon_id(Pokemon* , int id);

#endif // _POKEMON_H_