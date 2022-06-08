#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,c=0;
        cin >> n;
        vector<long long int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sz=unique(v.begin(),v.end())-v.begin();
        while(sz>1)
        {
            sz/=2;
            c++;
        }
        cout << c << endl;
    }



    return 0;
}
