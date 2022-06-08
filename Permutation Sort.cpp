#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
vector<int>v,vc,a;
for(int i=0;i<n;i++) {
int x;cin >> x;
v.push_back(x);
}
vc=v;
a=v;
int c=0;
sort(vc.begin(),vc.end());
sort(a.rbegin(),a.rend());
for(int i=0;i<n;i++) {
if(vc[i]==v[i])
c++;
}
if(c==n)
cout << 0 << endl;
else if(vc[0]==v[0] || vc[n-1]==v[n-1])
cout << 1 << endl;
else if(a[0]==v[0] && a[n-1]==v[n-1])
    cout << 3 << endl;
else
cout << 2 << endl;
}





return 0;




}
