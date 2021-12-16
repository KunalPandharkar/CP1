#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int T,r,optmi=0;
    int dist[r];
    int i;
    cin >> T;
    
    while(T--){
        cin >> r;
        optmi = 0;
        for(i=0;i<r;i++){
            cin >> dist[i];
        }
        for(i=0;i<r-1;i++){
          optmi+= abs(dist[i] - dist[i+1]);
        
        }
        
        cout << optmi << endl;
        
    }
return 0;    
}
