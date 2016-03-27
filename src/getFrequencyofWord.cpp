/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int count = 0, j = 0, count1 = 0;
	for (int i = 0; word[i] != '\0'; i++)
		count1++;

	for (int i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == word[j])
		{
			j++;
			if (j == count1){
				count++;
				j = 0;
			}
		}
		else if (str[i] != word[j])
			j = 0;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

