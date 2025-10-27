/*Experiment 2: Operators
4. Write a program to find the roots of the quadratic equations.*/
#include<stdio.h>
#include <math.h>
int main()
{
double a, b, c, x1, x2;
printf("Mahek tilara\nSap id- 590025452 \nCourse- BSc CS \nBatch 1");
printf("\n-----------------------------------------------------\n");
printf("Enter the coeﬃcient of x^2, x and the constant of the Quadratic
equation:");
scanf("%1f%1f%1f", &a, &b, &c);
printf("Your Quadratic equation is: %1fx^2+(%1fx)+(%1f)=0 \n", a,b,c);
if((sqrt((b*b)-(4*a*c)))<0)
{
printf("Roots of the given function does not exist and are imaginary");
}
{
else
x1=(sqrt((b*b)-(4*a*c))-b)/(2*a);
x2=(sqrt((b*b)-(4*a*c))+b)/(2*a);
printf("Roots of the given function are %1f %1f", x1, x2);
}
return 0;
}
