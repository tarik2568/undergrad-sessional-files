#include<iostream>
#include<string>
using namespace std;
int main(){
    int SSN[30],s,SOC,year[30],y,i,j,n;
    float CUM[30],c;
    string LN[30],ln,GN[30],gn;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(SSN[i]>SSN[i+1])
            {
                s=SSN[i];
                SSN[i]=SSN[i+1];
                SSN[i+1]=s;

                y=year[i];
                year[i]=year[i+1];
                year[i+1]=y;

                c=CUM[i];
                CUM[i]=CUM[i+1];
                CUM[i+1]=c;

                ln=LN[i];
                LN[i]=LN[i+1];
                LN[i+1]=ln;

                gn=GN[i];
                GN[i]=GN[i+1];
                GN[i+1]=gn;
            }
        }
    }
    cout<<"Sorted Array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<SSN[i]<<" "<<LN[i]<<" "<<GN[i]<<" "<<CUM[i]<<" "<<year[i]<<endl;
    }
    cout<<"\nEnter Social Security Number for searching : ";
    cin>>SOC;
    for(i=0;i<n;i++)
    {
        if(SSN[i]==SOC)
        {
             cout<<SSN[i]<<" "<<LN[i]<<" "<<GN[i]<<" "<<CUM[i]<<" "<<year[i]<<endl;
        }
    }






return 0;
}

