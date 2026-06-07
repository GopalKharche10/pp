#include <stdio.h>

int main(void)
{
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;

    printf("ENter No of Rows:\t");
    scanf("%d", &iRows);

    printf("Enter No of columns;\t");
    scanf("%d", &iColumns);

    for (iCounter1 = 1; iCounter1 <= iRows; iCounter1++) // outer loop -> prints No of Rows / number of lines
    {
        for (iCounter2 = 1; iCounter2 <= iColumns; iCounter2++) // inner loop -> prints No of Columns / number of star in each line
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}