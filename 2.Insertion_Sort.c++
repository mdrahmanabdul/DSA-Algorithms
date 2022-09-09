
///////////////////////// INSERTION SORT ALGORITHM  /////////////////////////

/*  
Time complexities : 
 ============>Time Complexities <============
 Best case : O(n)
 Average case : O(n^2)
 Worst case : O(n^2)
 =================> Space Complexity <=================
    ->O(1)
====================> More Details <====================
 Stable : Yes
 Sorting class type : Comparison
*/
#include<iostream>
using namespace std;
void insertionSort(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int n=5;
    
    int arr[5]={12,5,3,7,1};
    cout<<"Before sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertionSort(arr,n);
    cout<<endl;
    cout<<"Before sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
