#include<iostream>
#include<string>
using namespace std;
int main(){
    int SSN[30],year[30],i,a,n;
    float CUM[30];
    string LN[30],GN[30];
    cout<<"Enter number of people : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Social Security Number : ";
        cin>>SSN[i];
        cout<<"Enter Last Name : ";
        cin>>LN[i];
        cout<<"Enter Given Name : ";
        cin>>GN[i];
        cout<<"Enter CUM : ";
        cin>>CUM[i];
        cout<<"Enter Year : ";
        cin>>year[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<SSN[i]<<" "<<LN[i]<<" "<<GN[i]<<" "<<CUM[i]<<" "<<year[i]<<endl;
    }
    cout<<"\nEnter position for inserting : ";
    cin>>a;
    for(i=n+1;i<a;i--)
    {
            SSN[i]= SSN[i-1];
            LN[i]=LN[i-1];
            GN[i]=GN[i-1];
            CUM[i]= CUM[i-1];
            year[i]=year[i-1];
    }
        cout<<"Enter Social Security Number : ";
        cin>>SSN[a];
        cout<<"Enter Last Name : ";
        cin>>LN[a];
        cout<<"Enter Given Name : ";
        cin>>GN[a];
        cout<<"Enter CUM : ";
        cin>>CUM[a];
        cout<<"Enter Year : ";
        cin>>year[a];

    for(i=0;i<n+1;i++)
    {
        cout<<SSN[i]<<" "<<LN[i]<<" "<<GN[i]<<" "<<CUM[i]<<" "<<year[i]<<endl;
    }





return 0;
}

