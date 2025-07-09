#include <iostream>
using namespace std;
#include <vector>

//Binary Search

int binarysearch(int arr[],int n,int k){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]<k) start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50};
    int index=binarysearch(arr,5,30);
    cout<<"Element found at index   "<<index<<endl;
    return 0;
}




// Space Complexity:

// void printSum(int arr[],int n){
//     int sum=0;//constant space
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
        
//     }
//     cout <<"Sum "<<sum<<endl;
// }
// int main(){
//     int arr[]={2,4,6,8};
//     printSum(arr,4);
//     return 0;
// }




// vector<int> doubleArray(int arr[],int n){
//     vector<int> result(n);
//     for(int i=0;i<n;i++){
//         result[i]=2*arr[i];
        
//     }
//     return result; 
// }
// int main(){
//     int arr[]={1,2,3,4};
//     vector<int> a=doubleArray(arr,4);
//     for(int x:a)cout<<x <<" ";
//     return 0;
// }
