#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
long long int n,a=0;
cin >> n;
if(n==1)
    cout << 9 << endl;
else if(n==2)
    cout << 98 << endl;
else {
        cout << 989;
for(int i=4;i<=n;i++) {
if(a>9)
a=0;
cout << a;
a++;
}
cout << endl;
}


}



return 0;
}
