
#include <stdio.h>

int main()
{
    int start, end, files, file_start, file_end, counter, flagA, flagB, i, j;
    int storage[1024], countA[1024], countB[1024];
    for (i = 0; i < 1024; i++)
    {
        countA[i] = 0;
        countB[i] = 0;
    }
    printf("Enter the starting address of storage: ");
    scanf("%d", &start);
    printf("Enter the ending address of storage: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        storage[i] = 0;
    }
    printf("FREE BLOCK = 1\n");
    printf("USED BLOCK = 0\n");
    printf("\nCurrent Storage: \n");
    printf("[");

    for (i = start; i <= end; i++)
    {
        printf("%d\t", storage[i]);
    }
    printf("]");

    printf("\n\n");

    printf("Enter the number of Files: ");
    scanf("%d", &files);
    printf("\n\n");
    for (i = 0; i < files; i++)
    {
        printf("Starting address of File[%d]: ", i);
        scanf("%d", &file_start);
        printf("Ending address of File[%d]: ", i);
        scanf("%d", &file_end);

        for (j = file_start; j <= file_end; j++)
        {
            if (storage[j] == 0)
            {
                storage[j] = 1;
            }
            else
            {
                printf("Trap error: Already used address %d before\n", j);
                break;
            }
        }
    }
    counter = 0;
    flagA = 0;
    flagB = 0;

    for (i = start; i <= end; i++)
    {
        if (storage[i] == 0)
        {
            if (flagA == 0)
            {
                countA[i] = i;
            }
            else if (flagA == 1 && i == end - 1)
            {
                countB[i] = counter + 1;
            }
            counter = counter + 1;
            flagA = 1;
            flagB = 0;
        }
        else if (storage[i] == 1)
        {
            if (flagB == 0)
            {
                countB[i] = counter;
            }
            counter = 0;
            flagA = 0;
            flagB = 1;
        }
    }

    printf("\nSpace in Memory: \n\n");
    printf("[");

    for (i = start; i <= end; i++)
    {
        printf("%d\t", storage[i]);
    }
    printf("]");

    printf("\n\nFree space starts at: \n");

    for (i = 0; i < 1024; i++)
    {
        if (countA[i] != 0)
        {
            printf("%d\t", countA[i]);
        }
    }

    printf("\n\nAvailable continuous blocks: \n");

    for (i = 0; i < 1024; i++)
    {
        if (countB[i] != 0)
        {
            printf("%d\t", countB[i]);
        }
    }
}