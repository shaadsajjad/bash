#include<bits/stdc++.h>
using namespace std;
int main()  {
int t;
cin >> t;
while(t--) {
long long int x,y,count=0;;
cin >> x >> y;
vector<long long int>v;
for(int i=0;i<9;i++) {
    long long int a=(x*(pow(10,i)));
v.push_back(a);
}
int k=8;
while(k>=0) {
    if(y>=v[k]) {
        y-=v[k];
    count++;
    }
    else
        k--;
}
cout << count+y << endl;


}


return 0;
}
