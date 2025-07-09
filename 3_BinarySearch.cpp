#include <iostream>
using namespace std;
int binaryindex(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==k) return mid;
        else if (arr[mid]<k) start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main() {
	int arr[]={1,2,3,4,5,6,7,8,9};
	int index = binaryindex(arr,9,7);
	cout<<index;
}
