#include <iostream>
using namespace std;

/*int main(){
    int array[]= {1,2,3,4};

    cout << sizeof (array) << endl;
    cout << sizeof (array)/sizeof (array[0]) << endl;

    int array2[4];
    cout << array2[0] << endl;
    cout << array2[1] << endl;
    cout << array2[2] << endl;
    cout << array2[3] << endl;
    return 0;
}*/

// int main(){

//     int array[] = {1,2,3,4};
//     int size = sizeof(array)/sizeof(array[0]);

//     //for loop
//     /*for(int idx=0;idx<size;idx++){
//         cout << array[idx] << endl;
//     }*/

//     //for each loop
//     /*for(int ele:array){
//         cout << ele << endl;
//     }*/

//     //while loop
//     /*int index = 0;
//     while(index < size){
//         cout << array[index]<< endl;
//         index++;
//     }*/

//    char vowels[5];

// //    for(int idx=0; idx<5; idx++){
// //     cin >> vowels[idx];
// //    }

//     for(char &element:vowels){ //what is the use &
//         cin >> element;
//     }
   
//    for(int idx=0; idx<5; idx++){
//     cout << vowels[idx] << " ";
//    }

//     return 0;  
// }

/*int main(){

    int array[]={3,4,10,11};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    cout << sum << endl;

    return 0;
}*/

/*int main(){

    int array[]={3,6,10,45,23};
    int size = sizeof(array)/sizeof(array[0]);
    int max = 0;

    for(int i = 0; i < size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout << max << endl;

    return 0;
}*/

int main(){

    int array[]={3,4,18,11,7};
    int key= 11;

    int ans = -1;

    for(int i=0; i<5; i++){
        if(array[i]=key){
            ans=i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}


 