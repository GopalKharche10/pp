#include <stdio.h>

int main(void)
{
    int iRows;         
    int iCounter1;
    int iCounter2;

    printf("ENter no of rows:\t");
    scanf("%d",&iRows);


    for(iCounter1 = 1 ; iCounter1 <= iRows; iCounter1++)
     {
        int a = 1;
        for(iCounter2 = 1; iCounter2 <= iCounter1; iCounter2++)
        {
            printf("%d ",a);
            a = a + 2;
        }
        printf("\n");
     }
}
// 1 
// 1 3 
// 1 3 5 
// 1 3 5 7