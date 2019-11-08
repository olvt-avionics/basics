//
//  ex1.c
//  
//
//  Created by Janak Majeethia on 11/8/19.
//

#include <stdio.h>
#include <fstream>

int main()
{
    FILE* in = fopen("input_file.txt", "r");
    int i = 0;
    
    fscanf(in, "%d", &i);
    while(!feof(in))
    {
        printf("%d ",i);
        fscanf(in, "%d", &i);
    }
    
    fclose(in);
}
