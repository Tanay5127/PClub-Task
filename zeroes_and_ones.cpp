#include <iostream>
#include <vector>
using namespace std;

int minimumSwaps(vector<int>& arr) {
    int n = arr.size();
    int countZeros = 0, countOnes = 0;
    int swapCount = 0;

    // Count the number of zeros and ones in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            countZeros++;
        else
            countOnes++;
    }

    // If the absolute difference between zero count and one count is greater than 1, it is not possible to make the array beautiful
    if (abs(countZeros - countOnes) > 1)
        return -1;

    // If the count of zeros is greater, make zeros come first
    if (countZeros > countOnes) {
        for (int i = 0; i < n; i += 2) {
            if (arr[i] != 0)
                swapCount++;
        }
    }
    // If the count of ones is greater, make ones come first
    else if (countOnes > countZeros) {
        for (int i = 0; i < n; i += 2) {
            if (arr[i] != 1)
                swapCount++;
        }
    }
    // If the count of zeros and ones is equal, find the minimum swap count by considering both possibilities
    else {
        int swapCountZeros = 0, swapCountOnes = 0;
        for (int i = 0; i < n; i += 2) {
            if (arr[i] != 0)
                swapCountZeros++;
        }
        for (int i = 0; i < n; i += 2) {
            if (arr[i] != 1)
                swapCountOnes++;
        }
        swapCount = min(swapCountZeros, swapCountOnes);
    }

    return swapCount;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minSwaps = minimumSwaps(arr);
    cout<< minSwaps << endl;

    return 0;
}
