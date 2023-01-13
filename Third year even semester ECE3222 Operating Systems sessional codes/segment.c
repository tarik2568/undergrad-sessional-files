#include <stdio.h>

int main(){

    int segment[] = {0,1,2,3,4};
    int base[] = {500,2500,1500,4600,3800};
    int limit[] = {600,800,400,200,400};

    int s=1, d=803, phy=0;

    if(d<limit[s]){
        phy = base[s]+d;
        printf("%d",phy);
    }
    else{
        printf("LIMIT EXCEEDED");
    }

    
    return 0;
}