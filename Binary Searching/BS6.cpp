#include<bits/stdc++.h>
using namespace std;

int peakMountain(vector<int> &arr) {
    int n = arr.size();
    int low = 0, high = n - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low; 
}

int main(){
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};
    int peakIndex = peakMountain(arr);
    
    if (peakIndex != -1) {
        cout << "Peak element is at index: " << peakIndex << endl;
        cout << "Peak element is: " << arr[peakIndex] << endl;
    } else {
        cout << "No peak element found." << endl;
    }
    
    return 0;
}