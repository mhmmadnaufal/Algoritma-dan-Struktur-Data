#include <iostream>
#include <unordered_set>
using namespace std;

bool cekDuplikat(int arr[]) {
    unordered_set<int> seen;
    int panjangArr = 4;
    for (int i = 0; i < panjangArr; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return true; // Duplicate found
        }
        seen.insert(arr[i]); // Insert the element into the set
    }
    return false; // No duplicate found
}

int main(void) {
    int arrA[] = {2, 1, 3, 1};
    cout << cekDuplikat(arrA) << endl; // Corrected the line
    return 0; // Added the return statement
}
