#include<stdio.h>
int main(){
    int A[10],*p,*q;
    p=&A[0];
    q=&A[8];

    printf("%d\n%d\n",p,q);


return 0;
}
