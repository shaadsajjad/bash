#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
long long int n;
cin >> n;                   8 3 6 11 5 2 1 7 10 4
if(n<=6)                    1 2 3 4 5 6 7 8 10 11
                            5 4 3 2 1 0 1 2 4  5
    cout << 15 << endl;
else if(n%2==1) {
    n+=1;
cout << ((n*5)/2) << endl;
}
else
    cout << ((n*5)/2) << endl;
}









return 0;
}
