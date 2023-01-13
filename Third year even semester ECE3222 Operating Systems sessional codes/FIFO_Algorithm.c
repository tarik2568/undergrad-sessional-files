#include<stdio.h>
int main()
{
    int i,page_size,frame_size,blank;
    printf("Please enter the page size/ frame size=");
    scanf("%d",&page_size);
    frame_size=page_size;
    int page[page_size];
    for(i=0;i<page_size;i++)
    {
        page[i]=-1;
    }
    blank=0;

    for(i=0;i<page_size;i++)
    {
        if(page[i]==-1)
        {
            blank++;
        }
    }
    printf("%d",blank);


    int input_string_lenth;
    printf("\nPlease enter the length of the input string= ");
    scanf("%d",&input_string_lenth);
    int input_string[input_string_lenth];
    printf("\nPlease enter the input string= ");
    for(i=0;i<input_string_lenth;i++)
    {
        scanf("%d",&input_string[i]);
    }



    return 0;
}
