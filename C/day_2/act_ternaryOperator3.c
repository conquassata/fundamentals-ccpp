#include <stdio.h>
int speed(sp){
	sp = (sp <= 65) ? (65) : (sp <= 70) ? (70) : (90);
	switch (sp)
	{
	case 65 : printf("No speeding ticket");break;
	case 70 : printf("Speeding ticket");break;
	case 90 : printf("Expensive speeding ticket");break;
	default : printf("No speeding ticket");break;
    }
    return sp;
}

int main() {
	printf("Enter the speed: ");
	int sp;
	scanf("%d", &sp);
	speed(sp);
	return 0;
}