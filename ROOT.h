#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int DNACodeDecode(char* Source, char* Destination)
{
	int i, j;
	j = 0;
	for (i = 0; i < 1000; i += 3)
	{
		if (Source[i] == NULL)
		{
			break;
		}
		if ((Source[i] != 'A' && Source[i] != 'C' && Source[i] != 'G' && Source[i] != 'T') || (Source[i + 1] != 'A' && Source[i + 1] != 'C' && Source[i + 1] != 'G' && Source[i + 1] != 'T') || (Source[i + 2] != 'A' && Source[i + 2] != 'C' && Source[i + 2] != 'G' && Source[i + 2] != 'T'))
		{
			return -1;
		}
		if (i != 0)
		{
			j++;
		}
		if (Source[i] == 'A')
		{
			if (Source[i + 1] == 'A')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'a';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'b';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'c';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'd';
					continue;
				}
			}
			if (Source[i + 1] == 'C')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'e';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'f';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'g';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'h';
					continue;
				}
			}
			if (Source[i + 1] == 'G')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'i';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'j';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'k';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'l';
					continue;
				}
			}
			if (Source[i + 1] == 'T')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'm';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'n';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'o';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'p';
					continue;
				}
			}
		}
		if (Source[i] == 'C')
		{
			if (Source[i + 1] == 'A')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'q';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'r';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 's';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 't';
					continue;
				}
			}
			if (Source[i + 1] == 'C')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'u';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'v';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'w';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'x';
					continue;
				}
			}
			if (Source[i + 1] == 'G')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'y';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'z';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'A';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'B';
					continue;
				}
			}
			if (Source[i + 1] == 'T')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'C';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'D';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'E';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'F';
					continue;
				}
			}
		}
		if (Source[i] == 'G')
		{
			if (Source[i + 1] == 'A')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'G';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'H';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'I';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'J';
					continue;
				}
			}
			if (Source[i + 1] == 'C')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'K';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'L';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'M';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'N';
					continue;
				}
			}
			if (Source[i + 1] == 'G')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'O';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'P';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'Q';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'R';
					continue;
				}
			}
			if (Source[i + 1] == 'T')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'S';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'T';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'U';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'V';
					continue;
				}
			}
		}
		if (Source[i] == 'T')
		{
			if (Source[i + 1] == 'A')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = 'W';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = 'X';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = 'Y';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = 'Z';
					continue;
				}
			}
			if (Source[i + 1] == 'C')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = '1';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = '2';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = '3';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = '4';
					continue;
				}
			}
			if (Source[i + 1] == 'G')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = '5';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = '6';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = '7';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = '8';
					continue;
				}
			}
			if (Source[i + 1] == 'T')
			{
				if (Source[i + 2] == 'A')
				{
					Destination[j] = '9';
					continue;
				}
				if (Source[i + 2] == 'C')
				{
					Destination[j] = '0';
					continue;
				}
				if (Source[i + 2] == 'G')
				{
					Destination[j] = ' ';
					continue;
				}
				if (Source[i + 2] == 'T')
				{
					Destination[j] = '.';
					continue;
				}
			}
		}
	}
	return 1;
}

int RemoveSpace(char* Source, char* Destination)
{
	unsigned long long int i = 0, j = 0;

	while (Source[i] != NULL)
	{
		if (Source[i] == ' ')
		{
			i++;
			continue;
		}
		else
		{
			Destination[j] = Source[i];
			i++;
			j++;
		}
	}

	return 0;
}

int ReverseHex(char* Source, char* Destination)
{
	unsigned long long int length;
	unsigned long long int i, j;

	length = strlen(Source);

	j = length - 1;

	for (i = 0; i < length; i += 2)
	{
		Destination[j - 1] = Source[i];
		Destination[j] = Source[i + 1];
		j -= 2;
	}

	return 0;
}

int ByteROL(int shift, int* Source, int* Destination)
{
	int leftshift, rightshift;

	if (*Source > 255 || *Source < 0 || shift < 0)
	{
		return -1;
	}

	if (*Source == 0)
	{
		*Destination = 0;
		return 0;
	}

	shift = shift % 8;
	if (shift == 0)
	{
		*Destination = *Source;
		return 0;
	}

	leftshift = *Source << shift;
	rightshift = *Source >> (8 - shift);
	*Destination = (unsigned char)leftshift | rightshift;

	return 0;
}

int ByteROR(int shift, int* Source, int* Destination)
{
	int rightshift, leftshift;

	if (*Source > 255 || *Source < 0 || shift < 0)
	{
		return -1;
	}

	if (*Source == 0)
	{
		*Destination = 0;
		return 0;
	}

	shift = shift % 8;
	if (shift == 0)
	{
		*Destination = *Source;
		return 0;
	}

	rightshift = *Source >> shift;
	leftshift = *Source << (8 - shift);
	*Destination = (unsigned char)rightshift | leftshift;

	return 0;
}