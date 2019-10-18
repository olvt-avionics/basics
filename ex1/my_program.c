#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		printf("Usage: .\\ex1.exe [filename]\n");
		return EXIT_FAILURE;
	}
	else
	{
		FILE *fptr;
		char c;
		errno_t error = fopen_s(&fptr, argv[1], "r");
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
	
}