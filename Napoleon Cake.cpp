#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
long long  n;
cin >> n;
vector<long long int>v;
for(int i=0;i<n;i++) {
long long int x;
cin >> x;
v.push_back(x);
}
long long int c=0;
for(int i=n-1;i>=0;i--) {
if(v[i]>0 && c<v[i]) {
c=(v[i]-1);
v[i]=1;
}
else if(c>0) {
v[i]=1;
c-=1;
}
}
for(auto u:v)
cout << u << " ";
cout << endl;

}



return 0;
}



