#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >> n;
string s;
cin >> s;
long long int a=0,b=0;
for(int i=0;i<s.size();i++) {
if(s[i]=='1')
a++;
else
b++;
}
cout << (s.size()-(min(a,b)*2));


return 0;
}
