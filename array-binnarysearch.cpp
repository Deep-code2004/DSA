# include <iostream>
using namespace std;
int arr[10], n, i , x, result ;
//user define function declare here and low , high parameter we use in function
int binarysearch(int low, int high){
while(low<=high){
 int mid = (low+high)/2;
 if(arr[mid]==x){
    return mid;
 }
 else if (arr[mid]>x){
    high = mid-1;

 }
 else {
    low = mid+1;
 }
}
return -1;
}
int main(){
    
    cout<< "\nEnter size of an array: ";
    cin>>n;
    cout<<"Enter array elements in ascending order: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter a number to search in array: ";
    cin>>x;
    int result = binarysearch(0, n-1);
    if(result==-1){
        cout<<"Element not found in array";
    }
    else{
        cout<<"Element found at index: "<<result;
    }
    return 0;

}