#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        int f=0;
        if(n%2==1)
            cout << "YES" << endl;
        else {
            while(n>1) {
            if(n%2==1) {
                f=1;
            break;
            }
            else
                n/=2;
        }
if(f==1)
    cout << "YES" << endl;
else
    cout << "NO" << endl;
    }
    }




    return 0;
}
