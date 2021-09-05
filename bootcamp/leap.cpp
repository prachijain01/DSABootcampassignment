//Program to check whether the year is leap year or not

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year to be checked"<<endl;
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0){
            if(year%400==0)
                cout<<"leap year";
            else
                cout<<"non-leap year";
        }    
        else
            cout<<"leap year";
        }                
    else
        cout<<"non-leap year";
   
    return 0;    
}