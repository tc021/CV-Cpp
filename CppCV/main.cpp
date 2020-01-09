#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    std::string p;
    bool test = false;
    bool inCorrect;
    string temp;
    string strMonth = "";
    string strYear = "";
    string strDay = "";
    string strPPPP = "";
    string gender = "";
    int month = 0;
    int year = 0;
    int day = 0;
    int PPPP = 0;
    string months[12] = {"Stycznia","Lutego","Marca", "Kwietnia", "Maja", "Czerwca", "Lipca", "Sierpnia", "Wrzesnia", "Pazdziernika", "Listopada", "Grudnia"};



    do {
        day = 0;
        strDay ="";
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
            strDay += p[i];
        }

        day = atoi(strDay.c_str());

        if (p.length() < 11){
            cout << "Pesel zbyt krotki" << endl;
            test = false;
        }
        else if (p.length() > 11)
        {
            cout << "Pesel zbyt dlugi" << endl;
            test = false;
        }
        else if(inCorrect == true){
            cout << "Pesel zawiera niepoprawne znaki" << endl;

            test = false;
        }
        else if(day>31){
            cout << "Nie poprawny pesel" << endl;
            test = false;
        }
        else {
            test = true;
        }
    }while(test == false);



    for (int i = 0; i <2; i++){
        strYear += p[i];
    }


    for (int i =2;i<4; i++){
        strMonth += p[i];
    }
    month = atoi(strMonth.c_str());

    for (int i=6;i<10;i++){
        strPPPP += p[i];
    }
    PPPP = atoi(strPPPP.c_str());

    if (PPPP%2 == 0){
        gender = "kobieta";
    }
    else {
        gender = "mezczyzna";
    }

    if (month >= 81 && month <= 92){
        strYear = "18"+strYear;
    }
    else if (month >= 1 && month <= 12){
        strYear = "19"+strYear;
    }
    else if (month >= 21 && month <= 32){
        strYear = "20"+strYear;
    }
    else if(month >= 41 && month <= 52){
        strYear = "21"+strYear;
    }
    else if (month >= 61 && month <= 72){
        strYear = "22"+strYear;
    }
    year = atoi(strYear.c_str());

    if (month == 81 || month == 1 || month == 21 || month == 41 || month == 61){
        strMonth = months[0];
    }
    else if (month == 82 || month == 2 || month == 22 || month == 42 || month == 62){
        strMonth = months[1];
    }
    else if (month == 83 || month == 3  || month == 23 || month == 43 || month == 63)
    {
        strMonth = months[2];
    }
    else if (month == 84 || month == 4 || month == 24 || month == 44 || month == 64)
    {
        strMonth = months[3];
    }
    else if(month == 85 || month == 5 || month == 25 || month == 45 || month == 65)
    {
        strMonth = months[4];
    }
    else if(month == 86 || month == 6 || month == 26 || month == 46 || month == 66)
    {
        strMonth = months[5];
    }
    else if(month == 87 || month == 7 || month == 27 || month == 47 || month == 67)
    {
        strMonth = months[6];
    }
    else if(month == 88 || month == 8 || month == 28 || month == 48 || month == 68)
    {
        strMonth = months[7];
    }
    else if(month == 89 || month == 9 || month == 29 || month == 49 || month == 69)
    {
        strMonth = months[8];
    }
    else if(month == 90 || month == 10 || month == 30 || month == 50 || month == 70)
    {
        strMonth = months[9];
    }
    else if(month == 91 || month == 11 || month == 31 || month == 51 || month == 71)
    {
        strMonth = months[10];
    }
    else if(month == 92 || month == 12 || month == 32 || month == 52 || month == 72)
    {
        strMonth = months[11];
    }

    cout << "Urodziles sie " << day << " " << strMonth << " " << year <<". Oraz Twoja plec to: " << gender << endl;

    return 0;

}
