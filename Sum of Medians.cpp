#include<bits/stdc++.h>
using namespace std;
int main() {
long long int t;
cin >> t;
while(t--) {
long long int a,n,k,sum=0,b;
cin >> n >> k;
vector<long long int>v;
a=n*k;
    b=n/2;
long long int d=b;
for(long long int i=0;i<a;i++) {
long long int x;
cin >> x;
v.push_back(x);
}
//cout << b << endl;
long long int p=1;
for(long long int i=a-1;i>=0;i--) {
        if(k==0)
        break;
    if(b==0) {
        sum+=v[i];
k--;
b=d;
    }
else
    b--;

}
cout << sum << endl;
}








return 0;
}
