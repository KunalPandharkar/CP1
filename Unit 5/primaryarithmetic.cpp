#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
    int no1,no2,i,j,arr1[100],arr2[100],carry=0;
    scanf("%d",&no1);
     scanf("%d",&no2);
    i = 0;

    while(no1 > 0){
      arr1[i] = no1 % 10;
      i++;
      no1 = no1 / 10;
    }

    i = 0;

    while(no2 > 0){
      arr2[i] = no2 % 10;
      i++;
      no2 = no2 / 10;
    }

    for(j=0;j<i;j++){
        if(arr1[j] + arr2[j] >= 10){
            carry++;
        }
    }


    if(!carry){
        cout << "No Carry Operations"; 
    }else{
        cout << carry << " Carry Operations";
    }

    return 0;
}