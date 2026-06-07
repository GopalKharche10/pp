#include <stdio.h>

int main(void)
{
    int iNumber;;
    int iCounter1;
    int iCounter2;

    printf("Enter Number:\t ");
    scanf("%d",&iNumber);

    for (iCounter1 = 1; iCounter1 <= iNumber ; iCounter1++)
    {
        for(iCounter2 = 1 ; iCounter2 <= iCounter1 ; iCounter2++)
        {
            printf("*");
        }
        printf("\n");
    }
     return 0;

}