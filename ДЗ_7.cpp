

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(0, "");

    int a;
    int b;
    int c;
    int kr = 5000; //�������

    cout << "\n\t � ��� ���� 5000 ��������. ���� ���������� ����� ������!";
    Sleep(2000);
    system("cls");

    do
    {

        cout << "\n\t�� ����� " << kr << " ��������\n\n\t";

        kr -= 25;

        a = (time(0) / 7 + kr * 5) % 8;
        cout << a;
        Sleep(500);

        b = (time(0) * 3 + kr * 3) % 8;
        cout << b;
        Sleep(500);

        c = (time(0) - 5 + kr * 7) % 8;
        cout << c;
        Sleep(500);

        system("cls");

        if (a == 6 && b == 6 && c == 6)
        {
            kr /= 2;
            cout << "\n\t 666 ��������� ��� ���� � 2 ����! ";
            Sleep(2000);
        }

        else if (a == 0 && b == 0 && c == 0)
        {
            kr += 300;
            cout << "\n\t000 � ��� +300";
            Sleep(2000);
        }

        else if (a == 1 && b == 1 && c == 1)  
        {
            kr += 300;
            cout << "\n\t111 � ��� +300";
            Sleep(2000);
        }

        else if (a == 2 && b == 2 && c == 2)
        {
            kr += 300;
            cout << "\n\t222 � ��� +300";
            Sleep(2000);
        }

        else if (a == 3 && b == 3 && c == 3)
        {
            kr += 300;
            cout << "\n\t333 � ��� +300";
            Sleep(2000);
        }

        else if (a == 4 && b == 4 && c == 4)
        {
            kr += 300;
            cout << "\n\t444 � ��� +300";
            Sleep(2000);
        }

        else if (a == 5 && b == 5 && c == 5)
        {
            kr += 3000;
            cout << "\n\t555 � ��� +3000";
            Sleep(2000);
        }

        else if (a == 5 && b == c && b != 5)
        {
            kr += 100;
            cout << "\n\t5XX � ��� +100";
            Sleep(2000);
        }

        else if (a == 5 && b == 5 && c != 5)
        {
            kr += 150;
            cout << "\n\t55X � ��� +150";
            Sleep(2000);
        }

        else if (a == 7 && b == c && b != 7)
        {
            kr += 100;
            cout << "\n\t7XX � ��� +100";
            Sleep(2000);
        }

        else if (a == 7 && b == 7 && c != 7)
        {
            kr += 150;
            cout << "\n\t77X � ��� +150";
            Sleep(2000);
        }

        else if (a == 7 && b == 7 && c == 7)
        {
            kr = 100000;
            break;
        }
      
    } while (kr >= 25);

    cout << (kr < 25 ? "\n\t � ��� ������������ �������� ��� ���������� ����. �� ���������!!!\n" : 
        "\n\t 777 ��� ����� ����-���!!! ��� ���� 100000 !!!\n");
}