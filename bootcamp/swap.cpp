//Program to swap two numbers

#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    cout<<"values of a & b before swapping \n a="<<a<<"\n b="<<b<<endl;
    swap(a,b);
   cout<<"values of a & b after swapping \n a="<<a<<"\n b="<<b<<endl;
    return 0;
}
void swap(int a, int b)
{
     int temp=a;     
        a=b;
        b=temp;
}