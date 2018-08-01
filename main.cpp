#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "(a * x²) + (b * x) + c = 0" << endl;
    bool inputOk = true;
    float a = 1.0;
    float b = 0.0;
    float c = 0.0;
    string tentativeString = "";

    do
    {
        cout << "a ?" << endl;
        inputOk = true; // Pour autre demande éventuelle.
        try
        {
            // cin >> a;
            getline(cin, tentativeString); // Pour éviter des bugs de non nombre.
            a = stoi(tentativeString);
        }
        catch (const std::invalid_argument& e)
        {
            cerr << "Un nombre, svp !" << endl;
            inputOk = false;
        }
        if (a == 0)
        {
            a = 1;
            cerr << "Un nombre non nul, svp !" << endl;
            inputOk = false;
        }
    }
    while (inputOk == false);

    do
    {
        cout << "b ?" << endl;
        inputOk = true; // Pour autre demande éventuelle.
        try
        {
            // cin >> b;
            getline(cin, tentativeString); // Pour éviter des bugs de non nombre.
            b = stoi(tentativeString);
        }
        catch (const std::invalid_argument& e)
        {
            cerr << "Un nombre, svp !" << endl;
            inputOk = false;
        }
    }
    while (inputOk == false);
    do
    {
        cout << "c ?" << endl;
        inputOk = true; // Pour autre demande éventuelle.
        try
        {
            // cin >> c;
            getline(cin, tentativeString); // Pour éviter des bugs de non nombre.
            c = stoi(tentativeString);
        }
        catch (const std::invalid_argument& e)
        {
            cerr << "Un nombre, svp !" << endl;
            inputOk = false;
        }
    }
    while (inputOk == false);

    double discriminant = (b*b) -(4 * a * c);
    if (discriminant == 0)
    {
        cout << "X1 = X2 = " << -b/(2*a) << endl;
    }

    if (discriminant < 0)
    {
        cout << "Pas de solution réelle !" << endl;
    }

    if (discriminant > 0)
    {
        cout << "X1 = " <<  ((-sqrt(discriminant))-b)/(2*a) << endl;
        cout << "X2 = " <<  ((sqrt(discriminant))-b)/(2*a) << endl;
    }
    return 0;
}
