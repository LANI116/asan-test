#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	gotoxy(40, 10);
	printf("Asan SmartFactory\n\n\n\n\n\n\n");
	Sleep(1000);
	system("cls");
	gotoxy(40, 20);
	printf("Asan SmartFactory\n\n\n\n\n\n\n");
	

	return 0;
}