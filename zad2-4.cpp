#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool funkcja(int mini,int maks)
{
    while(maks>mini)
    {
        if(maks%2!=0)
            maks-=1;
        maks/=2;
    }
    if(maks==mini)
        return true;
    else
        return false;
}

int main()
{
    ifstream plik("pary.txt");
    string linia;
    string a,b;
    int lewy, prawy;
    int i;

    while(getline(plik,linia))
    {
        a="",b="";
        i=0;
        while(linia[i]!=' ')
        {
            a += linia[i];
            i++;
        }
        i++;
        while(i<linia.size())
        {
            b += linia[i];
            i++;
        }

        if(funkcja(stoi(a),stoi(b)))
            cout << a << " " << b << endl;
    }

    plik.close();
    return 0;
}
