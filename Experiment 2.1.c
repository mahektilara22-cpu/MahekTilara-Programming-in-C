/*Experiment 2: Operators
1.WAP a C program to calculate the area and perimeter of a rectangle based on its length
and width.*/
#include <stdio.h>
int main()
{
printf("Name-Mahek Jayantilal Tilara \n SAP id-590025452 \n course-BSC");
printf("\n------------------------------------------\n");
printf("\n")
float length, width, area, perimeter;
printf("Enter the length of the rectangle: ");
scanf("%f", &length);
printf("Enter the width of the rectangle: ");
scanf("%f", &width);
area = length * width;
perimeter = 2 * (length + width);
printf("Area of the rectangle = %.2f\n", area);
printf("Perimeter of the rectangle = %.2f\n", perimeter);
return 0;
}
