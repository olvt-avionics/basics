int main() {
    File *in = fopen("input_file.txt", "r");
    File *out = fopen("output.txt","w");
    if (out == null || in == null) {
        printf("Requested File could not be accessed\n");
        return -1;
    }
    while (fscanf(in, "%d",&hold)!= EOF) {
        fprintf("Number n = %d. ", hold);
    }
    fclose(in);
    fclose(out);
    return 1;
}
