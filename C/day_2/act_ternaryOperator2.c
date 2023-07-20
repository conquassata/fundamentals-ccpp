// #include <stdio.h>
// int findMax(int x, int y) {
// 	if (x > y)
// 	{
// 		return x;
// 	}
// 	else {
// 		return y;
// 	}
	
// }

// int main() {
// 	int MAX = findMax(4, 3);
// 	printf("%d", MAX);
// 	return 0;
// }

// is better use the ternary operator on this kind of situations. Eg.
#include <stdio.h>
int findMax(int x, int y) {
		return (x > y) ? x : y;
}

int main() {
	int MAX = findMax(4, 3);
	printf("%d", MAX);
	return 0;
}
