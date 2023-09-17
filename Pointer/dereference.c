 #include <stdio.h>
char *getstring()
{
    char s[]="Sing the song";
    return s;
}

int main()
{
    int a[]={4,5,6,7,8,9,10,11,12};
    char s[]="Kacha Badam";
    int *p;
    p=a;
    printf("Base address of the arrray a[]: %p\n",a);
    printf("Value of pointer variable p: %p\n",p);
    printf("Printing the string : %s\n",s);
    printf("Geting the string using a function with return type pointer: %s",getstring()); //output is null
}
