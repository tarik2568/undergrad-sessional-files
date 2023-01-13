#include<iostream>
using namespace std;
int main(){
    const int size=5;
    int arr[size]={0,1,2,3,4};
    int *p;
    //p=&arr[0];
    p=arr; //by default arr[0] er address pass hoy

    for(int i=0;i<size;i++)
    {
        cout<<"Address : "<<(p+i)<<"  Value : "<<*(p+i)<<endl;
    }






return 0;
}
