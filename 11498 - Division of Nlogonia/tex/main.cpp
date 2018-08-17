#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int q;
    while(cin>>q) {
        if(q == 0) {
            return 0;
        }
        int n,m;
        cin>>n>>m;
    
    
        for (int i = 0; i<q; i++) {
            int x,y;
            cin>>x>>y;
            if(x == n || y == m) {
                cout<<"divisa"<<endl;
            } else if(x > n && y > m) {
                cout<<"NE"<<endl;
            } else if(x > n && y<m) {
                cout<<"SE"<<endl;
            } else if(x<n && y<m) {
                cout<<"SO"<<endl;
            }else {
                cout<<"NO"<<endl;
            }
        }
        
        
        
    }
    return 0;
}
