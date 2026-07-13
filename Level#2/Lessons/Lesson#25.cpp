// Lesson#25 - String and Char Format (printf)
#include <iostream>

using namespace std;

int main()
{ 

	char Name[] = "Abdelli Ahmed ";
	char SchoolName[] = "Programming Advice";

	// Print string and string
	printf("Dear %s, How Are you?\n\n", Name);
	printf("Welcome to %s Schoole!\n\n", SchoolName);

	char c = 'S';

	printf("Setting the width of c :%*c \n", 1, c);
	printf("Setting the width of c :%*c \n", 2, c);
	printf("Setting the width of c :%*c \n", 3, c);
	printf("Setting the width of c :%*c \n", 4, c);
	printf("Setting the width of c :%*c \n", 5, c);
	
	return 0;
}
