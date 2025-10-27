/*Experiment 2: Operators
3. Write a program to calculate compound interest.*/
#include <stdio.h>
#include <math.h>
int main()
{
printf("Name-Mahek Jayantilal Tilara \nSAP id-590025452 \ncourse-BSC");
printf("\n------------------------------------------\n");
printf("\n");
float principal, rate, time, compoundInterest, amount;
printf("Enter the principal amount: ");
scanf("%f", &principal);
printf("Enter the annual interest rate (in %%): ");
scanf("%f", &rate);
printf("Enter the time (in years): ");
scanf("%f", &time);
amount = principal * pow((1 + rate / 100), time);
compoundInterest = amount - principal;
printf("Compound Interest = %.2f\n", compoundInterest);
printf("Total Amount = %.2f\n", amount);
return 0;
}
