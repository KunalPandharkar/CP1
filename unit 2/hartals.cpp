
#include<stdio.h>

int main() {
    int tc, nd, tp;
    int h[100];
    scanf("%d", &tc);
    while(tc--) {
        scanf("%d", &nd);
        scanf("%d", &tp);
        for(int i = 0; i < tp; i++) {
            scanf("%d", &h[i]);
        }
 
        int day = 0;
        int hartals = 0;
        while(day < nd) {
            int mod = (day + 1) % 7;
            if(mod != 0 && mod != 6) {
                bool hartal = false;
                for(int i = 0; i < tp; i++) {
                    if((day + 1) % h[i] == 0) {
                        hartal = true;
                    }
                }
                if(hartal) hartals++;
            }
 
            day++;
        }
 
        printf("%d\n", hartals);
    }
}