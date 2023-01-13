#include<stdio.h>
int main()
{

    int start[100],length[100],number_of_files;
    int freespace[100000];
    char file_name[100][100];

    printf("Please enter the number of files=");
    scanf("%d",&number_of_files);

    for(int i=0;i<number_of_files;i++)
    {

        printf("Please enter the name of the file %d=",i);
        scanf("%s",file_name[i]);



       printf("Please enter the starting address for file %s= ",file_name[i]);
       scanf("%d",&start[i]);

       printf("Please enter the length for file %s= ",file_name[i]);
       scanf("%d",&length[i]);

       for(int j=start[i];j<start[i]+length[i];j++)
       {
           if(freespace[j]==1)
           {
               printf(" \nError ! The space is already occupied The process will be terminated\n");
               i++;
               return 0;

           }


       }



       for(int j=start[i];j<start[i]+length[i];j++)
       {
           freespace[j]=1;
       }


    }

    for(int i=0;i<number_of_files;i++)
    {
       printf("For the file %s",file_name[i]);

       printf("    The starting address for file %s= %d \t",file_name[i],start[i]);


       printf("    The ending address for file %s= %d \n",file_name[i],start[i]+length[i]);



    }



    return 0;
}
