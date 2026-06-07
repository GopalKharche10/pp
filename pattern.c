#include <stdio.h>

int main(void)
{
    
    int num;
    printf("Enter Number:\t");
    scanf("%d", &num);
   // *********... N no of stars
    for(int iCounter = 1; iCounter <= num ; iCounter ++)
    printf("*");
    return 0;
}
//Write a C program that takes an integer input n and prints the * symbol exactly n times on a single..
//line using a for loop.......