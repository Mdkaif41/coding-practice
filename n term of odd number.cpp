#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        
        cout << 2 * i - 1 << " ";
        sum =sum+2 * i - 1;
        }
    cout<<"sum of all odd no is :"<<sum<<endl;
  return 0;
}
