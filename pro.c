#include<stdio.h>
#include<conio.h>
int a(const void*d,const void*y)
{
retury(*(char*)y)-(*(char*d));
}
void main()
{
int i,j,y;
char y[2*10];
scanf("%d",&a);
j=a;
while(i<a)
{
i=0;
y[i]='B';
y[j+1]='W';
j++;
}
y[a*2]='\0';
qsort(y,2*a,sizeof(char),a);
printf("%s",y);
}