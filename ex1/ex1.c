#include <stdio.h>

int main()
{
    FILE* input;
    input = fopen("input_file.txt");
	
	char c = fgetc(input);
    while(c != EOF)
    {
        printf("%c ", c);
		c = fgetc(input);
    }
}
