#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream plik;
    plik.open("mecz.txt");
    string linia;
    int licznik = 0;

    while(getline(plik, linia))
    {
        for(int i=0; i < linia.size()-1; i++)
        {
            if(linia[i] != linia[i+1])
                licznik++;
        }
    }

    cout << "Odpowiedz: " << licznik << endl;
    plik.close();
    return 0;
}
