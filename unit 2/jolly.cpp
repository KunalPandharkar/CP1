#include<iostream>

using namespace std;

int sequence[20];

int main()
{
    int i,length,j,value;
    bool isjolly=true;



   cout << "Enter the Length of Sequence : ";
   cin >> length;

    for(i=0;i<length;i++)
    {
        cout << "Enter the Number " << i+1 <<" : ";   
        cin>>sequence[i];
    }


     for(i=0;i<length-1;i++)
    {
  
        value=abs(sequence[i]-sequence[i+1]);

        for(j=length;j>0;j--){
           if(value<j){
              break;
           }else{
              isjolly=false;
           }
        
           
        }
    
    }
   
   if(isjolly)
   {
     cout<<"Jolly"<<endl;
   }else
   {
        cout<<"Not jolly"<<endl;
   }
  
 
}
