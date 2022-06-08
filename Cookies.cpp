#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
vector<int>v;
for(int i=0;i<n;i++) {
int x;cin >> x;
v.push_back(x);
}
int e=0,o=0;
for(int i=0;i<n;i++) {
if(v[i]%2==0)
e++;
else
o++;
}
if(o%2==0)
cout << e << endl;
else {
        if(o>=3)
cout << o << endl;
else
    cout << 1 << endl;
}
return 0;
}
