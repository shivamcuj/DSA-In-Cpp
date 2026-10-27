#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        //this loop is just to find the minimum value is the given array
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min= j;
            }
        }
        //swapping code
        int temp = arr[min];
        arr[min]= arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter Number of elements you want in a array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements you want in a array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
