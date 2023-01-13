#include <stdio.h>

int main()
{
    int i;

    int segment[5] = {0,1,2,3,4};
    int base[5] = {1400,6300,4300,3200,4700};
    int limit[5] = {1000,400,400,1100,1000};


    for(i=0;i<5;i++)
    {
        printf("segement=%d\n",i);
        printf("Starting=%d\n",base[i]);
        printf("End=%d\n",base[i]+limit[i]);

        printf("\n \n \n");

    }




    return 0;
}
