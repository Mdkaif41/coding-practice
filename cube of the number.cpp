#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int cube =0;
        for(int i=1;i<=n;i++){
            cube=i*i*i;
            cout<<"number is :" <<i<<" and the cube of" <<i<< "is :"<<cube<<endl;
        }
        return 0;
    }
