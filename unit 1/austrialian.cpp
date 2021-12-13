#include<stdio.h>
#include<stdlib.h>

int main(){

	bool firstpolitician=true;
	int totalcase,TotalPoliticians;

	scanf("%d",&totalcase);


	for(TotalPoliticians=1; TotalPoliticians<=totalcase; TotalPoliticians++){

		char winner[30][31];
		bool failed[30];
		int currentposition[100][100];
		int votes[30];
		int totalvotings;

		scanf("%d",&totalvotings);

		(void) getchar();

		for(int i=0;i<totalvotings;i++)
		{
			gets(winner[i]);
		}
			
		
		int politician=0;
		char tmp[1000];
		while( gets(tmp) ){
			if( tmp[0]=='\0' )
				break;
			int count=0,k=0;
			for(int i=0;tmp[i]!='\0';i++)
				if( tmp[i]==' ' )
					currentposition[politician][k++]=count-1,count=0;
				else
					count=count*10+tmp[i]-'0';
			currentposition[politician++][k++]=count-1;
		}
		for(int i=0;i<totalvotings;i++){
			failed[i]=false;
		}
			

		if( !firstpolitician ){
			putchar('\n');
		}
			
		firstpolitician=false;

		int exist=totalvotings;
		
		while( true ){
			int min=2e9;
			bool found=false;

			for(int i=0;i<totalvotings;i++)
				votes[i]=0;
			for(int i=0;i<politician;i++){
				for(int j=0;j<totalvotings;j++)
					if( !failed[currentposition[i][j]] ){
						votes[currentposition[i][j]]++;
						break;
					}
			}
			for(int i=0;i<totalvotings;i++){
				if( votes[i]>politician/2.0 ){ 
					printf("%s\n",winner[i]);
					found=true;
				}
				if( !failed[i]&&min>votes[i] )
					min=votes[i];
			}
			if( found )
			{
				break;
			}
				

			for(int i=0;i<totalvotings;i++){
					if( votes[i]==min ) 
					failed[i]=true,exist--;
			}
				
			if( exist<=0 ){ 
				for(int i=0;i<totalvotings;i++)
				{
						if( votes[i]==min ){
							printf("%s\n",winner[i]);
						}
						
				}
				
				break;
			}
		}
		
	}
	return 0;
}