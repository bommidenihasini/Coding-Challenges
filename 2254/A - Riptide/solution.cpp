#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a>>b>>c;
        int rounds=0;
        while(true){
            vector<int> d={a,b,c};
            sort(d.begin(),d.end());
            if(d[0]==d[1]||d[1]==d[2]){
                break;
            }
   
            d[2]-=1;
            d[0]+=1;
            rounds++;
            a=d[0];
            b=d[1];
            c=d[2];
        }
        cout << rounds << endl;
    }
    return 0;
}