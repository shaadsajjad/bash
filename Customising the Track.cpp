#include<bits/stdc++.h>
using namespace std;
int main() {
long long int t;
cin >> t;
while(t--) {
long long int n;
cin >> n;
long long int sum=0;
for(int i=0;i<n;i++) {
long long int x;cin >> x;
sum+=x;
}
long long int a,b;
if(sum%n==0)
cout << 0 << endl;
else {
a=sum%n;
b=n-a;
long long int c=a*b;
cout << c << endl;

}

}


return 0;
}
