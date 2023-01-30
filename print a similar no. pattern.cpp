#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i;
            sum=i+i;
        }
        cout<<endl;
    }
    cout<<"the sum of pattern :"<<sum<<endl;
    return 0;
}
