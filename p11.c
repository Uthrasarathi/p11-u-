#include<stdio.h>
#include<conio.h>
void main()
{
 char n[100];
scanf("%s",n);
if((strcmp(n,"sunday")==0) || (strcmp(n,"saturday")==0))
{
printf("false ");
}
else
{
printf("true\n");
}
getch();
}
