#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n,a,b,c=0,d=0;
cin >> n >> a >> b;
for(int i=1;i<=n;i++) {
if(i>=a && i!=b)
c++;
if(i<=b && i!=a)
d++;
}
if((c>=(n/2)) && (d>=(n/2))) {
cout << a << " ";
for(int i=n;i>=1;i--) {
         if(i==n/2 && i!=b && i!=a)
cout << b << " " << i << " ";
else if(i==n/2)
    cout << b << " ";
else if(i==a || i==b)
continue;
else
cout << i << " ";

}
cout << endl;
}
else
    cout << -1 << endl;
}
return 0;
 }
