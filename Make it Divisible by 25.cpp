#include<bits/stdc++.h>
using namespace std;
int main() {
long long int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c;
        int cn1 = 0, cn2 = 0, f = 0, cn3 = 0, cn4 = 0, i;
        for (i=s.size()-1; i >= 0; i--){
         if (s[i] == '5'){
         c = s[i];
          for (int j = i - 1; j >= 0; j--){
             if (c=='5'){
             if (s[j]=='7'||s[j]=='2'){
                 f = 1;
                 break;
             }
        }
    }
            if (f)break;
    }
            cn1++;
        }
        i--;
        for (; i >= 0; i--){
            if (c == '5' && (s[i] == '7' || s[i] == '2'))
                break;
            cn1++;
        }
        f = 0;
        i = s.length() - 1;
        for (; i >= 0; i--){
        if (s[i] == '0'){
              c = s[i];
          for (int j = i - 1; j >= 0; j--){
              if (c == '0'){
                  if (s[j] == '0' || s[j] == '5'){
                     f = 1;
                     break;
                }
            }
         }
         if (f)break;
        }
         cn2++;
        }
        i--;
        for (; i >= 0; i--){
            if (c == '0' && (s[i] == '0' || s[i] == '5'))
                break;
            cn2++;
        }
        cout << min(cn1, cn2) << endl;
    }
}
