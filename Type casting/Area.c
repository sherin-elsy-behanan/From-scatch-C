#include <stdio.h>
#define PI 3.14
void diameter(float d)
    
{
    float r;
    r=(float)d/2;
    float area;
    area= PI*r*r;
    printf("Area = %.2f",area);
    
}
int main()
{
    float num;
    printf("Enter the diameter");
    scanf("%f",&num);
    diameter(num);

    return 0;
}
