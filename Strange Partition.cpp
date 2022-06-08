#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
long long int n,x;
cin >> n >> x;
vector<long long int>v;
long long int sum=0,add=0;
for(int i=0;i<n;i++) {
long long int x;cin >> x;
v.push_back(x);
}
for(int i=0;i<n;i++) {
sum+=v[i];
if(v[i]%x==0)
    v[i]/=x;
else
v[i]=(v[i]/x)+1;
//cout << v[i] << " ";
add+=v[i];

}
if(sum%x==0)
    cout << sum/x << " " << add << endl;
else
    cout << (sum/x)+1 << " " << add << endl;
}

return 0;
}
