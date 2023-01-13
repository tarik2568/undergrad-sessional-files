 #include<iostream>
#include<string>
using namespace std;
int main(){
    int SSN[30],year[30],i,n;
    float CUM[30];
    string LN[30],GN[30],name;
    cout<<"Enter number of people : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Social Security Number of : ";
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
    cout<<"\nEnter Last Name for searching : ";
    cin>>name;
    for(i=0;i<n;i++)
    {
        if(name==LN[i])
        {
             cout<<SSN[i]<<" "<<LN[i]<<" "<<GN[i]<<" "<<CUM[i]<<" "<<year[i]<<endl;
        }
    }




return 0;
}

