#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<char>v;
        int n,c=0,q=0,a=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='?')
                q++;
            else
                a++;
        }
        if(q==n)
        {
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                    cout << 'B';
                else
                    cout << 'R';
            }
            cout << endl;
        }
        else if(a==n)
            cout << s << endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]=='?')
                    c++;
                if(c==0 && ((s[i]=='R') || (s[i]=='B')))
                   v.push_back(s[i]);
                if(c>=1 && s[i]=='R')
                {
                    if(c%2==0)
                    {
                        for(int j=1; j<=c; j++)
                        {
                            if(j%2==1)
                                v.push_back('R');
                            else
                                v.push_back('B');
                        }
                    }
                    else
                    {
                        for(int j=1; j<=c; j++)
                        {
                            if(j%2!=0)
                                v.push_back('B');
                            else
                                v.push_back('R');

                        }
                    }
                    v.push_back('R');
                    c=0;
                }
                else if(c>=1 && s[i]=='B')
                {
                    if(c%2==0)
                    {
                        for(int j=1; j<=c; j++)
                        {
                            if(j%2==1)
                                v.push_back('B');
                            else
                                v.push_back('R');
                        }
                    }
                    else
                    {
                        for(int j=1; j<=c; j++)
                        {
                            if(j%2==1)
                                v.push_back('R');
                            else
                                v.push_back('B');

                        }
                    }
                    v.push_back('B');
                    c=0;
                }
            }
            if(c>0) {
                for(int k=n-c;k<n;k++) {
                    if(s[k-1]=='R') {
                        s[k]='B';
                    v.push_back('B');
                    }
                    else {
                        s[k]='R';

                        v.push_back('R');
                    }
                }
            }
            for(auto u:v)
                cout << u;
            cout << endl;
        }
    }
    return 0;
}
