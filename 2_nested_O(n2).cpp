#include <iostream>
using namespace std;

void printPairs(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<arr[i] <<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3};
    printPairs(arr,3);
    return 0;
}
// here we use nested loops so its time complexity is O(n^2)
