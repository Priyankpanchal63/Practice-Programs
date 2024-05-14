#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Plaese Enetr the number:";
    cin>>n;
    int count=0;
    while (n!=0)
    {
        //checking last bit
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<n<<"of bit 1 is:"<<count;
}