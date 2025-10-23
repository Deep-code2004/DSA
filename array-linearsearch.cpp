#include<iostream>
using namespace std;
int main(){
    int arr[10], n, i, x ;
    cout<<"\nEnter Size Of an array: ";
    cin>>n;
    cout<<"\nEnter Element of an Array: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Which Element You have To Search";
    cin>>x;
    for (i=0; i<n; i++){
        if(arr[i]==x){
            cout << arr[i] << "Element search in position "<< i+1 <<"and index no "<< i;
            break;
        }
    }
    if(i==n){
        cout<< "Element Not Found in array. ";
    }
    return 0;
}