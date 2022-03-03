#include <iostream>

using namespace std;

string saisirPhrase(string p)
{
    cout << "Saisez la phrase, svp?" << endl;
    getline (cin, p);
    return p;
}

string mettreEnMajuscule(string p)
{
    for (int i = 0; i < p.length(); i++)
{
p[i] = toupper(p[i]);
}
    return p;
}

void remplirTableauFrequence(string p, int f[])
{
    for (int i = 0; i < 25; i++)
{
f[i] = 0;
}
for (int i = 0; i < p.length(); i++)
{
    f[int(p[i])-65] = f[int(p[i])-65]+1;
}
}

bool estPangramme(string p, int f[])
{
    int sumFre = 0;
    for (int i = 0; i < 25; i++)
    {
        if(f[i] == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    string p;
    p = saisirPhrase(p);
    cout<<p << endl;
    p = mettreEnMajuscule(p);
    cout<<p << endl;
    int f[25];
    remplirTableauFrequence(p,f);
    if(estPangramme(p,f)){
        cout<<"est un pangramme";
    }else{
        cout<<"pas un pangramme";
    }
    return 0;
}
