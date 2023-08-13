#include<stdio.h>

void main()
{
	srand(time(NULL));
	char player, computer;
	int random,i=1,P=0,C=0,attempt=0;
	printf("Choose 'r for rock | 'p' for paper | 's' for scissor \n");
	for(i=1;i<=3;i++)
	{
		attempt=0;
		label:
		printf("Enter your choice for round %d :",i);
    	scanf("%s",&player);
	    if(player=='r' ||player=='p'||player=='s')
		{
			 random=rand()%30;
             printf("The random number is %d:\n",random);
	         if(random<=10)
			{
				computer='r';
				printf("\tcomputer select 'r'\n");
			}
			else if(random<=20)
			{
				computer='p';
				printf("\tcomputer select 'p'\n");
			}
			else
			{
				computer='s';
				printf("\tcomputer select 's'\n");
			}
			printf("\tplayer selected '%c'\n",player);
			if(computer==player)
			{
				printf("round is draw....\n");
			}
			else if(computer=='r'&& player=='p')
			{
				printf("\tplayer wins this round.....\n");
				P++;
			}
			else if(computer=='p'&& player=='r')
			{
				printf("\tcomputer wins this round....\n");
				C++;
			}
			else if(computer=='p'&& player=='s')
			{
				printf("\tplayer wins this round.....\n");
				P++;
			}
			else if(computer=='s'&& player=='p')
			{
				printf("\tcomputer wins this round......\n");
				C++;
			}
			else if(computer=='r'&& player=='s')
			{
				printf("\tcomputer wins this round......\n");
				C++;
			}
			else
			{
				printf("\tplayer wins this round......\n");
				P++;
			}  
			}
			else
			{
			 	attempt++;
			 	if(attempt<3)
			 	{
			 		goto label;	
				}
				else
				{
					printf("\tplayer is disqualified\n");
					printf("\tcomputer is winner of this round....\n");
					C++;
				}
			}
			
	}
	if(P==C)
			{
				printf("\tRound is draw....");	
			}	
			else if(P>C)
			{
				printf("\t\tThe overall winner of this game is player....!!");
			}
			else
			{
				printf("\t\tThe overall winner of this game is computer....!!");
			}
	
	
	
}
