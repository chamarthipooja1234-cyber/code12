#include<stdio.h>
int main()
{
float radius,area;
printf("enter radius:");
scanf("%f",&radius);
area = PI * radius * radius;
printf("Area: %.2f",area);
return 0;
}