# include <iostream>
using namespace std;
int main(){
    int arr[6], n, x;
    cout<<"\n Enter Size of an array";
    cin>>n;
    cout << "Enter Array Elements";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    cout<<"Enter the elemnet at the begnning";
    cin>>x;
    for(int i=n; i>0; i--){
        arr[i]=arr[i-1];
    }

    arr[0]= x;
    n++;

    cout<<" Array elements are : ";
    for (int i=0; i<n; i++){
      cout<< arr[i]<<endl;
    }
    return 0;
}