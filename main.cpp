#include <iostream>
#include <locale.h>
#include <windows.h>
#include <iomanip>

using namespace std;


int main()
{

    setlocale(0, "");

    cout << "\t �i���� ������� ������� ����" << endl;
    cout << "\t �����, ���� ������� ��i�" << endl;
    cout << "\t ��i���� ���i �� ����" << endl;
    cout << "\t i ��������� ��� ����� ��i�" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t�I���I� �������" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;


    HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 4);
    cout << "Every" << endl;

    SetConsoleTextAttribute(h, 7);
    cout << "\tHunter" << endl;

    SetConsoleTextAttribute(h, 6);
    cout << "\t\tWants" << endl;

    SetConsoleTextAttribute(h, 6);
    cout << "\t\t\tTo" << endl;

    SetConsoleTextAttribute(h, 2);
    cout << "\t\t\t\tKnow" << endl;

    SetConsoleTextAttribute(h, 1);
    cout << "\t\t\t\t\tWhere" << endl;

    SetConsoleTextAttribute(h, 1);
    cout << "\t\t\t\t\t\tThe" << endl;

    SetConsoleTextAttribute(h, 5);
    cout << "\t\t\t\t\t\t\tPheasant" << endl;

    SetConsoleTextAttribute(h, 3);
    cout << "\t\t\t\t\t\t\t\tIs" << endl;


    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;

    SetConsoleTextAttribute(h, 7);

    cout << "\t\t\t\t\t���������:" << endl;
    cout << "\t\t\t\t\t������ �������." << endl;
    cout << "\t\t\t\t\t������: ���������." << endl;
    cout << "\t\t\t\t\t..." << endl;
    cout << "\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t���.: 666-66-66" << endl;
    cout << "\t\t\t\t\t666\t" << char(124) << " 666 " << char(124) << endl;
    cout << "\t\t\t\t\t66\t" << char(124) << " 66  " << char(124) << endl;
    cout << "\t\t\t\t\t66\t" << char(124) << " 66  " << char(124) << endl;
    cout << "\t\t\t\t\ti �.�. " << endl;

    return 0;
}