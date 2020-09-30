#include<stdio.h>

unsigned int mstrlen(char* a)
{
char* temp_a=a;
unsigned int len=0;
while(temp_a[len++]);

printf("a=%p\n",a);
printf("a+len-1=%p,%c\n",a+len-1,*(a+len-2));
return len-1;
}

int main()
{
char a[]="nameofthestring";
unsigned int len=mstrlen(a);
printf("%d\n",len);

}
