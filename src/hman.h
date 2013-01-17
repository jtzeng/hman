/*
 * Name: hman.h
 * Author: justin_
 * Date: January 16, 2013
 */

#include <stdlib.h>

/*
 * Prints the hangman.
 */
void print_hman(int dead);

/*
 * Represents the alphabet.
 */
const char alphabet[] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
	'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
	's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};

/*
 * Is a character part of the alphabet?
 */
int is_al(char c);

/*
 * Returns a random integer.
 */
int rand_int(const int min, const int max);

/*
 * Generate a random word and stores
 * it in the word[] argument (a string).
 */
void gen_rnd_word(char word[], int *ln);

/*
 * Finds the definition for a particular
 * word in a file according to line number.
 */
void find_defn(char defn[], int ln);
