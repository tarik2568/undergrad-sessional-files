#include<stdio.h>
int main(){
    int A[100],B,C[10],*a,*b,*x,*y,*z;
    a=&A[23];
    b=&A[24];
    printf("%d\n%d\n\n",a,b);

    x=&A[0];
    printf("A : %d\n",x);

    y=&B;
    printf("B : %d\n",y);

    z=&C[0];
    printf("C : %d\n",z);




return 0;
}
