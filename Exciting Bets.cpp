#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
long long int a,b,c,d;
cin >> a >> b;
if(a==b)
cout << 0 << " " << 0 << endl;
else {
c=abs(a-b);
d=a%c;
if(d==0)
cout << c << " " << d << endl;
else
    cout << c << " " << c-d << endl;
}

}


return 0;
}
