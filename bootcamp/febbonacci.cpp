//Program to print febbonicci series

#include<iostream>
using namespace std;

int main()
{
    int n, n1=0, n2=1, nxt=0;
    cout<<"enter number of terms:"<<endl;
    cin>>n;

    for(int i=1; i <=n; i++){
        if(i==1){
            cout<<n1<<",";
            continue;
        }
        if(i==2){
            cout<<n2<<",";
            continue;
        }
        nxt=n1+n2;
        n1=n2;
        n2=nxt;
        cout<<nxt<<",";
    }
    return 0;
}

