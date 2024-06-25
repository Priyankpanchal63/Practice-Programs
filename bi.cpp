#include<iostream>
using namespace std;
int binarySerch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(start>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
     return -1;
}
int main(){
     int even[6]={1,2,3,4,5,6};
     int odd[5]={23,45,67,23,45};

     int evenIndex=binarySerch(even,8,3);
     cout<<"Index of 6 is:"<<evenIndex<<endl;

     int oddIndex=binarySerch(odd,7,45);
     cout<<"Index of 45 is:"<<oddIndex<<endl;
     
     return 0;

}