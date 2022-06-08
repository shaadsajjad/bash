#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
vector<long long int>v;
long long int o=0,z=0;
for(int i=0;i<n;i++) {
long long int x;cin >> x;
v.push_back(x);
}
for(int i=0;i<n;i++) {
if(v[i]==1)
o++;
if(v[i]==0)
z++;
}
z=pow(2,z);
cout << o*z << endl;

}






return 0;
}
