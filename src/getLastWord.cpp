/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *word;
	int start, end, i,count=0;
	if (str == NULL)
		return NULL;
	for (i = 0; str[i] != '\0'; i++)
	{

	}
	i++;
	while (i > 0 && str[i] == ' ')
	{
		i--;
	}
	end = i;
	while (i >= 0 && str[i] != ' ')
	{
		i--;
	}
	i++;
	start = i;
	word = (char *)malloc(sizeof(char)* (end - start + 2));
	for (i = start; i <= end; i++)
		word[count++] = str[i];
	word[count] = '\0';
	return word;
}
