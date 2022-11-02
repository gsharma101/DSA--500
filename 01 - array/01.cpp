#include<bits/stdc++.h>
using namespace std;
// Reverse of array
void reverse(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printVector(vector<int>arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    cout<<"Before reverse\n";
    printVector(arr);
    reverse(arr);
    cout<<"\nAfter reverse\n";
    printVector(arr);
    return 0;
}