#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     vector<int> v;

//     cout << "Size: "<<v.size()<<endl;
//     cout << "Capacity: "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout << "Size: "<<v.size()<<endl;
//     cout << "Capacity: "<<v.capacity()<<endl;

//     v.push_back(2);
//     cout << "Size: "<<v.size()<<endl;
//     cout << "Capacity: "<<v.capacity()<<endl;

//     v.push_back(3); 
//     cout << "Size: "<<v.size()<<endl;
//     cout << "Capacity: "<<v.capacity()<<endl;
 
//     v.resize(5);
//     cout << "Size: "<<v.size()<<endl;
//     cout << "Capacity: "<<v.capacity()<<endl;

//     v.resize(10);
//     cout << "Size: "<<v.size()<<endl;
//     cout << "Capacity: "<<v.capacity()<<endl;

//     v.pop_back();
//     v.pop_back();
//     cout << "Size: "<<v.size()<<endl;
//     cout << "Capacity: "<<v.capacity()<<endl;

//     return 0;
// }



// int main(){
//     vector<int> v;

//     //for loop
//     for(int i=0;i<5;i++){
//         int element;
//         cin>>element;
//         v.push_back(element);
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;


//     v.insert(v.begin()+2,6);

//     //for each loop
//     for(int ele:v){
//         cout << ele << " ";
//     }
//     cout<<endl;

//     v.erase(v.end()-2);
//     //while loop
//     int idx = 0;
//     while(idx<v.size()){
//         cout << v[idx++] << " ";
//     }


//     return 0;
// }

/*int main(){

    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin >> v[i];
    }
    cout <<"Enter x:";
    int x;
    cin >> x;
    int occurence =-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence = i;
        }
    }
    cout << occurence << endl;


    return 0;
}*/

/*int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"enter x: ";
    int x;
    cin>>x;

    int occurence=0;

    for(int ele:v){
        if(ele==x){
            occurence++;
        }
    }
    cout<<occurence<<endl;

    return 0;
}*/

/*int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"enter x: ";
    int x;
    cin>>x;

    int count =0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;  
        }
    }

    cout<<count<<endl;
}*/ 



// by apna college

// STL(Std template lib)

// int main(){
//     vector<int> vec = {1,2,3,4};
//     cout << vec[0] << endl;
//     return 0;
// }




// int main(){
//     vector<int> vec (3,0);
//     cout << vec[0] << endl;
//     cout << vec[1] << endl;
//     cout << vec[2] << endl;
//     return 0;
// }




// int main(){
//     vector<char> vec = {'a','b','c'};

//     cout << "size = " << vec.size() << endl;
//     for(char i : vec){
//         cout << i << endl;
//     }
//     return 0;
// }





// int main(){
//     vector<int> vec;
    
//     cout << "size = " << vec.size() << endl;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     vec.push_back(55);
//     cout << "after push back size = " << vec.size() << endl;

//     vec.pop_back();  //55 removed

//     cout << vec.front() << endl;   //print the first value
//     cout << vec.back() << endl;    //print the last value 
//     cout << vec.at(1) << endl;     //print the particular value at that index
//     return 0;
// }





// int main(){
//     vector<int> vec;
    
//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);

//     cout << vec.size() << endl;
//     cout << vec.capacity() << endl;  //it becomes double when we push back any int char etc
//     return 0;
// }




