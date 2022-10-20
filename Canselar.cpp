#include "lib.h"

using namespace std;

Canselars::Canselars()
{
    cout << "Constructor Canselars without attributes was called." << endl;
}

Canselars::~Canselars()
{
    cout << "Destructor Canselars was called." << endl;
}


Canselars::Canselars(const Canselars& Canselars_copy)
{
    type = Canselars_copy.type;
    color = Canselars_copy.color;
    purpose = Canselars_copy.purpose;
    cost = Canselars_copy.cost;


}

Canselars::Canselars(string type)
{
    this->type = type;
}

string Canselars::get_type() const { return type; }

void Canselars::set_type(string type_ch) { type = type_ch; }

string Canselars::get_color() const { return color; }

void Canselars::set_color(string color_ch) { color = color_ch; }

string Canselars::get_purpose() const { return purpose; }
void Canselars::set_purpose(string purpose_ch) { purpose = purpose_ch; }

string Canselars::get_cost() const { return cost; }
void Canselars::set_cost(string cost_ch) { color = cost_ch; }

bool Canselars::SameCost(string SC_ch) {

    if (SC_ch == (this->get_cost()))
        return true;
    else return false;
}




void Canselars::show()
{
    setlocale(LC_ALL, "Russian");
    cout << "------------------------------------" << endl;
    cout << "Предмет: канцелярия" << endl;
    cout << "Тип: " << type << endl;
    cout << "Цвет : " << color << endl;
    cout << "Назначение : " << purpose << endl;
    cout << "Стоимость : " << cost << endl;

    cout << "------------------------------------" << endl;
}

void Canselars::rewrite()
{
    setlocale(LC_ALL, "Russian");
    cout << "------------------------------------" << endl;
    cin.ignore(32767, '\n');
    cout << "Предмет: канцелярия" << endl;
    cout << "Введите новое название: ";
    getline(cin, type);
    cout << "Введите новый цвет: ";
    getline(cin, color);
    cout << "Введите новое назначение: ";
    getline(cin, purpose);
    cout << "Введите новую цену: ";
    getline(cin, cost);

    cout << "------------------------------------" << endl;
}

void Canselars::saving()
{
    setlocale(LC_ALL, "Russian");
    ofstream outfile;
    string initfile = "bibliary.txt";
    outfile.open(initfile, ios_base::app);
    if (!outfile)
    {
        throw "Ошибка файла";
        system("pause");
        exit(1);
    }
    outfile << 3 << endl << type << endl << color << endl<<purpose<<endl<<cost<<endl;
    outfile.close();
    system("bibliary.txt");
}

void Canselars::redact_str(int num_str, string red_str)
{
    setlocale(LC_ALL, "Russian");
    switch (num_str)
    {
    case 1:
        this->type = red_str;
        break;
    case 2:
        this->color = red_str;
        break;
    case 3:
        this->purpose = red_str;
        break;
    case 4:
        this->cost = red_str;
        break;
    default:
        throw "Ошибка номера меню";
        break;
    }
}

