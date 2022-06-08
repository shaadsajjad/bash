#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
vector<int>v,vc;
for(int i=0;i<n;i++) {
int x;
cin >> x;
v.push_back(x);

}
for(int i=0;i<n;i++) {
int x;
cin >> x;
vc.push_back(x);
}
int c=0;
sort(v.begin(),v.end());
sort(vc.begin(),vc.end());
for(int i=0;i<n;i++) {
if((v[i]==vc[i]) || (v[i]+1==vc[i]))
c++;
}
if(c==n)
cout << "YES" << endl;
else
cout << "NO" << endl;
}


return 0;
}
