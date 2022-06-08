#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
vector<int>v,vc;
int sum=0,a=0,b=0,z=0;
for(int i=0;i<n;i++) {
int x;
cin >> x;
sum+=x;
if(x>0)
v.push_back(x);
if(x<0)
vc.push_back(x);
if(x==0)
    z++;
}
if(sum==0)
        cout << "NO" << endl;
else {
        cout << "YES" << endl;
for(int i=0;i<v.size();i++)
a+=v[i];
for(int i=0;i<vc.size();i++)
b+=abs(vc[i]);
//cout << a << " " << b << endl;
if(a>b) {
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
for(int i=0;i<vc.size();i++)
        cout << vc[i] << " ";
        for(int i=0;i<z;i++)
            cout << 0 << " ";

}
if(b>a) {
    for(int i=0;i<vc.size();i++)
        cout << vc[i] << " ";
for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
        for(int i=0;i<z;i++)
            cout << 0 << " ";

}

cout << endl;
}
}


return 0;
}
