/*Experiment 2: Operators
2.WAP a C program to convert temperature from celsius to Fahrenheit using the
formula: F=(C*9/5)+32.*/
#include <stdio.h>
int main()
{
printf("Name-Mahek Jayantilal Tilara \nSAP id-590025452 \ncourse-BSC");
printf("\n------------------------------------------\n");
printf("\n");
float celsius, fahrenheit;
printf("Enter temperature in Celsius: ");
scanf("%f", &celsius);
fahrenheit = (celsius * 9 / 5) + 32;
printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
return 0;
}
