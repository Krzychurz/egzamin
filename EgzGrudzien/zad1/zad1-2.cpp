#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main1()
{
    ifstream plik;
    plik.open("mecz_przyklad.txt");
    string linia;
    int a=0, b=0;

    while(getline(plik,linia))
    {
        for(int i=0;i<linia.size();i++)
        {
            if(linia[i] == 'A')
                a++;
            else if(linia[i] == 'B')
                b++;
            if(a >= 1000 || b >= 1000)
            {
                if(abs(a-b)>3)
                    break;
            }
        }
    }

    char druzyna = (a>b) ? 'A' : 'B';


    cout << "Odpowiedz: " << licznik << endl;
    plik.close();
    return 0;
}
