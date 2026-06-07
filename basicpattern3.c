#include <stdio.h>

int main(void)
{
    int Num;
    printf("Enter Number:\t"); //4
    scanf("%d",&Num);

    for(int iCounter = 1; iCounter <= Num; iCounter++)
    printf("%d",iCounter); //1234
    
    return 0;
}