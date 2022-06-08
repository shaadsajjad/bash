#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,t;
        cin >> s;
        int a=0,b=0,c=0,d=0,f=0,e=0;
        for(int i=0; i<s.size(); i++)
        {
            if(a<0)
                a=-1000;
            if(b<0)
                b=-1000;
            if(c<0)
                c=-1000;
            if(d<0)
                d=-1000;
            if(e<0)
                e=-1000;
            if(f<0)
                f=-1000;
            if(s[i]=='A' || s[i]=='B')
                a++;
            else
                a--;
            if(s[i]=='A' || s[i]=='C')
                b++;
            else
                b--;
            if(s[i]=='B' || s[i]=='C')
                c++;
            else
                c--;
            if(s[i]=='A' || s[i]=='B')
                d--;
            else
                d++;
            if(s[i]=='A' || s[i]=='C')
                e--;
            else
                e++;
            if(s[i]=='B' || s[i]=='C')
                f--;
            else
                f++;
        }
        if(c==0 || a==0 || b==0 || d==0 || e==0 || f==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;



    }




    return 0;
}
