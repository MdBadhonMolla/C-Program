#include<stdio.h>

void chack(char a)
{
	if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
	{
		printf("[%c] - Vowel\n",a);
	}else
	{
		printf("[%c] - Consonant\n",a);
	}
}

int main()
{
	char a='a',b='U',c='z';
	chack(a);
	chack(b);
	chack(c);
}

