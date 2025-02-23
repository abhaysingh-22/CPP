#include<bits/stdc++.h>
using namespace std;


//*************************   This is the way using BIT Manipulation   *************************//
/*int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = 0;
    int subsets = pow(2,n);

    for(int i=0;i<subsets;i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                sum += arr[j];
            }
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}*/





//*************************   This is the way using Recursion   *************************//

void f(int arr[],int n,int sum,int i, vector<int> &result){

    if(i==n){
        result.push_back(sum);
        return;
    }

    f(arr,n,sum+arr[i],i+1,result);
    f(arr,n,sum,i+1,result);

}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> result;

    f(arr,n,0,0,result);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}


// Time Complexity: O(2^n)
// Space Complexity: O(2^n)


//bhai dono mai se koi bhi smajh nhi aaya !