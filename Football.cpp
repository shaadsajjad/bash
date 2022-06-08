#include<bits/stdc++.h>
using namespace std;
int main() {
string s;
cin >> s;
int c=1,a=0;
for(int i=0;i<s.size();i++) {
if(c>=7) {
a=1;
break;
}
if(s[i]==s[i+1]) {
c++;
}
else
c=1;
}
if(a==1)
cout << "YES" << endl;
else
cout << "NO" << endl;

return 0;
}
