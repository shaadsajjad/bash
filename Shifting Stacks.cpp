#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
long long int n,p=0,f=0,c=0;
cin >> n;
vector<long long int>v;
for(long long int i=0;i<n;i++) {
long long int x;cin >> x;
v.push_back(x);
}
for(long long int i=0;i<n;i++) {
if(v[i]<p && c+v[i]<p) {
f=1;
break;
}
else if(v[i]>=p) {
c+=v[i]-p;
v[i]=p;
p++;
}
else if(v[i]<p && c+v[i]>=p) {
c-=(abs(v[i]-p));
v[i]=p;
p++;
}
}
if(f==1)
cout << "NO" << endl;
else
cout << "YES" << endl;
}



return 0;
}
