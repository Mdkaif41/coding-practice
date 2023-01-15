#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int tsum;
    for(int i=1;i<=n;i++){
        tsum=0;
        for(int j=1;j<=i;j++){
            sum=sum+j;
            tsum =sum+j;
            cout<<j;
            if(j<i){
                cout<<"+";
            }
        }
        cout<<"="<<tsum<<endl;
    }
    cout<<"sum of all series :"<<sum<<endl;
    return 0;
}
