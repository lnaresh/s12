#include<stdio.h>

unsigned int mstrlen(char* a)
{
char* temp_a=a;
unsigned int len=0;
while(*temp_a++)
	len++;
return len;
}

int main()
{

char a[]="nameofthestring";
unsigned int len=mstrlen(a);
printf("%d\n",len);

}
