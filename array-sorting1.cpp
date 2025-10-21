# include <iostream>
using namespace std;
int main(){
    int array [10], size, temp;
    cout<< "\n Enter size of an array: ";
    cin>>size;

    cout<<"Enter array Elements: ";
    for(int i=0; i<size; i++){
        cout<<array[i];
    
    }
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]>array[j]){
                temp= array[i],
                array[i]=array[j],
                array[j]=temp;
            }
        }
    }
    cout<<"Array are sorted Now!";
    for(int i=0; i<size ; i++){
        cout<<array[i]<<endl;
    }

}