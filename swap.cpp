#include<iostream>
using namespace std;


void printArry(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}
int main(){
    int even[10]={20,10,40,30,60,50,80,70,100,90};
    int odd[9]={1,3,5,7,9,11,13,10,90};
    
    swap(even,10);
    printArry(even,10);
     
    swap(odd,9);
    printArry(odd,9);
     return 0;
}