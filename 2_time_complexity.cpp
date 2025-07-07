#include <iostream>
using namespace std;
void printAll(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] ={1,2,3,4,5};
    printAll(arr,4);
    return 0;
}
// here we don't know the no. of commands so here the complexity is O(n)
