/* 4.3 Patterns: 12*/
#include<stdio.h>
int main()
{
printf("\Mahek TilaranSAP ID: 590025452\nCourse: BSc. CS. \nBatch: 1");
printf("\n-----------------\n");
printf("The pattern is:\n");
int i, l;
for(i=5; i>=1; i--)
{
for(l=6-i; l<=5; l++)
{
printf("%d", l);
}
printf("\n");
}
return 0;
}
