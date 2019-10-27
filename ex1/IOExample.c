#include<stdio.h> 
int main() {
    FILE *in;
    in = fopen("input_file.txt", "r");
    FILE *out;
    out = fopen("output.txt","w");
    if (out == NULL || in == NULL) {
        printf("Requested File could not be accessed\n");
        return -1;
    }
    int hold;
    while (fscanf(in, "%d",&hold)== 1) {
        fprintf(out,"Number n = %d. ", hold);
    }
    fclose(in);
    fclose(out);
    return 1;
}
