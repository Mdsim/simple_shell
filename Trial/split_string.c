#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* gwaji
 */
char** split_string(char* str, char* delimiter)
/* Allocate memort for the array of words */
{
	char** words = malloc(sizeof(char*) * 100);
	int num_words = 0;

	/* Split the string into toens */
	char* token = strtok(str, delimiter);
	while (token != NULL)
	{
		words[num_words] = malloc(strlen(token) + 1);

		strcpy(words[num_words], token);
		num_words++;

		token = strtok(NULL, delimiter);
	}
	return words;
}

int main()
{
	char* str = "This is a sentence.";
	char* delimiter = " ";
	char** words = split_string(str, delimiter);

	int i = 0;
	while (words[i] != NULL)
	{
		printf("%s\n", words[i]);
		i++;
	}
	for (i = 0; words[i] != NULL; i++);
	{
	free(words[i]);
	}
	return 0;
}
