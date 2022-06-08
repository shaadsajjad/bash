#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
if(n==1 || n==2 || n==4)
cout << -1 << endl;
else {
if(n%3==0)
cout << n/3 << " " << 0 << " " << 0 << endl;
else if(n%5==0)
cout << 0 << " " << n/5 << " " << 0 << endl;
else if(n%7==0)
cout << 0 << " " << 0 << " " << n/7 << endl;
else {
int a=0,b=0,c=0;
while(n!=0) {
if(n>=3){
n-=3;
a++;
}
else {
cout << -1 << endl;
break;
}
if(n%3==0) {
a+=(n/3);
break;
}
if(n%5==0) {
b+=(n/5);
break;
}
if(n%7==0) {
c+=(n/7);
break;
}
}
cout << a << " " << b << " " << c << endl;

}


}



}
return 0;
}
