#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,frame[20],page[50],available,k,f,count=0;
    double p,hit;
    cout<<"Enter number of Total Pages:"<<endl;
    cin>>p;
    cout<<"Enter the reference string:"<<endl;
    for(i=1;i<=p;i++)
    {
        cin>>page[i];
    }
     cout<<"Enter number of frames:"<<endl;
     cin>>f;
    for(i=0;i<f;i++)
    {        frame[i]=-5;

    }
    for(i=1;i<=p;i++)

    {cout<<"     "<<page[i];

                       available=0;
    for(k=0;k<f;k++)
    {
        if(frame[k]==page[i])  available=1;
        hit++;

    }
    if(available==0)
    {
        frame[j]=page[i];
        j=(j+1)%f;
        count++;
        for(k=0;k<f;k++)
        {
            cout<<"       "<<frame[k];
        }
    }
    cout<<endl;}
    hit=p-count;
    cout<<"hit=="<<hit<<endl;
    int hitRatio=(hit/p)*100;
cout<<"page fault is : "<<count<<endl;
cout<<hitRatio;
   return 0;
}
