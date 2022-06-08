#include<bits/stdc++.h>
using namespace std;
int main() {
long long int t;
cin >> t;
while(t--) {
long long int a,b;
cin >> a >> b;
long long int c=b%4;
long long int d=b-c;
for(long long int i=d+1;i<=b;i++) {
if(a%2==0)
a-=i;
else
a+=i;
}
cout << a << endl;

}



return 0;
}
