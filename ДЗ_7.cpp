#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(0, "");

    int a;
    int b;
    int c;
    int kr = 7000; //credits

    cout << "\n\n\t You have 5000 credits. The game starts now!";
    Sleep(2005);
    system("cls");

    do
    {

        cout << "\n\n\ton the account " << kr << " credits\n\n\t";

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
            cout << "\n\t 666 reduce your bank by 2 times! ";
            Sleep(3000);
            system("cls");
        }

        else if (a == 0 && b == 0 && c == 0)
        {
            kr += 300;
            cout << "\n\t000 you have +300";
            Sleep(3000);
            system("cls");
        }

        else if (a == 1 && b == 1 && c == 1)  
        {
            kr += 300;
            cout << "\n\t111 you have +300";
            Sleep(3000);
            system("cls");
        }

        else if (a == 2 && b == 2 && c == 2)
        {
            kr += 300;
            cout << "\n\t222 you have +300";
            Sleep(3000);
            system("cls");
        }

        else if (a == 3 && b == 3 && c == 3)
        {
            kr += 300;
            cout << "\n\t333 you have +300";
            Sleep(3000);
            system("cls");
        }

        else if (a == 4 && b == 4 && c == 4)
        {
            kr += 300;
            cout << "\n\t444 you have +300";
            Sleep(3000);
            system("cls");
        }

        else if (a == 5 && b == 5 && c == 5)
        {
            kr += 3000;
            cout << "\n\t555 you have +3000";
            Sleep(3000);
            system("cls");
        }

        else if (a == 5 && b == c && b != 5)
        {
            kr += 100;
            cout << "\n\t5XX you have +100";
            Sleep(3000);
            system("cls");
        }

        else if (a == 5 && b == 5 && c != 5)
        {
            kr += 150;
            cout << "\n\t55X you have +150";
            Sleep(3000);
            system("cls");
        }

        else if (a == 7 && b == c && b != 7)
        {
            kr += 100;
            cout << "\n\t7XX you have +100";
            Sleep(3000);
            system("cls");
        }

        else if (a == 7 && b == 7 && c != 7)
        {
            kr += 150;
            cout << "\n\t77X you have +150";
            Sleep(3000);
            system("cls");
        }

        else if (a == 7 && b == 7 && c == 7)
        {
            kr = 100000;
            break;
        }
      
    } while (kr >= 25);

    cout << (kr < 25 ? "\n\t you have not enough credits for the next turn. You lost!!!\n" : 
        "\n\t 777 You got the jackpot !!! Your prize is 100000!!!\n");
}