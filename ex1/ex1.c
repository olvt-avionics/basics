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
    ifstream in;
    in.open("input_file.txt");
    int temp;
    while(!in.isEmpty())
    {
        getline(in,temp, " ");
        printf("%d ", temp);
    }
}
