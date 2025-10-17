#include <iostream>
using namespace std;
int main(){
    int arr[6], n , x, i;
    cout << "\n Enter size of an array: ";
    cin>>n;
    for( i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    cout<<"\n Enter element to insert at the end :";
    cin>>x;
    arr[i] = x;
    n++;

    for ( i = 0; i<n; i++){
        cout << arr[i] << endl;
    }
}