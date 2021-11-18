#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
    char keys[] = {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M',','};
    int i,j;
    string str1,str2;
    getline(cin,str1);
    for(i=0;i<str1.length();i++){
      for(j=0;j<=26;j++){
        
          if(str1[i] == keys[j]){
              str1[i] = keys[j-1];
              continue;
          }
      }
    }
    cout << str1;
    return 0;
}