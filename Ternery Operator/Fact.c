#include <stdio.h>
int fact(int n)
{
    return (n==0||n==1)? 1: n*fact(n-1); //ternary operator
}
int main()
{
    int num,f;
    printf("Enter a number");
    scanf("%d",&num);
    f=fact(num);
    printf("Factorial : %d",f);

    return 0;
}
