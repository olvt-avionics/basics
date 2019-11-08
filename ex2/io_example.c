#include <stdio.h>

int main()
{
    //creating pointer to the input and ouput file

    FILE *ifp = fopen("input_file.txt", "r"); //input file
    FILE *ofp = fopen("output.txt", "w"); //oput file
    
    if (ifp == NULL) //file was not accessible
    {
        fprintf(stderr, "Can't open input_file\n");
        return 1;
    }
    char str; //declaring str for the while loop
    while(fscanf(ifp,"%s",&str) != EOF)
    {
        fprintf(ifp,"%s ",&str); //print
    }
    
    fclose(ifp); //close both files
    fclose(ofp);
    return 0;
}
