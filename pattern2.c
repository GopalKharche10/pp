#include <stdio.h>

int main(void)
{
    int Num;
    printf("Enter Number:\t"); //4
    scanf("%d",&Num);

    for(int iCounter = 1; iCounter <= Num; iCounter++)
    printf("Hello"); // HelloHelloHelloHello
    
    return 0;
}
//Write a C program to read a number n and print the string "Hello" exactly n times on the same line using a for loop.