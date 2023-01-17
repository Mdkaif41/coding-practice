#include<iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=0;
    for(int i=2;i<=n;i++){
        f=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
