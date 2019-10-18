#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char c;
	errno_t error = fopen_s(&fptr, "input_file.txt", "r");
	if(fptr == NULL)
	{
		printf("Can't open the file. You screwed up\n");
		return EXIT_FAILURE;
	}
	c = fgetc(fptr);
	while(c != EOF)
	{
		printf("%c", c);
		c = fgetc(fptr);
	}
	fclose(fptr);
}