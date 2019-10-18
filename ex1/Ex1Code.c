#include <stdio.h>

int main(void)
{
	
FILE *inputfile;
FILE *outputfile;
inputfile = fopen("input.txt", "r");
outputfile = fopen("output.txt", "w");
char num[2];

if (inputfile == NULL)
	printf("There was an error reading the file.");

while(fscanf(inputfile, "%s", &num) != EOF)
{
	printf("Number read n = %s. ", num);
	fprintf(outputfile, "%s ", num);
}
fclose(inputfile);
fclose(outputfile);
return 0;
}
