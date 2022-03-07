#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 0, j, l ,y, w = 0, i1, r1, r2, y1;
	int choice[3][3] = { {'*','*','*'},
					 {'*','*','*'},
					 {'*','*','*'}
	};
	int p1c[5];
	int p2c[4];
	char x = 'x';
	char o = 'o';
	

	printf("          X-O-X GAME\n");
	printf("         ------------\n");
	printf("\n");
	printf("  Player 1 (X) | Player 2 (O)\n");
	printf("\n");

	printf("    ------- ------- -------\n");
	printf("   |       |       |       |\n");
	printf("   |   1   |   2   |   3   |\n");
	printf("   |       |       |       |\n");
	printf("    ------- ------- -------\n");
	printf("   |       |       |       |\n");
	printf("   |   4   |   5   |   6   |\n");
	printf("   |       |       |       |\n");
	printf("    ------- ------- -------\n");
	printf("   |       |       |       |\n");
	printf("   |   7   |   8   |   9   |\n");
	printf("   |       |       |       |\n");
	printf("    ------- ------- -------\n");


tryagain:

player1:
	while (0 <= i && i <= 4) {
		printf("-> Player 1 enter a number: ");
		scanf_s("%d", &p1c[i]);

		while (p1c[i] < 1 || 9 < p1c[i]) {
			printf("-x Please enter number from 1 to 9 (1 and 9 included)\n");
			printf("-> Player 1 enter a number: ");
			scanf_s("%d", &p1c[i]);
		}

		for (l = 0;l < 5;l++) {

			if (p1c[l] == 1) {

				choice[0][0] = x;
			}
			else if (p1c[l] == 2) {

				choice[0][1] = x;
			}
			else if (p1c[l] == 3) {

				choice[0][2] = x;
			}
			else if (p1c[l] == 4) {

				choice[1][0] = x;
			}
			else if (p1c[l] == 5) {

				choice[1][1] = x;
			}
			else if (p1c[l] == 6) {

				choice[1][2] = x;
			}
			else if (p1c[l] == 7) {

				choice[2][0] = x;
			}
			else if (p1c[l] == 8) {

				choice[2][1] = x;
			}
			else if (p1c[l] == 9) {

				choice[2][2] = x;
			}
		}


		printf("------------\n");
		for (j = 0;j <= 2;j++) {
			for (i1 = 0;i1 <= 2;i1++) {
				printf(" %c |", choice[j][i1]);

			}
			printf("\n");
			printf("------------\n");
		}

		i++;

		if (choice[0][0] == x && choice[0][1] == x && choice[0][2] == x) {
			printf("Player 1 WIN\n");


			goto finish;;

		}
		else	if (choice[1][0] == x && choice[1][1] == x && choice[1][2] == x) {
			printf("Player 1 WIN");
			goto finish;;
		}
		else	if (choice[2][0] == x && choice[2][1] == x && choice[2][2] == x) {
			printf("Player 1 WIN");
			goto finish;;
		}

		else	if (choice[0][0] == x && choice[1][0] == x && choice[2][0] == x) {
			printf("Player 1 WIN");
			goto finish;;
		}
		else	if (choice[0][1] == x && choice[1][1] == x && choice[2][1] == x) {
			printf("Player 1 WIN");
			goto finish;;
		}
		else	if (choice[0][2] == x && choice[1][2] == x && choice[2][2] == x) {
			printf("Player 1 WIN");
			goto finish;;
		}

		else	if (choice[0][0] == x && choice[1][1] == x && choice[2][2] == x) {
			printf("Player 1 WIN");
			goto finish;;
		}
		else	if (choice[0][2] == x && choice[1][1] == x && choice[2][0] == x) {
			printf("Player 1 WIN");

			goto finish;;
		}

		goto player2;
	}

	/*-------------------------PLAYER2-----------------------------*/

player2:
	while (0 <= w && w <= 3) {
		printf("-> Player 2 enter a number: ");
		scanf_s("%d", &p2c[w]);

		while (p2c[w] < 1 || 9 < p2c[w]) {
			printf("-x Please enter number from 1 to 9 (1 and 9 included)\n");
			printf("-> Player 2 enter a number: ");
			scanf_s("%d", &p2c[w]);
		}

		for (y1 = 0;y1 < 4;y1++) {

			if (p2c[y1] == 1) {

				choice[0][0] = o;
			}
			else if (p2c[y1] == 2) {

				choice[0][1] = o;
			}
			else if (p2c[y1] == 3) {

				choice[0][2] = o;
			}
			else if (p2c[y1] == 4) {

				choice[1][0] = o;
			}
			else if (p2c[y1] == 5) {

				choice[1][1] = o;
			}
			else if (p2c[y1] == 6) {

				choice[1][2] = o;
			}
			else if (p2c[y1] == 7) {

				choice[2][0] = o;
			}
			else if (p2c[y1] == 8) {

				choice[2][1] = o;
			}
			else if (p2c[y1] == 9) {

				choice[2][2] = o;
			}
		}

		printf("------------\n");
		for (r1 = 0;r1 <= 2;r1++) {
			for (r2 = 0;r2 <= 2;r2++) {
				printf(" %c |", choice[r1][r2]);
			}
			printf("\n");
			printf("------------\n");
		}

		w++;

		if (choice[0][0] == o && choice[0][1] == o && choice[0][2] == o) {
			printf("Player 2 WIN");
			goto finish;;
			
		}
		else if (choice[1][0] == o && choice[1][1] == o && choice[1][2] == o) {
			printf("Player 2 WIN");
			goto finish;;
		}
		else	if (choice[2][0] == o && choice[2][1] == o && choice[2][2] == o) {
			printf("Player 2 WIN");
			goto finish;;
		}

		else	if (choice[0][0] == o && choice[1][0] == o && choice[2][0] == o) {
			printf("Player 2 WIN");
			goto finish;;
		}
		else	if (choice[0][1] == o && choice[1][1] == o && choice[2][1] == o) {
			printf("Player 2 WIN");
			goto finish;;
		}
		else	if (choice[0][2] == o && choice[1][2] == o && choice[2][2] == o) {
			printf("Player 2 WIN");
			goto finish;;
		}

		else	if (choice[0][0] == o && choice[1][1] == o && choice[2][2] == o) {
			printf("Player 2 WIN");
			goto finish;;
		}
		else	if (choice[0][2] == o && choice[1][1] == o && choice[2][0] == o) {
			printf("Player 2 WIN");
			goto finish;;
		}


		goto player1;
	}
	 
	finish:

	system("pause");
}