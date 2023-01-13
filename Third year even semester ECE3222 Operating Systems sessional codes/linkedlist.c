#include <stdio.h>

int main()
{
    int block[20], i, tb, start, end, j, k;
    printf("Total Block Number? ");
    scanf("%d", &tb);
    printf("Enter a start address: ");
    scanf("%d", &start);
    printf("Enter a end address: ");
    scanf("%d", &end);
    printf("Please enter 0 for free space and 1 for used space: \n");
    for (i = 0; i < tb; i++)
    {
        printf("Block[%d] = ", i);
        scanf("%d", &block[i]);
    }

    int zero_blocks[10], counter = 0;

    for (j = 0; j <= tb; j++)
    {
        if (block[j] == 0)
        {
            zero_blocks[counter] = j;
            counter++;
        }
    }

    printf("\n");
    for (i = 0; i < counter; i++)
    {
        printf("Zero_Block[%d] = %d\n", i, zero_blocks[i]);
    }

    for (j = counter; j > 0; j--)
    {
        if (j == counter)
        {
            block[zero_blocks[j - 1]] = 0;
        }
        else
        {
            block[zero_blocks[j - 1]] = zero_blocks[j];
        }
    }

    printf("\n\n");
    for (j = 0; j < tb; j++)
    {
        printf("Block[%d] = %d\n", j, block[j]);
    }

    return 0;
}