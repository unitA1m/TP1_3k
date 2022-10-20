#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "<----- Главное меню ----->" << endl;



	Menu menu;
	menu.main_menu();
	return 0;
}