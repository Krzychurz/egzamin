#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ifstream plik;
    plik.open("mecz.txt");
    string linia;
    int a=0, b=0;
    char znak=NULL;

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
                if(a-b>=3)
                {
                    znak = 'A';
                    break;
                }
                else if(b-a>=3)
                {
                    znak = 'B';
                    break;
                }
            }
        }
    }

    cout << "Odpowiedz: " << znak << ' ' << b << ':' << a << endl;
    plik.close();
    return 0;
}
