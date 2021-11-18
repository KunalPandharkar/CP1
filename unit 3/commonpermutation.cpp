#include<stdio.h>
#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i,j,maxlen,minlen;
    bool isfirstmin;
    string str1,str2,str3;
    getline(cin,str1);
    getline(cin,str2);

    if(str1.length() > str2.length()){
      maxlen = str1.length();
      minlen = str2.length();
      isfirstmin = false;
    }else{
        maxlen = str2.length();
        minlen = str1.length();
        isfirstmin = true;
    }
   
    for(i=0;i<maxlen;i++){
        for(j=0;j<minlen;j++){
            if(isfirstmin){
                if(str2[i] == str1[j])
                {
                  str3 += str2[i];
                }

            }else{
                if(str1[i] == str2[j])
                {
                  str3 += str1[i];
                }
                
            }
        }
    }

    reverse(str3.begin(), str3.end());
    cout << str3;
    
    return 0;
}