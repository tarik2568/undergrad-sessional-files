#include<stdio.h>
int main()
{

    int start[100],length[100],number_of_files,file_name[100];

    printf("Please enter the number of files=");
    scanf("%d",&number_of_files);

    for(int i=0;i<number_of_files;i++)
    {

       printf("Please enter the starting address for file %d= ",i);
       scanf("%d",&start[i]);

       printf("Please enter the length for file %d= ",i);
       scanf("%d",&length[i]);


    }

    for(int i=0;i<number_of_files;i++)
    {
       printf("For file %d \t ",i );

       printf("    The starting address for file %d= %d \t",i,start[i]);


       printf("    The ending address for file %d= %d \n",i,start[i]+length[i]);



    }



    return 0;
}
