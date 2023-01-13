#include<iostream>
using namespace std;
int main(){
    int LA[30],i,n,a;
    cout<<"Enter the size of the array LA : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>LA[i];
    }
    cout<<"Enter position for inserting value : ";
    cin>>a;
    for(i=n+1;i>a;i--)
    {
        LA[i]=LA[i-1];
    }
    cout<<"Enter value : ";
    cin>>LA[a];
    for(i=0;i<n+1;i++)
    {
        cout<<LA[i]<<endl;
    }






return 0;
}

