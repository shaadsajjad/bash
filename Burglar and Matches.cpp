#include<bits/stdc++.h>
using namespace std;
int main() {
long long int n,m;
cin >> n >> m;
vector<pair<long long int,long long int>>v;
for(int i=0;i<m;i++) {
long long int x,y;
cin >> x >> y;
v.push_back({y,x});
}
long long int sum=0;
sort(v.rbegin(),v.rend());
//for(int i=0;i<v.size();i++)
//    cout << v[i].first << " " << v[i].second << endl;

for(int i=0;i<v.size();i++) {
if(n<v[i].second) {
sum+=(n*v[i].first);
break;
}
else if(n>=v[i].second) {
sum+=(v[i].first*v[i].second);
n-=v[i].second;
}
}
cout << sum << endl;
return 0;
}
