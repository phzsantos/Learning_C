#include <stdio.h>

int main()
{
	int i, j, maior, produto, matriz[20][20];

	matriz[0][0] = 8;
	matriz[0][1] = 2;
	matriz[0][2] = 22;
	matriz[0][3] = 97;
	matriz[0][4] = 38;
	matriz[0][5] = 15;
	matriz[0][6] = 0;
	matriz[0][7] = 40;
	matriz[0][8] = 0;
	matriz[0][9] = 75;
	matriz[0][10] = 4;
	matriz[0][11] = 5;
	matriz[0][12] = 7;
	matriz[0][13] = 78;
	matriz[0][14] = 52;
	matriz[0][15] = 12;
	matriz[0][16] = 50;
	matriz[0][17] = 77;
	matriz[0][18] = 91;
	matriz[0][19] = 8;

	matriz[1][0] = 49;
	matriz[1][1] = 49;
	matriz[1][2] = 99;
	matriz[1][3] = 40;
	matriz[1][4] = 17;
	matriz[1][5] = 81;
	matriz[1][6] = 18;
	matriz[1][7] = 57;
	matriz[1][8] = 60;
	matriz[1][9] = 87;
	matriz[1][10] = 17;
	matriz[1][11] = 40;
	matriz[1][12] = 98;
	matriz[1][13] = 43;
	matriz[1][14] = 69;
	matriz[1][15] = 48;
	matriz[1][16] = 4;
	matriz[1][17] = 56;
	matriz[1][18] = 62;
	matriz[1][19] = 0;

	matriz[2][0] = 81;
	matriz[2][1] = 49;
	matriz[2][2] = 31;
	matriz[2][3] = 73;
	matriz[2][4] = 55;
	matriz[2][5] = 79;
	matriz[2][6] = 14;
	matriz[2][7] = 29;
	matriz[2][8] = 93;
	matriz[2][9] = 71;
	matriz[2][10] = 40;
	matriz[2][11] = 67;
	matriz[2][12] = 53;
	matriz[2][13] = 88;
	matriz[2][14] = 30;
	matriz[2][15] = 3;
	matriz[2][16] = 49;
	matriz[2][17] = 13;
	matriz[2][18] = 36;
	matriz[2][19] = 65;

	matriz[3][0] = 52;
	matriz[3][1] = 70;
	matriz[3][2] = 95;
	matriz[3][3] = 23;
	matriz[3][4] = 4;
	matriz[3][5] = 60;
	matriz[3][6] = 11;
	matriz[3][7] = 42;
	matriz[3][8] = 69;
	matriz[3][9] = 24;
	matriz[3][10] = 68;
	matriz[3][11] = 56;
	matriz[3][12] = 1;
	matriz[3][13] = 32;
	matriz[3][14] = 56;
	matriz[3][15] = 71;
	matriz[3][16] = 37;
	matriz[3][17] = 2;
	matriz[3][18] = 36;
	matriz[3][19] = 91;

	matriz[4][0] = 22;
	matriz[4][1] = 31;
	matriz[4][2] = 16;
	matriz[4][3] = 71;
	matriz[4][4] = 51;
	matriz[4][5] = 67;
	matriz[4][6] = 63;
	matriz[4][7] = 89;
	matriz[4][8] = 41;
	matriz[4][9] = 92;
	matriz[4][10] = 36;
	matriz[4][11] = 54;
	matriz[4][12] = 22;
	matriz[4][13] = 40;
	matriz[4][14] = 40;
	matriz[4][15] = 28;
	matriz[4][16] = 66;
	matriz[4][17] = 33;
	matriz[4][18] = 13;
	matriz[4][19] = 80;

	matriz[5][0] = 24;
	matriz[5][1] = 47;
	matriz[5][2] = 32;
	matriz[5][3] = 60;
	matriz[5][4] = 99;
	matriz[5][5] = 3;
	matriz[5][6] = 45;
	matriz[5][7] = 2;
	matriz[5][8] = 44;
	matriz[5][9] = 75;
	matriz[5][10] = 33;
	matriz[5][11] = 53;
	matriz[5][12] = 78;
	matriz[5][13] = 36;
	matriz[5][14] = 84;
	matriz[5][15] = 20;
	matriz[5][16] = 35;
	matriz[5][17] = 17;
	matriz[5][18] = 12;
	matriz[5][19] = 50;

	matriz[6][0] = 32;
	matriz[6][1] = 98;
	matriz[6][2] = 81;
	matriz[6][3] = 28;
	matriz[6][4] = 64;
	matriz[6][5] = 23;
	matriz[6][6] = 67;
	matriz[6][7] = 10;
	matriz[6][8] = 26;
	matriz[6][9] = 38;
	matriz[6][10] = 40;
	matriz[6][11] = 67;
	matriz[6][12] = 59;
	matriz[6][13] = 54;
	matriz[6][14] = 70;
	matriz[6][15] = 66;
	matriz[6][16] = 18;
	matriz[6][17] = 38;
	matriz[6][18] = 64;
	matriz[6][19] = 70;

	matriz[7][0] = 67;
	matriz[7][1] = 26;
	matriz[7][2] = 20;
	matriz[7][3] = 68;
	matriz[7][4] = 2;
	matriz[7][5] = 62;
	matriz[7][6] = 12;
	matriz[7][7] = 20;
	matriz[7][8] = 95;
	matriz[7][9] = 63;
	matriz[7][10] = 94;
	matriz[7][11] = 39;
	matriz[7][12] = 63;
	matriz[7][13] = 8;
	matriz[7][14] = 40;
	matriz[7][15] = 91;
	matriz[7][16] = 66;
	matriz[7][17] = 49;
	matriz[7][18] = 94;
	matriz[7][19] = 21;

	matriz[8][0] = 24;
	matriz[8][1] = 55;
	matriz[8][2] = 58;
	matriz[8][3] = 5;
	matriz[8][4] = 66;
	matriz[8][5] = 73;
	matriz[8][6] = 99;
	matriz[8][7] = 26;
	matriz[8][8] = 97;
	matriz[8][9] = 17;
	matriz[8][10] = 78;
	matriz[8][11] = 78;
	matriz[8][12] = 96;
	matriz[8][13] = 83;
	matriz[8][14] = 14;
	matriz[8][15] = 88;
	matriz[8][16] = 34;
	matriz[8][17] = 89;
	matriz[8][18] = 63;
	matriz[8][19] = 72;

	matriz[9][0] = 21;
	matriz[9][1] = 36;
	matriz[9][2] = 23;
	matriz[9][3] = 9;
	matriz[9][4] = 75;
	matriz[9][5] = 0;
	matriz[9][6] = 76;
	matriz[9][7] = 44;
	matriz[9][8] = 20;
	matriz[9][9] = 45;
	matriz[9][10] = 35;
	matriz[9][11] = 14;
	matriz[9][12] = 0;
	matriz[9][13] = 61;
	matriz[9][14] = 33;
	matriz[9][15] = 97;
	matriz[9][16] = 34;
	matriz[9][17] = 31;
	matriz[9][18] = 33;
	matriz[9][19] = 95;

	matriz[10][0] = 78;
	matriz[10][1] = 17;
	matriz[10][2] = 53;
	matriz[10][3] = 28;
	matriz[10][4] = 22;
	matriz[10][5] = 75;
	matriz[10][6] = 31;
	matriz[10][7] = 67;
	matriz[10][8] = 15;
	matriz[10][9] = 94;
	matriz[10][10] = 3;
	matriz[10][11] = 80;
	matriz[10][12] = 4;
	matriz[10][13] = 62;
	matriz[10][14] = 16;
	matriz[10][15] = 14;
	matriz[10][16] = 9;
	matriz[10][17] = 53;
	matriz[10][18] = 56;
	matriz[10][19] = 92;

	matriz[11][0] = 16;
	matriz[11][1] = 39;
	matriz[11][2] = 5;
	matriz[11][3] = 42;
	matriz[11][4] = 96;
	matriz[11][5] = 35;
	matriz[11][6] = 31;
	matriz[11][7] = 47;
	matriz[11][8] = 55;
	matriz[11][9] = 58;
	matriz[11][10] = 88;
	matriz[11][11] = 24;
	matriz[11][12] = 0;
	matriz[11][13] = 17;
	matriz[11][14] = 54;
	matriz[11][15] = 24;
	matriz[11][16] = 36;
	matriz[11][17] = 29;
	matriz[11][18] = 85;
	matriz[11][19] = 57;

	matriz[12][0] = 86;
	matriz[12][1] = 56;
	matriz[12][2] = 0;
	matriz[12][3] = 48;
	matriz[12][4] = 35;
	matriz[12][5] = 71;
	matriz[12][6] = 89;
	matriz[12][7] = 7;
	matriz[12][8] = 5;
	matriz[12][9] = 44;
	matriz[12][10] = 44;
	matriz[12][11] = 37;
	matriz[12][12] = 44;
	matriz[12][13] = 60;
	matriz[12][14] = 21;
	matriz[12][15] = 58;
	matriz[12][16] = 51;
	matriz[12][17] = 54;
	matriz[12][18] = 17;
	matriz[12][19] = 58;

	matriz[13][0] = 19;
	matriz[13][1] = 80;
	matriz[13][2] = 81;
	matriz[13][3] = 68;
	matriz[13][4] = 5;
	matriz[13][5] = 94;
	matriz[13][6] = 47;
	matriz[13][7] = 69;
	matriz[13][8] = 28;
	matriz[13][9] = 73;
	matriz[13][10] = 92;
	matriz[13][11] = 13;
	matriz[13][12] = 86;
	matriz[13][13] = 52;
	matriz[13][14] = 17;
	matriz[13][15] = 77;
	matriz[13][16] = 4;
	matriz[13][17] = 89;
	matriz[13][18] = 55;
	matriz[13][19] = 40;

	matriz[14][0] = 4;
	matriz[14][1] = 52;
	matriz[14][2] = 8;
	matriz[14][3] = 83;
	matriz[14][4] = 97;
	matriz[14][5] = 35;
	matriz[14][6] = 99;
	matriz[14][7] = 16;
	matriz[14][8] = 7;
	matriz[14][9] = 97;
	matriz[14][10] = 57;
	matriz[14][11] = 32;
	matriz[14][12] = 16;
	matriz[14][13] = 26;
	matriz[14][14] = 26;
	matriz[14][15] = 79;
	matriz[14][16] = 33;
	matriz[14][17] = 27;
	matriz[14][18] = 98;
	matriz[14][19] = 66;

	matriz[15][0] = 88;
	matriz[15][1] = 36;
	matriz[15][2] = 68;
	matriz[15][3] = 87;
	matriz[15][4] = 57;
	matriz[15][5] = 62;
	matriz[15][6] = 20;
	matriz[15][7] = 72;
	matriz[15][8] = 3;
	matriz[15][9] = 46;
	matriz[15][10] = 33;
	matriz[15][11] = 67;
	matriz[15][12] = 46;
	matriz[15][13] = 55;
	matriz[15][14] = 12;
	matriz[15][15] = 32;
	matriz[15][16] = 63;
	matriz[15][17] = 93;
	matriz[15][18] = 53;
	matriz[15][19] = 69;

	matriz[16][0] = 4;
	matriz[16][1] = 42;
	matriz[16][2] = 16;
	matriz[16][3] = 73;
	matriz[16][4] = 38;
	matriz[16][5] = 25;
	matriz[16][6] = 39;
	matriz[16][7] = 11;
	matriz[16][8] = 24;
	matriz[16][9] = 94;
	matriz[16][10] = 72;
	matriz[16][11] = 18;
	matriz[16][12] = 8;
	matriz[16][13] = 46;
	matriz[16][14] = 29;
	matriz[16][15] = 32;
	matriz[16][16] = 40;
	matriz[16][17] = 62;
	matriz[16][18] = 76;
	matriz[16][19] = 36;

	matriz[17][0] = 20;
	matriz[17][1] = 69;
	matriz[17][2] = 36;
	matriz[17][3] = 41;
	matriz[17][4] = 72;
	matriz[17][5] = 30;
	matriz[17][6] = 23;
	matriz[17][7] = 88;
	matriz[17][8] = 34;
	matriz[17][9] = 62;
	matriz[17][10] = 99;
	matriz[17][11] = 69;
	matriz[17][12] = 82;
	matriz[17][13] = 67;
	matriz[17][14] = 59;
	matriz[17][15] = 85;
	matriz[17][16] = 74;
	matriz[17][17] = 4;
	matriz[17][18] = 36;
	matriz[17][19] = 16;

	matriz[18][0] = 20;
	matriz[18][1] = 73;
	matriz[18][2] = 35;
	matriz[18][3] = 29;
	matriz[18][4] = 78;
	matriz[18][5] = 31;
	matriz[18][6] = 90;
	matriz[18][7] = 1;
	matriz[18][8] = 74;
	matriz[18][9] = 31;
	matriz[18][10] = 49;
	matriz[18][11] = 71;
	matriz[18][12] = 48;
	matriz[18][13] = 86;
	matriz[18][14] = 81;
	matriz[18][15] = 16;
	matriz[18][16] = 23;
	matriz[18][17] = 57;
	matriz[18][18] = 5;
	matriz[18][19] = 54;

	matriz[19][0] = 1;
	matriz[19][1] = 70;
	matriz[19][2] = 54;
	matriz[19][3] = 71;
	matriz[19][4] = 83;
	matriz[19][5] = 51;
	matriz[19][6] = 54;
	matriz[19][7] = 69;
	matriz[19][8] = 16;
	matriz[19][9] = 92;
	matriz[19][10] = 33;
	matriz[19][11] = 48;
	matriz[19][12] = 61;
	matriz[19][13] = 43;
	matriz[19][14] = 52;
	matriz[19][15] = 1;
	matriz[19][16] = 89;
	matriz[19][17] = 19;
	matriz[19][18] = 67;
	matriz[19][19] = 48;

	maior = matriz[0][0] * matriz[0][1] * matriz[0][2] * matriz[0][3];
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (i < 17)
			{
				produto = matriz[i][j] * matriz[i+1][j] *  matriz[i+2][j] * matriz[i+3][j];
				if (produto > maior)
				{
					maior = produto;
				}
			}
			if (j > 2 && i < 17)
			{
				produto = matriz[i][j] * matriz[i+1][j-1] * matriz[i+2][j-2] * matriz[i+3][j-3];
				if (produto > maior)
				{
					maior = produto;
				}
			}
			if (j < 17)
			{
				produto = matriz[i][j] * matriz[i][j+1] * matriz[i][j+2] * matriz[i][j+3];
				if (produto > maior)
				{
					maior = produto;
				}
			}
			if (j < 17 && i < 17)
			{
				produto = matriz[i][j] * matriz[i+1][j+1] * matriz[i+2][j+2] * matriz[i+3][j+3];
				if (produto > maior)
				{
					maior = produto;
				}
			}
		}
	}

	printf("Maior: %d", maior);

	return 0;
}
