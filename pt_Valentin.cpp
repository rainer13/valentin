#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> v;
    for(int i=0;i<n;++i){
        int l;
        cin>>l;
        vector<int> v1(l);
        for(int j=0;j<l;++j)
            cin>>v1[j];
        v.push_back(v1);
    }
    for(int i=1;i<=q;++i){
        int x,y;
        cin>>x>>y;
        cout<<v[x][y]<<"\n";
    }
    return 0;
}
