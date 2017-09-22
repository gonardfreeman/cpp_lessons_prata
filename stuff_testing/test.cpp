#include <iostream>
#include <string>

using namespace std;

struct progger {
    int age;
    double sallary;
    string name;
};


int main()
{
    cout << __cplusplus;
    progger dima;
    progger vitalik;

    dima.age = 30;
    dima.sallary = 15000;
    dima.name = "Dima Bondarenko";

    vitalik.age = 28;
    vitalik.sallary = 39000;
    vitalik.name = "Vitaliy Ostapenko";

    cout << dima.name << " age " << dima.age << " sallary " << dima.sallary << endl;

    cout << vitalik.name << " age " << vitalik.age << " sallary " << vitalik.sallary << endl;
    
    return 0;
}
