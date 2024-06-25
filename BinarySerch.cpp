#include<iostream>
using namespace std;
int binaryserch(int arr[],int size,int key){
     
     int start=0;
     int end=size-1;

     int mid=start + (end-start)/2;
     while (start<=end)
     {
        if(arr[mid] == key){
            return mid;
        }
        //rigth part
        if(key>arr[mid]){
            start=mid+1;
        }
        //left part
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
     }
     return -1;

}
int main(){
    int even[6]={2,4,6,10,14,12};
    int odd[5]={1,5,7,4,10};

    int evenIndex=binaryserch(even,6,10);
    cout<<"Index of 10 is"<<evenIndex<<endl;

    int oddIndex=binaryserch(odd,5,10);
    cout<<"Index of 10 is"<<oddIndex<<endl;
 
    return 0;
}