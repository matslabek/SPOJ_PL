#include <iostream>

using namespace std;

//poniewaz interesuje nas jedynie liczba jednosci kazdy przypadek
//dla 0<x<9 rozwazam osobno i zauwazam ze wyniki powtarzaja sie wraz z wykladnikiem
//potegi w zaleznosci od x: co 1(x={0,1,5,6}) 2(x={4,9}) albo 4 (x={2,3,7,8}) razy.
//Stad dzielenie wykladnika z reszta przez 4 albo 2.
//zwykle rozwiazanie potegi rekurencyjnie nie dziela ze wzgledu na wielkie dane na wejsciu

int potegowanie(int x, int y)
{
    int z=y%4;
    int v=y%2;
    if (y==0)
        return 1;
    else
    {
        x=x%10;//interesuje nas tylko cyfra jednosci
        switch (x)
        {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            switch (z)
            {
            case 0:
                return 6;
            case 1:
                return 2;//bo 2^1, 2^5, 2^9 itd. zwrócą cyfrę jednosci 2.
            case 2:
                return 4;
            case 3:
                return 8;
            }
        case 3:
            switch(z)
            {
            case 0:
                return 1;
            case 1:
                return 3;
            case 2:
                return 9;
            case 3:
                return 7;
            }
            break;
        case 4:
            switch(v)
            {
            case 0:
                return 6;
            case 1:
                return 4;
            }
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            switch (z)
            {
            case 0:
                return 1;
            case 1:
                return 7;
            case 2:
                return 9;
            case 3:
                return 3;
            }
        case 8:
            switch (z)
            {
            case 0:
                return 6;
            case 1:
                return 8;
            case 2:
                return 4;
            case 3:
                return 2;
            }
        case 9:
            switch(v)
            {
            case 0:
                return 1;
            case 1:
                return 9;
            }
        }
    }
}

    int main()
    {
        int a, b;
        int d;
        cin>>d;
        for (int i=1; i<=d; i++)
        {
            cin>>a>>b;
            cout<<potegowanie(a,b)<<endl;
        }
        return 0;
    }
