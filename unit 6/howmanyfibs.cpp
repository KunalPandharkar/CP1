#include<iostream>

using namespace std;

int main ()
{
    long long int  t1 = 0, t2 = 1, nextTerm = 0 ,count=0,a,b;

   while(1){
    cin >> a >> b;
    t1 = 0;t2=1;nextTerm=0;count=0;

    if(!(a || b)){break;}
 
    for (;;) {
    
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        if(nextTerm >= a){count++;}
        if(nextTerm >= b){break;}
         
       
    }

     cout << count - 1 << endl;
 }

    return 0;
}



