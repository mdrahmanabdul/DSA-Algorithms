
///////////////////////// SELECTION SORT ALGORITHM  /////////////////////////

/*  
Time complexities : 
 ============>Time Complexities <============
 Best case : O(n^2)
 Average case : O(n^2)
 Worst case : O(n^2)
 =================> Space Complexity <=================
    ->O(1) (auxiliary)
====================> More Details <====================
 Stable : Yes
 Sorting class type : Comparison
*/
#include<iostream>
using namespace std;
int selectionSort(int *arr,int n)
{
    if(n==0){
        return *arr;
    }
    int min=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    int temp=arr[0];
    arr[0]=arr[min];
    arr[min]=temp;
    return selectionSort(arr+1,n-1);
}
int main()
{
    int arr[]={21,15,10,32,200};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"After soring"<<endl;
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
