#include<bits/stdc++.h>
using namespace std;
int main() {
long long int t;
cin >> t;
while(t--) {
long long int n;
cin >> n;
vector<long long int>v;
for(long long int i=0;i<n;i++) {
long long int x;
cin >> x;
v.push_back(x);
}
long long int c=0;
for(long long int i=0;i<n-1;i++) {
if(v[i]==v[i+1])
c++;

}
if(c==n-1)
cout << -1 << endl;
else {
long long int max=0,u=0;
for(long long int i=0;i<n;i++) {
if(v[i]>=max) {
max=v[i];
}
}
for(long long int i=0;i<n;i++) {
if(v[i]==max && i==0) {
    if(v[i]>v[i+1]) {
u=i+1;
break;
}
}
else if(v[i]==max && i==n-1) {
        if(v[i-1]<v[i]) {
u=i+1;
break;
        }
}
else if(i!=0 || i!=n-1){
        if(v[i]==max) {
        if(v[i+1]<v[i] || v[i-1]<v[i]) {
            u=i+1;
            break;
        }

}
}
}
cout << u << endl;
}
}


return 0;
}
