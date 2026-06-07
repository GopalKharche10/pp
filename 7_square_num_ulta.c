#include <stdio.h>

int main(void)
{
    int iNum;
    int iCounter1;
    int iCounter2;

    printf("Enter Number:\t");
    scanf("%d", &iNum);

    for (iCounter1 = 1; iCounter1 <= iNum; iCounter1++)
    {
        for (iCounter2 = 1; iCounter2 <= iNum + 1 - iCounter1; iCounter2++)
        {
            printf("%d ", iCounter2);
        }
        printf("\n");
    }
    return 0;
}

//1 2 3 4 
// 1 2 3 
// 1 2 
// 1 