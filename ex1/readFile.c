#include <stdio.h>

int hexStrToInt(char a, char b);

int main()
{
	FILE *fp = fopen("input_file.txt", "r");
    char buff[4];

    FILE *wf = fopen("output_file.txt", "w");

	while(fgets(buff, sizeof buff, fp) != NULL)
	{
        int i = hexStrToInt(buff[0], buff[1]);
        fputc(i, wf);
	}

	fclose(fp);
    fclose(wf);

	return 0;
}

int hexStrToInt(char a, char b)
{
    int c1 = (a < 60) ? a - 48 : a - 87;
    int c2 = (b < 60) ? b - 48 : b - 87;
    return c1 * 16 + c2;
}