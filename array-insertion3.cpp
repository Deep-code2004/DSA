#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n, pos, x, i;
    cout << "\n Enter size of an array:";
    cin >> n;
    arr.resize(n);
    cout << "Enter array Elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n Enter the Specific Position to Insert Element : ";
    cin >> pos;
    cout << "\n Enter Element to insert At Given Position: ";
    cin >> x;
    arr.insert(arr.begin() + pos - 1, x);
    for (i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}
