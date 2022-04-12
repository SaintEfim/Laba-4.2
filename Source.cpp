#include <iostream>
#include <Windows.h> 
#include <conio.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD position = { 0, 0 };
void screen_exit();
void inout_screen_exit();
void screen1();
void inout_scren1();
void text();
void input(double &x, double&e, double&y0, double&y1, double&n, double&sum);
void errorr(int error);
void summa(double& x, double& e, double& y0, double& y1, double& n, double& sum);
void rec(double& x, double& e, double& y0, double& y1, double& n, double& sum);
void vivod(double& x, double& e, double& y0, double& y1, double& n, double& sum);
int main() {
	double x = 0, e = 0, y0 = 0, y1 = 0, n = 0, sum = 0;
	setlocale(LC_ALL, "rus");
	bool proverka = true;
	char chose;
	setlocale(LC_ALL, "rus");
	screen1();
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13) {
		system("cls");
		text();
		input(x, e, y0,y1,n,sum);
		summa(x,e, y0, y1,n,sum);
		rec(x, e, y0, y1, n, sum);
		vivod(x, e, y0, y1, n, sum);
		cout << endl;
		system("pause");
		screen_exit();
	}
	else if (chose == 27) {
		system("cls");
		screen_exit();
	}
	return 0;
}
void screen_exit()
{
	system("cls");
	int height = 7;
	int weight = 40;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == weight) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++)
		cout << "-";
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 0)
				cout << "|";
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++)
		cout << "-";
	cout << "\n";
	inout_screen_exit();
	bool proverka = true;
	char chose;
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13) {
		system("cls");
		text();
	}
	else if (chose == 27) {
		system("cls");
		exit(0);
	}
}
void inout_screen_exit()
{
	position = { 2, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Program recursion completed it's work";
	position = { 14, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Program recursion";
	position = { 17, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Group 1092";
	position = { 16, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Fedenko Efim";
	position = { 7, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Escape-exit";
	position = { 25, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Enter-continue";
}
void screen1()
{
	int height = 7;
	int weight = 45;
	for (int i = 0; i < weight + 1; i++)
		cout << "-";
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == weight -0) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 0)
				cout << "|";
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++)
		cout << "-";
	cout << "\n";
	inout_scren1();
}
void inout_scren1() {
	position = { 14, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Program recursion";
	position = { 17, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Group 1092";
	position = { 16, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Fedenko Efim";
	position = { 7, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Escape-exit";
	position = { 25, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Enter-continue";
}
void text() {
	position = { 20, 2 };
	SetConsoleCursorPosition(hConsole, position);
	cout<<"|x|>0";
	position = { 20, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout<< "x=";
	position = { 20, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout<< "e=";
}
void input(double& x, double& e, double& y0, double& y1, double& n, double& sum) {
    x = 0, e = 0;
	int error = 0;
	errorr(error);
	do {
		errorr(error);
		position = { 22, 3 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> x;
		error++;
	}while(x==0);
    error = 0;
	errorr(error);
	position = { 22, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cin >> e;
	cout << endl;
}
void errorr(int error) {
	if (error > 0) {
		position = { 22, 8 };
		SetConsoleCursorPosition(hConsole, position);
		cout << "Error";
	}
	else {
		position = { 22, 8 };
		SetConsoleCursorPosition(hConsole, position);
		cout << "Good!";
	}
}
void summa(double& x, double& e, double& y0, double& y1, double& n, double& sum) {
	y0 = 1 / x;
	y1 = 1 / (3 * x * x * x);
	n = 2;
	sum = y0 + y1;
	rec(x, e, y0, y1, n, sum);
}
void rec(double& x, double& e, double& y0, double& y1, double& n, double& sum) {
	if (fabs(fabs(y1) - fabs(y0)) >= e)
	{
		n++;
		y0 = y1;
		y1 = y0 * (2 * n - 3) / (x * x * (2 * n - 1));
		sum = sum + y1;
		rec(x, e, y0, y1, n, sum);
	}
}
void vivod(double& x, double& e, double& y0, double& y1, double& n, double& sum) {
	cout <<"n=" << n << endl;
	cout << "sum=" << 2 * sum << endl <<"F(x)=" << log((x + 1) / (x - 1));
}

