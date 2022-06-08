#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
long long int a,b,c,d=0,n=100000000;
cin >> a >> b >> c;
for(long long int i=1;i<=n;i++) {
    if((((a*i)-b)==(b-c)) || ((a-(b*i))==(b*i)-c) || ((a-b)==b-(c*i))) {
d=1;
break;
}
}
if(d==1)
    cout << "YES" << endl;
else
    cout << "NO" << endl;
}

return 0;
}
