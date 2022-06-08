#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
vector<int>v;
for(int i=0;i<n;i++) {
int x;cin >> x;
v.push_back(x);
}
for(int i=0;i<n;i++) {
if(v[i]==1)
o++;
if(v[i]==0)
z++;
}
z*=2;
cout << o*z << endl;

}






return 0;
}
