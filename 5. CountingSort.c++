///////////////////////// COUNTING SORT ALGORITHM  /////////////////////////

/*  
Time complexities : 
 ============>Time Complexities <============
 Best case : O(n+k)
 Average case : O(n+k)
 Worst case : O(n+k)
 =================> Space Complexity <=================
    ->O(k)
====================> More Details <====================
 Stable : Yes
 Sorting class type : Linear
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void countingSort(int *a,int n,int k,int b[]){
int count[k];
memset(count,0,sizeof(count));

for(int j=0;j<n;j++){
    count[a[j]]=count[a[j]]+1;
}

for(int i=1;i<k;i++){
    count[i]=count[i]+count[i-1];
}

for(int j=n-1;j>=0;j--){
    b[count[a[j]]]=a[j];
    count[a[j]]=count[a[j]]-1;
}
}
int main()
{
    int arr[]={2,1,3,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k;
    cout<<"Enter the range : "<<endl;
    cin>>k;
    int b[n];
    memset(b,0,sizeof(b));
    countingSort(arr,n,k,b);
    cout<<"After sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
