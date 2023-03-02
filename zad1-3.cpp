#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    plik.open("mecz.txt");
    string linia;
    int passa=0;
    int razem=0;
    int maks=10;
    char znak='A';
    char zwyciesca='A';

    while(getline(plik,linia))
    {
        for(int i=0;i<linia.size();i++)
        {
            if(znak != linia[i])
            {
                if(passa>=10)
                {
                    razem++;
                    if(passa>maks)
                    {
                        zwyciesca = znak;
                        maks=passa;
                    }
                }

                passa=0;
                znak=linia[i];
            }
            if(znak == linia[i])
            {
                passa++;
            }
        }
    }

    cout << "Odpowiedz: " << razem << ' ' << zwyciesca << ' ' << maks << endl;
    plik.close();
    return 0;
}
