#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int DNACodeDecode(char* string, char* result)
{
	int i, j;
	j = 0;
	for (i = 0; i < 1000; i += 3)
	{
		if (string[i] == NULL)
		{
			break;
		}
		if ((string[i] != 'A' && string[i] != 'C' && string[i] != 'G' && string[i] != 'T') || (string[i + 1] != 'A' && string[i + 1] != 'C' && string[i + 1] != 'G' && string[i + 1] != 'T') || (string[i + 2] != 'A' && string[i + 2] != 'C' && string[i + 2] != 'G' && string[i + 2] != 'T'))
		{
			return -1;
		}
		if (i != 0)
		{
			j++;
		}
		if (string[i] == 'A')
		{
			if (string[i + 1] == 'A')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'a';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'b';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'c';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'd';
					continue;
				}
			}
			if (string[i + 1] == 'C')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'e';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'f';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'g';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'h';
					continue;
				}
			}
			if (string[i + 1] == 'G')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'i';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'j';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'k';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'l';
					continue;
				}
			}
			if (string[i + 1] == 'T')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'm';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'n';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'o';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'p';
					continue;
				}
			}
		}
		if (string[i] == 'C')
		{
			if (string[i + 1] == 'A')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'q';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'r';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 's';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 't';
					continue;
				}
			}
			if (string[i + 1] == 'C')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'u';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'v';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'w';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'x';
					continue;
				}
			}
			if (string[i + 1] == 'G')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'y';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'z';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'A';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'B';
					continue;
				}
			}
			if (string[i + 1] == 'T')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'C';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'D';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'E';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'F';
					continue;
				}
			}
		}
		if (string[i] == 'G')
		{
			if (string[i + 1] == 'A')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'G';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'H';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'I';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'J';
					continue;
				}
			}
			if (string[i + 1] == 'C')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'K';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'L';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'M';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'N';
					continue;
				}
			}
			if (string[i + 1] == 'G')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'O';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'P';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'Q';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'R';
					continue;
				}
			}
			if (string[i + 1] == 'T')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'S';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'T';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'U';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'V';
					continue;
				}
			}
		}
		if (string[i] == 'T')
		{
			if (string[i + 1] == 'A')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = 'W';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = 'X';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = 'Y';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = 'Z';
					continue;
				}
			}
			if (string[i + 1] == 'C')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = '1';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = '2';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = '3';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = '4';
					continue;
				}
			}
			if (string[i + 1] == 'G')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = '5';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = '6';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = '7';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = '8';
					continue;
				}
			}
			if (string[i + 1] == 'T')
			{
				if (string[i + 2] == 'A')
				{
					result[j] = '9';
					continue;
				}
				if (string[i + 2] == 'C')
				{
					result[j] = '0';
					continue;
				}
				if (string[i + 2] == 'G')
				{
					result[j] = ' ';
					continue;
				}
				if (string[i + 2] == 'T')
				{
					result[j] = '.';
					continue;
				}
			}
		}
	}
	return 1;
}

int RemoveSpace(char* string, char* result)
{
	int i = 0, j = 0;
	while (string[i] != NULL)
	{
		if (string[i] == ' ')
		{
			i++;
			continue;
		}
		else
		{
			result[j] = string[i];
			i++;
			j++;
		}
	}
	return 1;
}

int ReverseHex(char* string, char* result)
{
	int length = strlen(string);
	int i, j;
	j = length - 1;
	for (i = 0; i < length; i += 2)
	{
		result[j - 1] = string[i];
		result[j] = string[i + 1];
		j -= 2;
	}
	return 1;
}