#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int dealer();
int main()
{
	srand(time(0));
	int dealer_c1, dealer_c2, dealer_c3, player_c1, player_c2, player_c3;
	char escolha[10];
	dealer_c1=dealer();
	dealer_c2=dealer();
	if(dealer_c1+dealer_c2==21)
		printf("Blackjack da casa! Cartas: %d %d", dealer_c1, dealer_c2);
	else if(dealer_c1+dealer_c2>21)
		printf("Voce ganhou, cartas da casa: %d %d", dealer_c1, dealer_c2);
	else
	{
		printf("Cartas da casa: %d %d\n", dealer_c1, dealer_c2);
		player_c1=dealer();
		player_c2=dealer();
		if(player_c1+player_c2==21)
			printf("Blackjack! Suas cartas: %d %d\n", player_c1, player_c2);
		else if(player_c1+player_c2>21)
			printf("Voce perdeu! Suas cartas: %d %d\n", player_c1, player_c2);
		else if(player_c1+player_c2>dealer_c1+dealer_c2)
		{
			printf("Voce ganhou! Suas cartas: %d %d\n", player_c1, player_c2);
		}
		else
		{
			printf("Suas cartas: %d %d\nMais uma carta?\n", player_c1, player_c2);
			fflush(stdin);
			gets(escolha);
			if(strncmp(escolha,"hit",3)==0)
			{
				player_c3=dealer();
				if(player_c1+player_c2+player_c3==21)
					printf("Blackjack! Suas cartas: %d %d %d\n", player_c1, player_c2, player_c3);
				else if(player_c1+player_c2+player_c3>21||player_c1+player_c2+player_c3<dealer_c1+dealer_c2)
					printf("Voce perdeu! Suas cartas: %d %d %d\n", player_c1, player_c2, player_c3);
				else if(player_c1+player_c2+player_c3>dealer_c1+dealer_c2)
					printf("Voce ganhou! Suas cartas: %d %d %d\n", player_c1, player_c2, player_c3);	
				else if(player_c1+player_c2+player_c3==dealer_c1+dealer_c2)
					printf("Empate!\nSuas cartas: %d %d %d\n", player_c1, player_c2, player_c3);
			}
			else if(strncmp(escolha,"stand",5)==0)
			{
				dealer_c3=dealer();
				if(dealer_c1+dealer_c2+dealer_c3==21)
					printf("Blackjack da casa! Ultima carta: %d\n", dealer_c3);
				else if(dealer_c1+dealer_c2+dealer_c3>21||dealer_c1+dealer_c2+dealer_c3<player_c1+player_c2)
					printf("Voce ganhou! Ultima carta da casa: %d\n", dealer_c3);
				else if(player_c1+player_c2+player_c3>dealer_c1+dealer_c2)
					printf("Voce perdeu! Ultima carta da casa: %d\n", dealer_c3);	
				else if(player_c1+player_c2==dealer_c1+dealer_c2+dealer_c3)
					printf("Empate!\nUltima carta da casa: %d\n", dealer_c3);
			}
		}
		
		
	}
	return 0;
}
	
int dealer()
{
	int a=rand()%13+1;
	if(a==1)
		return (10);
	else
		return (a);
}