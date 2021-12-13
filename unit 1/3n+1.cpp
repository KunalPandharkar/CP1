#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
 long i,j,k,cyclecount=0,maxcyclecount=0,currno;
 printf("Enter Starting Number: ");
 scanf("%ld",&i);
 printf("\nEnter Ending Number: ");
 scanf("%ld",&j);

 for(k=i;k<=j;k++){

  currno=k;
  Start:
  cyclecount++;
  if(currno==1){

  if(maxcyclecount<cyclecount){
  maxcyclecount = cyclecount;
  }

  cyclecount = 0;
  continue;

  }
  else if(currno%2 != 0){
  currno =  currno*3 + 1;
  }
  else{
  currno = currno /2;
  }
  goto Start;
 }
 printf("%ld %ld %ld",i,j,maxcyclecount);
 return 0;
}
