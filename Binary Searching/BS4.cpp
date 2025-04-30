// SORTED ROTATED ARRAY PROBLEM


#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr){

    if(arr.size() == 1){              //this is the case when the size of array become 1
        return arr[0];
    }

    int lo = 0;
    int hi = arr.size() - 1;

    if(arr[lo] < arr[hi]){          //this is the case when array is sorted but not sorted rotated
        return lo;
    }

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;

        if(arr[mid] > arr[mid + 1]){         //this is different case 
            return mid + 1;
        }

        if(arr[mid] < arr[mid - 1]){          //this is different case
            return mid;
        }

        if(arr[mid] > arr[lo]){               //this is different case
            lo =  mid + 1;
        }else{
            hi = mid - 1;
        }
    }

    return -1;
}


int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << findMin(arr) << endl;

    return 0;
}