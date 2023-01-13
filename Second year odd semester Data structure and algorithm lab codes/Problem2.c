#include<stdio.h>
int main(){
    int A[10],n,i;
    scanf("%d",&n);
    //01
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    //02
    int x,c=0;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==A[i])
        {
            printf("Present\n");
            c=1;
        }
    }
    if(c!=1)
    {
        printf("Not Present\n");
    }
    //03
    int y;
    scanf("%d",&y);
    for(i=0;i<n;i++)
    {
        if(y==A[i])
        {
            printf("%d\n",i+1);
        }
    }
    //04


return 0;
}
