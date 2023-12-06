#include <stdio.h>
#include <string.h>
/* Dollar print
 *  
 */
int main()
{
	char command[100];

	printf("$ ");

	fgets(command, sizeof(command), stdin);

	command[strcspn(command, "\n")] = '\0';

	printf("%s\n", command);
	
	return 0;
}

