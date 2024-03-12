#include <iostream>
using namespace std;

class cPhanso {
private:
    double TUSO, MAUSO;
public:
    void input(double inTUSO, double inMAUSO);
    void output();
    double giatriphanso();
    friend cPhanso operator+(cPhanso P1, cPhanso P2);
};

void cPhanso::input(double inTUSO, double inMAUSO) {
    TUSO = inTUSO;
    MAUSO = inMAUSO;
}

void cPhanso::output() {
    cout << TUSO << "/" << MAUSO;
}

double cPhanso::giatriphanso() {
    return (double)TUSO / MAUSO;
}

cPhanso operator+(cPhanso P1, cPhanso P2) {
    cPhanso result;
    result.TUSO = P1.TUSO * P2.MAUSO + P1.MAUSO * P2.TUSO;
    result.MAUSO = P1.MAUSO * P2.TUSO;
    return result;
}

int main()
{
    cPhanso P1, P2, result;
    double Tu, Mau;
    cout << "Hay nhap Tu So va Mau So cho 2 phan so\n";
    cin >> Tu >> Mau;
    P1.input(Tu, Mau);
    cin >> Tu >> Mau;
    P2.input(Tu, Mau);
    P1.output();
    cout << "\n";
    P2.output();
    cout << "\n";
    cout << "Gia tri cua phan so P1 la " << P1.giatriphanso();
    cout << "\nGia tri cua phan so P2 la " << P2.giatriphanso();
    result = P1 + P2;
    cout << "\n";
    cout << "Tong 2 phan so la ";
    result.output();
}

