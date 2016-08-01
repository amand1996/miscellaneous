#include<stdio.h>
void main(int argc, char *argv[])
{
	FILE *out_file= fopen(argv[1], "a");
	fprintf(out_file,"\n %s", argv[2]);
	fclose(out_file);
}
