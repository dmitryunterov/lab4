#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	char gdeproc[256] = "/proc/";
	char* argument1 = argv[1];
	char* skleika = strcat(strcat(gdeproc,argument1),"/environ");
	FILE *ptr_file;
	ptr_file = fopen(skleika, "r");
	char c;
	do
{
	c = fgetc(ptr_file);
	if ( c == '\0' )
	{
	c = '\n';
	}
	printf("%c", c);
}
	while ( c != EOF );
}
