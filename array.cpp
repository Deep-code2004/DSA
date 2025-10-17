// ...existing code...
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // METHOD 1: fixed-size array with explicit size
    // size is 6, valid indices: 0..5
    int marks1[6] = {1, 2, 3, 4, 5, 57};

    // METHOD 2: array with size deduced from initializer
    // compiler sets size to 6 automatically
    int marks2[] = {1, 2, 3, 4, 5, 57};

    // METHOD 3: runtime-sized array — use std::vector in standard C++
    // VLAs (int a[n]) are not standard; prefer vector for dynamic size
    int n;
    cout << "Enter size of an array: ";
    if (!(cin >> n) || n <= 0) return 0; // basic input check
    vector<int> a(n);
    cout << "Enter values of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // METHOD 4: assign values to an existing array by index
    // make sure array has enough size to avoid out-of-bounds access
    int marks3[7] = {}; // initialize all elements to 0; indices 0..6
    marks3[0] = 1;
    marks3[1] = 2;
    marks3[2] = 3;
    marks3[3] = 0;  // explicitly show the previously skipped index
    marks3[4] = 4;
    marks3[5] = 5;
    marks3[6] = 57;

    return 0;
}
// ...existing code...