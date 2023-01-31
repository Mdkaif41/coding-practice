#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int sum=0;
    if (a>b && a>c && a>d) {
    sum = a;
    }
    else if (b>a && b>c && b>d) {
    sum= b;
    }
    else if (c>b && c>a && c>d) {
    sum= c;
    }
    else
    sum= d;
    return sum;
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
