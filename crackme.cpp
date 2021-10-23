#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int create_file(string dfkj184, const int bvjsvb945)
{
    int kldkgs_kslvkd = dfkj184.length();
    int lpkoyjjkyoy;
    int fklnglfk050 = 0;
    int i;
    for (i = 0; i < kldkgs_kslvkd; i++)
    {
        lpkoyjjkyoy = (int) (char) dfkj184[i];
        fklnglfk050 += lpkoyjjkyoy;
        fklnglfk050 = fklnglfk050 % bvjsvb945;
    }
    return fklnglfk050;
}


int close_file(string nd134k1, const int f3b14h32)
{
    int adlks222 = nd134k1.length();
    int abdbad333 = 1;
    int mkmnkhmk994;
    bool nnfsdfsa = true;
AGAIN:
    for (int i = 0; i < adlks222; i++)
    {
        mkmnkhmk994 = (int) (char) nd134k1[i];
        abdbad333 = abdbad333 * mkmnkhmk994 % 10;
    }
    if (nnfsdfsa)
    {
        nnfsdfsa = false;
        goto AGAIN;
    }
    return adlks222 || abdbad333;
}


int main()
{
    const int kvofof9ff33 = 100;
    string login;
    cout << "Please, enter login: ";
    getline(cin, login);
    int key;
    cout << "Please, enter key: ";
    cin >> key;
    if (create_file(login, kvofof9ff33) * close_file(login, kvofof9ff33) == key)
    {
        cout << "Access is allowed. Success!" << "\n";
    }
    else
    {
        cout << "Access is denied." << "\n";
    }
    return 0;
}
