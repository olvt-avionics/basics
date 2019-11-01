//
//  ex1_in_out.c
//  ex1_in_out
//
//  Created by Pranav Rao on 10/31/19.
//  Copyright © 2019 Pranav Rao. All rights reserved.
//

#include <stdio.h>

int main()
{
    //creating pointer to the input and ouput file
    FILE *ifp, *ofp;
    char *mode = "r";
    char str;
    
    ifp = fopen("input_file.txt", mode);
    
    if (ifp == NULL)
    {
        fprintf(stderr, "Can't open input_file\n");
        return 1;
    }
    
    ofp = fopen("output.txt", "w");
    
    while(fscanf(ifp,"%s",&str) != EOF)
    {
        fprintf(ifp,"%s ",&str);
    }
    
    fclose(ifp);
    fclose(ofp);
    
    return 0;
}
