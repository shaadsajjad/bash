#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
string s,a="";
cin >> s;
a+=s[0];
if(n%2==0) {
for(int i=1;i<n;i++) {
    if(i%2==1)
        a+=s[i];
    else
        a.insert(a.begin(),s[i]);
}
}
else {
for(int i=1;i<n;i++) {
    if(i%2==0)
        a+=s[i];
    else
        a.insert(a.begin(),s[i]);
}
}
cout << a << endl;
return 0;
}
