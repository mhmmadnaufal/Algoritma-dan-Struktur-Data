#include <iostream>
#include <algorithm>
using namespace std;

bool cekDuplikat(int arr[], int panjangArr) {
    sort(arr, arr + panjangArr); // Sort the array
    for (int i = 0; i < panjangArr - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return true; // Duplicate found
        }
    }
    return false; // No duplicate found
}

int main(void) {
    int arrA[] = {2, 1, 3, 1};
    int panjangArr = sizeof(arrA) / sizeof(arrA[0]); // Calculate the length of the array
    cout << cekDuplikat(arrA, panjangArr) << endl; // Corrected the line
    return 0; // Added the return statement
}
