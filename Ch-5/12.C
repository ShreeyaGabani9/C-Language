#include<stdio.h>
#include<conio.h>

/*
	Character : A - Z || a - z || symbol

	ASCI Value must be INTEGER
	0 - 127


	A - Z = 65 TO 90
	a - z = 97 TO 122
	Space = 32
	0 - 9 = 48 TO 57

*/

main()
{
	int a = 57;
	char ch = 'O';
	float pi = 3.14;
	clrscr();

	// Int Datatype convert Char Datatype
	printf("Ch\t: %c\n",ch);
	printf("Char\t: %d\n",ch);

	// Int To Float
	printf("A\t: %d\n",a);
	printf("Float: %f\n",(float)a);

	// Flaot To Int
	printf("PI\t: %f\n",pi);
	printf("Int: %d\n",(int)pi);

	getch();
}