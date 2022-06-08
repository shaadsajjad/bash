#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
vector<int>v;
int a[1000]={};
for(int i=0;i<n;i++) {
int x;
cin >> x;
v.push_back(x);
}
for(int i=0;i<v.size();i++) {
a[v[i]]++;
}
if(a[1]%2==0 && a[2]%2==0)
cout << "Yes" << endl;
else if(a[1]%2==0 && a[2]%2!=0 && a[1]>0)
cout << "Yes" << endl;
else
cout << "NO" << endl;
}



return 0;
}
