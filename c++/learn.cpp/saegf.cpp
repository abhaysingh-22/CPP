#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int p=0;
    inte=0,z=0;
    for(int i=0;i<n;i++){
        
        if(v[i]>0){
            p++;
            
        }
        if(v[i]==0){
            z++;
        }
        if(v[i]<0){
            
            e++;
        }
    }
    
    cout<<p/n<<endl<<e/n<<endl<<z/n<<endl;
}
