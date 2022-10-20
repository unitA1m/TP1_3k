#include "lib.h"
#include "Books.h"

using namespace std;

Books::Books()
{
    cout << "Constructor Books without attributes was called." << endl;
}

Books::~Books()
{
    cout << "Destructor Books was called." << endl;
}


Books::Books(const Books& Books_copy)
{
    name = Books_copy.name;
    author = Books_copy.author;
    yearin = Books_copy.yearin;
    annotation = Books_copy.annotation;
    genre = Books_copy.genre;
    volume = Books_copy.volume;
    cost = Books_copy.cost;
}

Books::Books(string name)
{
    this->name = name;
}

string Books::get_name() const { return name; }
void Books::set_name(string name_ch) { name = name_ch; }

string Books::get_author() const { return author; }
void Books::set_author(string author_ch) { author = author_ch; }



string Books::get_yearin() const { return yearin; }

void Books::set_yearin(string yearin_ch) { yearin = yearin_ch; }


string Books::get_annotation() const { return annotation; }

void Books::set_annotation(string annotation_ch) { annotation = annotation_ch; }


string Books::get_genre() const { return genre; }

void Books::set_genre(string genre_ch) { genre = genre_ch; }


string Books::get_volume() const { return volume; }

void Books::set_volume(string volume_ch) { volume = volume_ch; }

string Books::get_cost() const { return cost; }

void Books::set_cost(string cost_ch) { cost = cost_ch; }

bool Books::SameCost(string SC_ch) {

    if (SC_ch == (this->get_cost()))
        return true;
    else return false;
}

void Books::show()
{
    setlocale(LC_ALL, "Russian");
    cout << "------------------------------------" << endl;
    cout << "�������: �����" << endl;
    cout << "��������: " << name << endl;
    cout << "�����: " << author << endl;
    cout << "��� �������: " << yearin << endl;
    cout << "���������: " << annotation << endl;
    cout << "����: " << genre << endl;
    cout << "���-�� �������: " << volume << endl;
    cout << "���������: " << cost << endl;
    cout << "------------------------------------" << endl;
}

void Books::rewrite()
{
    setlocale(LC_ALL, "Russian");
    cout << "------------------------------------" << endl;
    cin.ignore(32767, '\n');
    cout << "�������: �����" << endl;
    cout << "������� ����� ��������: ";
    getline(cin, name);

    cout << "������� ������ ������: ";
    getline(cin, author);

    cout << "������� ����� ��� �������: ";
    getline(cin, yearin);
    cout << "������� ����� ���������: ";
    getline(cin, annotation);
    cout << "������� ����� ����: ";
    getline(cin, genre);
    cout << "������� ���-�� �������: ";
    getline(cin, volume);
    cout << "������� ����� ���������: ";
    getline(cin, cost);

    cout << "------------------------------------" << endl;
}

void Books::saving()
{
    setlocale(LC_ALL, "Russian");
    ofstream outfile;
    string initfile = "biliary.txt";
    outfile.open(initfile, ios_base::app);
    if (!outfile)
    {
        throw "������!";
        system("pause");
        exit(1);
    }
    outfile << 1 << endl << name << endl<<author<<endl << yearin << endl << annotation << endl << genre << endl << volume << endl<<cost<<endl;
    outfile.close();
    system("bibliary.txt");
}

void Books::redact_str(int num_str, string red_str)
{
    setlocale(LC_ALL, "Russian");
    switch (num_str)
    {
    case 1:
        this->name = red_str;
        break;
    case 2:
        
        break;
    case 3:
        this->yearin = red_str;
        
        break;
    case 4:
        this->annotation = red_str;
        
        break;
    case 5:
        this->genre = red_str;
        
        break;
    case 6:
        this->volume = red_str;

        break;
    case 7:
        this->cost = red_str;

        break;
    default:
        throw "������ ������ ����!";
        break;
    }
}

