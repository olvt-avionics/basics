//
//  main.c
//  inOut
//
//  Created by Devan Eilbert on 11/14/19.
//  Copyright © 2019 Orbital Launch Vehicle Team. All rights reserved.
//

#include <stdio.h>


int main(void) {
    FILE *in = fopen("input_file.txt", "r");
    if (in == NULL){
        printf("Unable to open file.");
        return 0;
    }
    char buf[20];
    int n = 0;
    while (fscanf(in, "%s", buf) == 1){
        printf("%s\t", buf);
        n += 1;
    }
    return 0;
}
