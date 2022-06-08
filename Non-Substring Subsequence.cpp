#include<bits/Stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
int n,q;
cin >> n >> q;
string s;
cin >> s;
while(q--) {
int a,b,count=0;;
cin >> a >> b;
if(a>1) {
for(int i=0;i<a-1;i++) {
if(s[i]==s[a-1])
count++;
}
}
if(b<n) {
for(int i=b;i<n;i++) {
if(s[i]==s[b-1])
count++;
}
}
if(count>=1)
cout << "YES" << endl;
else
cout << "NO" << endl;
}


    }
return 0;
}
