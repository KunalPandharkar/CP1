#include<iostream>

using namespace std;
double students[100];

int main(){

    int totalstudents,i,j;
    double avgexpense=0,totalexchange=0,temp;
  
     cout << "Enter Total Number of Students That Gone to Trip: ";
     cin >> totalstudents;

        for(i=0;i<totalstudents;i++){
            cout << "Enter Expense of Student " << i+1 <<" : ";
            cin >> students[i];
        }

        for(i=0;i<totalstudents;i++){
            avgexpense += students[i];
        }

        avgexpense = avgexpense / totalstudents;

    
    for(i=0;i<totalstudents;i++){
        if(students[i] < students[i+1]){
            temp = students[i+1];
            students[i+1] = students[i];
            students[i] = temp;
        }
        for(j=i;j>=0;j--){
            if(students[i] > students[j])
            {
                temp = students[j];
                students[j] = students[i];
                students[i] = temp;
            }
        }
    }

    for(i=0;i<totalstudents;i++){
         if(students[i] < avgexpense){

             totalexchange += avgexpense - students[i]; 
          
         }
    }

   


     
     cout <<"Total Exchange is :" << totalexchange;

    
    return 0;
}


