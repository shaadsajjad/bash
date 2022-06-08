#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
long long int c=0,sum=0;
vector<long long int>v;
for(int i=0;i<n;i++) {
int x;cin >> x;
v.push_back(x);
}
for(int i=0;i<n;i++) {
if(v[i]%16==0) {
c+=4;
v[i]/=16;
}
else if(v[i]%8==0) {
c+=3;
v[i]/=8;
}
else if(v[i]%4==0) {
c+=2;
v[i]/=4;
}
else if(v[i]%2==0) {
c+=1;
v[i]/=2;
}
}
sort(v.rbegin(),v.rend());
for(int i=0;i<c;i++) {
v[0]=v[0]*2;
}
for(int i=0;i<v.size();i++) {
//cout << v[i] << " ";
sum+=v[i];
}
cout << sum << endl;
}


return 0;
}
