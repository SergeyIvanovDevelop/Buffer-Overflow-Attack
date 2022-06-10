#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void win(void) 
{	
	//printf("%s\n", "HELLO_WORLD, FUCK CANARY!");
	system("echo HELLO_WORLD, FUCK CANARY!");
	system("/bin/sh");
}

void play(void)
{
	char buf[128];
	read(0,buf,128);
	printf(buf);
	char buf1[8];
	read(0,buf1,1000);
}

int main()
{
	play();
	return 0;
}
