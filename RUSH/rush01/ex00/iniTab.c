/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   iniTab.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bxayasen <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 23:47:06 by bxayasen     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 14:03:16 by bxayasen    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
int **iniTab(int **tab, char *str)
{
	int x;
	int y;

	x = 1;
	y = 1;
	while(x <= 4)
	{
		while(y <= 4)
		{
			tab[x][y] = 0;
			y++;
		}
		x++;
	}		
	tab[0][1] = (str[0] - 48);
	tab[0][2] = (str[2] - 48);
	tab[0][3] = (str[4] - 48);
	tab[0][4] = (str[6] - 48);
	tab[5][1] = (str[8] - 48);
	tab[5][2] = (str[10] - 48);
	tab[5][3] = (str[12] - 48);
	tab[5][4] = (str[14] - 48);
	tab[1][0] = (str[16] - 48);
	tab[2][0] = (str[18] - 48);
	tab[3][0] = (str[20] - 48);
	tab[4][0] = (str[22] - 48);
	tab[1][5] = (str[24] - 48);
	tab[2][5] = (str[26] - 48);
	tab[3][5] = (str[28] - 48);
	tab[4][5] = (str[30] - 48);

	tab[0][0] = 0;
	tab[0][5] = 0;
	tab[5][0] = 0;
	tab[5][5] = 0;


	return 0;
}







//Remplis 1234 pour parametre 4.
int ezFill(int **tab)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 1;
	while (y <= 4)
	{
		if (tab[x][y] == 4)
		{
			i = 1;
			x = 1;
			while (x <= 4)
			{
				tab[x][y] = i;
				i++;
				x++;
			}
			x = 0;
		}
		if (tab[x][y] == 3 && tab[5][y] == 2)
			tab[3][y] = 4;
		y++;
	}

	x = 5;
	y = 1;
	while (y <= 4)
	{
		if (tab[x][y] == 4)
		{
			i = 1;
			x = 4;
			while (x >= 1)
			{
				tab[x][y] = i;
				i++;
				x--;
			}
			x = 5;
		}
			if (tab[x][y] == 3 && tab[1][y] == 2)
				tab[2][y] = 4;
		y++;
	}

	y = 0;
	x = 1;
	while (x <= 4)
	{
		if (tab[x][y] == 4)
		{
			i = 1;
			y = 1;
			while (y <= 4)
			{
				tab[x][y] = i;
				i++;
				y++;
			}
		y = 0;
		}
		if (tab[x][y] == 3 && tab[x][5] == 2)
			tab[x][3] = 4;
		x++;
	}

	y = 5;

	while (x <= 4)
	{
		if (tab[x][y] == 4)
		{
			i = 1;
			y = 4;
			while (y >= 1)
			{
				tab[x][y] = i;
				i++;
				y--;
			}
		y = 4;
		if (tab[x][y] == 3 && tab[x][0] == 2)
			tab[x][2] = 4;
		}
		x++;
	}











	return (0);
}
