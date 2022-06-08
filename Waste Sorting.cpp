#include<bits/stdc++.h>
using namespace std;
int main() {
long long int t;
cin >> t;
while(t--) {
long long int c1,c2,c3,count=0;
cin >> c1 >> c2 >> c3;
long long int a,b,c,a1,b1;
cin >> a >> b >> c >> a1 >> b1;
     if(c1<a || c2<b)
        cout << "NO" << endl;
        else if((c1+c2+c3)<(a+b+c+a1+b1))
            cout << "NO" << endl;
else {
        if(c1>=a) {
        count++;
        c1-=a;
if(c1>=a1) {
c1-=a1;
a1=0;
}
else
    a1-=c1;
}
 if(c2>=b) {
        count++;
        c2-=b;
if(c2>=b1) {
c2-=b1;
b1=0;
}
else
    b1-=c2;
}

if(c+a1+b1<=c3)
    count++;

    if(count==3)
        cout << "YES" << endl;
    else cout << "NO" << endl;

}
}



return 0;
}
