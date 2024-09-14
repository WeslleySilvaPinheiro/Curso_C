//TESTE 
#include<stdio.h>
#include<locale.h>

	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		char s[10];
		
		fgets(s, 10, stdin);
		puts(s);
		puts("");
	}
