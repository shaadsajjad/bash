#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n,a=9;
vector<int>v;
cin >> n;
if(n<=9)
cout << n << endl;
else {
while(a!=0) {
if(n>=a) {
n-=a;
v.push_back(a);
}
a--;

}
if(n>0)
cout << -1 << endl;
else {
for(int i=v.size()-1;i>=0;i--)
cout << v[i];
cout << endl;
}
}



}


return 0;
}
