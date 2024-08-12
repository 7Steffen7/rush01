#ifndef RUSH01_H
#define RUSH01_H

#include <stdbool.h>
#include <unistd.h>
#include <string.h>

void change_first_nbr(char *arr, int nbr);
void swap_last_2(char *arr);
void rotate(char *arr);
void rev_rotate(char *arr);
void print_matrix(char matrix[4][4]);
bool num_gen(char matrix[4][4], int string_lvl, char *usr_input);
void assign_array(char *arr, char matrix[4][4], int string_lvl);
bool input_parsing(int argc, char **argv);
char counter(char a, char b, char c, char d);
void assign_array(char *arr, char matrix[4][4], int string_lvl);
void print_matrix(char matrix[4][4]);

#endif
