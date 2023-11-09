#include <iostream>
using namespace std;
int main()
{
    int number;
    bool tablica[100000];
    //zerowanie
    for(int i = 2; i < 100000; i++)
            tablica[i] = false;
    //sito
    for(int i = 2; i < 100000; i++)    
            for(int l = i+1; l < 100000; l++)
                    if(l % i == 0)
                    {
                         tablica[l] = true;
                    }
    //sumy
    for(int i =0; i<100000; i++)
    {
        if(tablica[i] = true)
        {
            for(int l = i; l<100000; l++)
            {
                if(tablica[l] == true)
                {
                    if(i + l == number)
                    {
                        cout<<i<<" + "<<l<<endl;
                    }
                }
            }
        }
    }
     system("pause");
     return 0;
}