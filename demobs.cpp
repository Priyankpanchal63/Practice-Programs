#include<iostream>
using namespace std;
int binarySerch(int arr[],int size,int key){
     
     int start=0;
     int end=size-1;

     int mid=start + (end-start)/2;

     while (start<=end)
     {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start + (end-start)/2;
     }
     return -1;
}

int main(){
    int even[4]={10,20,30,40};
    int odd[5]={5,10,15,20,25};

    int evenIndex=binarySerch(even,4,20);
    cout<<"Index of 20 is:"<<evenIndex<<endl;

    int oddIndex=binarySerch(odd,5,25);
    cout<<"Index of 25 is:"<<oddIndex<<endl;
}