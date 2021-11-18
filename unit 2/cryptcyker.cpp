#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){
    string text[100],alpha[200];
    int ns,i,j,tags[1,2,3,4,5,6,7,8,9],tagcount=1;
    scanf("%d",&ns);
  
        for(i=0;i<=ns;i++)
        {
            getline(cin,text[i]);
        }
        for(i=0;i<=ns;i++){
            for(j=0;j<text[i].length();j++){
                alpha[tagcount-1] = text[i][j];
                if(text[i][j] == text[i][j+1]){

                }
            }
        }
        
 
    return 0;
}