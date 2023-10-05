/*
 * pokemon.h
 */

#ifndef _POKEMON_H_
#define _POKEMON_H_

typedef struct pokemon Pokemon;

Pokemon* create_pokemon(int pokemon_id, char *name, double height, double weight);
void print_pokemon(Pokemon* pokemon, FILE *stream);
void destroy_pokemon(Pokemon* pokemon);

// GETTERS I SETTERS
void set_pokemon_id(Pokemon* , int id);
int  get_pokemon_id(Pokemon* pokemon);

void set_pokemon_name(Pokemon* pokemon, char* name);
char* get_pokemon_name(Pokemon* pokemon);

void set_pokemon_height(Pokemon* pokemon, double height);
double  get_pokemon_height(Pokemon* pokemon);

void set_pokemon_weight(Pokemon* pokemon, double weight);
double  get_pokemon_weight(Pokemon* pokemon);

Pokemon* crear_des_de_cadena(char *cadena);

#endif // _POKEMON_H_