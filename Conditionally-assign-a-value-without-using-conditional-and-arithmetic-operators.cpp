#include<iostream>
using namespace std;
int assign_value(int a,int b,int x)
{
    int arr[2];
    arr[0]=a;
    arr[1]=b;
    int y=arr[x];
    return y;
}

int main(){
    int a=5;
    int b=10;
    int x=1;
    cout<<"the value of y is "<<assign_value(a,b,x)<<endl;
    return 0;
}
