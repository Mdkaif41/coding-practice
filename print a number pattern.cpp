#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
            sum=i+i;
        }
        cout<<endl;
    }
    cout<<"sum of all the numbers :"<<sum<<endl;
    return 0;
}
