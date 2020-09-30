#include<stdio.h>
unsigned int mstrlen(char* arg)
{
char* temp_arg=arg;
unsigned int i=0;
while(*temp_arg++)
	i++;
printf("i  func\n");
return i;
}

