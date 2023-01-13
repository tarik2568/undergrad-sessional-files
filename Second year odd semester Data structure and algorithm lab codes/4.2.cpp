#include<iostream>
using namespace std;
int main(){
    int LA[30],i,n,a,*p;
    cout<<"Enter the size of the array LA : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>LA[i];
    }
    cout<<"Enter value for searching : ";
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a==LA[i])
        {
            p=&LA[i];
            cout<<"Position of the value : "<<i+1<<endl;
            cout<<"Memory location of the value : "<<p<<endl;

        }
    }




return 0;
}
