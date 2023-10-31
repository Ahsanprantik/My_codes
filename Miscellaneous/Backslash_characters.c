#include <stdio.h>

void main()
{
	printf("This is a backspace.\b|");	//Full stop(.) is changed into |

	printf("\nThis is a feed.\f");	//?

	printf("\nThis is a newline.");

	printf("\n_____________This carriage return.\rReturning");

	printf("\n\tThis line starts with a horizontal tab.");

	printf("\n\"This line is in a double quote.\"");	//"" can't be put without a trailing backslash.

	printf("\n\'This line is in a single quote.\'");	//'' also can't be put without a trailing backslash.

	printf("\nThe next line is terminated by NULL character.\0Terminated line.");

	printf("\nThis is a backslash: \\");	//Single backslash does not show up.

	printf("\n\tThis line starts with a vertical tab.");	//?

	printf("\nThis line shows an alert.\a");	//?

	printf("\n This line has a ?");//Backslash should be necessary.(?)

	printf("\nOctal constant: \222");//Unknown!

	printf("\nHexadecimal constant: \x2ff");//!!Bengali letters should start from 2ff (767)

	getch();
}
