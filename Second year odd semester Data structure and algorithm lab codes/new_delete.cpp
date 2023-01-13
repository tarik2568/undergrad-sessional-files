#include<iostream>
using namespace std;
int main(){
    int *p;

    {
        //  p=new int();  //by default 0 pass hoy
        p=new int(20);  //nameless variable
       // p=new (int)(16);
       cout<<*p<<"  "<<p<<endl;
    }

    cout<<*p<<"  "<<p<<endl; // dynamic pointer's value is still alive outside the scope.It causes memory lack.that,s why we have to delete.

    delete p;
    cout<<*p<<"  "<<p<<endl;
}
