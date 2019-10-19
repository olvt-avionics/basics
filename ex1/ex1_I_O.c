
#include <stdio.h>
#include <stdlib.h>

int main()
{
			FILE *fptr;
			FILE *fptrout;
			char c; //need

			fptr = fopen("input_file.txt","r"); //make sure to make r+ when this works

			if(fptr == NULL) //checking validity
			{
						printf("Did not work/file cannot be opened\n");
						return -1;
			}
			
			fptrout = fopen("output_file.txt","w");
			
			if(fptrout == NULL)
			{
						printf("File cannot be written to...\n");
						return -1;
			}
			
			while(fscanf(fptr,"%s",&c) != EOF) //endoffile checking addressing
			{
						//printf("in the loop"); testing success
						fprintf(fptrout,"%s ",&c);
			}
			
			fclose(fptr);
			fclose(fptrout);
			
			printf("Done.");
			
			return 0;
}