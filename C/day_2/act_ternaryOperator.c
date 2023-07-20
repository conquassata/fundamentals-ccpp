// C program to check whether a year is leap year or not
// using ternary operator

#include <stdio.h>

int main()
{
	int yr = 1900;

	(yr % 4 == 0) ? (yr % 100 != 0 ? printf("The year %d is a leap year", yr)
	: (yr % 400 == 0 ? printf("The year %d is a leap year",yr)
		: printf("The year %d is not a leap year", yr)))
			: printf("The year %d is not a leap year", yr);
	return 0;
}

// // C program to find largest among two
// // numbers using ternary operator

// #include <stdio.h>
// int main()
// {
// 	int m = 5, n = 4;

// 	(m > n) ? printf("m is greater than n that is %d > %d",
// 					m, n)
// 			: printf("n is greater than m that is %d > %d",
// 					n, m);

// 	return 0;
// }