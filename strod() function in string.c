#include<stdio.h>
#include<stdlib.h>
void main()
{
    double num;
    num = strtod("123.345abcdefg",NULL);
    printf("%lf",num);

}
