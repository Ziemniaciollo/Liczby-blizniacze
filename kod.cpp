#include <iostream>
using namespace std;
int main()
{
    int a,b,wynik;
    cout<<"Podaj dolny przedzial: \n";
    cin>>a;
    cout << "Podaj gorny przedzial: \n";
    cin >> b;
    b++;
    bool tablica[b];
    //zerowanie
    for(int i = 2; i < b; i++)
            tablica[i] = true;
    //sito
    for(int i = 2; i < b; i++)    
            for(int l = i+1; l < b; l++)
                    if(l % i == 0)
                    {
                         tablica[l] = false;
                    }
    //blizniaki
    for(int i = a; i < b;i++)
            for(int l = a;l < b; l++)
                    if(tablica[i] == true && tablica[l] == true)
                                  if(i - l == 2)
                                        wynik++;
    cout<<wynik;
     system("pause");
     return 0;
}