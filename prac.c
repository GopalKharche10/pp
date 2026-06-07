#include <stdio.h>

int main(void)
{
    int iRows;      
    int iColumns;   
    int iCounter1;
    int iCounter2;

    printf("ENter no of rows:\t");
    scanf("%d",&iRows);

    printf("ENter no of icolumns:\t");
    scanf("%d",&iColumns);


    for(iCounter1 = 1 ; iCounter1 <= iRows; iCounter1++)
     {
        for(iCounter2 = 1; iCounter2 <= iColumns; iCounter2++)
        {
            printf("%c",iCounter2);
        }
        printf("\n");
     }
}
