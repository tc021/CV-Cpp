#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    std::string p;
    bool test = false;
    bool inCorrect;
    string temp;
    string months[12] = {"Stycznia","Lutego","Marca", "Kwietnia", "Maja", "Czerwca", "Lipca", "Sierpnia", "Września", "Października", "Listopada", "Grudnia"};


    do {
             int temp2 =0;
    temp ="";
        cout << "Podaj numer pesel" << "\n";
        cin >> p;

        for (int i = 0; i < p.length(); i++){
            if((int)p[i] >47 && (int)p[i]<58){
                inCorrect = false;

            }
            else {
                inCorrect = true;
                break;
            }

        }

        for (int i = 4; i<6;i++){
            temp += p[i];
        }
        temp2 = atoi(temp.c_str());

        if (p.length() < 11){
            cout << "Pesel zbyt krótki" << endl;
            test = false;
        }
        else if (p.length() > 11)
        {
            cout << "Pesel zbyt d³ugo" << endl;
            test = false;
        }
        else if(inCorrect == true){
            cout << "Pesel zawiera niepoprawne znaki" << endl;

            test = false;
        }
        else if(temp2>31){
                cout << temp2 << endl;
            cout << "Nie poprawny pesel" << endl;
            test = false;
        }
        else {
            cout << "Pesel poprawny" << endl;
            test = true;
        }
    }while(test == false);

    for (int i = 0; i <2; i++){
        temp += p[i];
    }
    int y = atoi(temp.c_str());

    /*for(int i = 0; i < (sizeof(months)/sizeof(*months));i++){
        cout << months[i] << endl;
    }*/



}
