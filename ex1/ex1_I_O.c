
#include <stdio.h>
#include <stdlib.h>

int main()
{
			FILE *fptr;
			FILE *fptrout;
			char c; //need

			fptr = fopen("input_file.txt","r+"); //make sure to make r+ when this works

			fptrout = fopen("output_file.txt","w");
			
			if(fptr == NULL || fptrout == NULL) //checking validity
			{
						printf("Did not work/file cannot be opened\n");
						return -1;
			}
			
			while(fscanf(fptr,"%s",&c) != EOF) //endoffile checking addressing
						fprintf(fptrout,"%s ",&c);
			
			fclose(fptr);
			fclose(fptrout);
			
			printf("Done.");
			
			return 0;
}