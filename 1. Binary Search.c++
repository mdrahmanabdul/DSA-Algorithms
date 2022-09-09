
///////////////////////// BINARY SEARCH ALGORITH USING RECURSION /////////////////////////

/*  
Time complexities : 
 ============> Average case Time Complexities <============
 -> Accessing nth element : O(logn)
 -> Search : O(logn)
 -> Insertion : O(logn)
 -> Deletion : O(logn)
 ============> Worst case Time Complexities <============
 -> Accessing nth element : O(n)
 -> Search : O(n)
 -> Insertion : O(n)
 -> Deletion : O(n)
 =================> Space Complexity <=================
    ->O(n)
*/
#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int x){
    if(start>end){
        return -1;
    }
    int mid = (start+end)/2;
    if(arr[mid]==x){
        return 1;
    }
    else if(arr[mid]>x){
        return binarySearch(arr,start,mid-1,x);
    }
    else{
        return binarySearch(arr,mid+1,end,x);
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter no.of elements : "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter "<<n<<" elements into the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binarySearch(arr,0,n-1,2);
}
