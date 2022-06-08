#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--){
long long int a=0,b=0,n;
cin >> n;
a=n/2020;
b=n%2020;
if(b<=a)
cout << "YES" << endl;
else
cout << "NO" << endl;
}






return 0;
}
