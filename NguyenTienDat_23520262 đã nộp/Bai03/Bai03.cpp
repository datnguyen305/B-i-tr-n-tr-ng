#include <iostream>
#include <cmath>
using namespace std;
class cHinhtron {
private:
    double r;
    double x;
    double y;
public:
    void set(double sx, double sy, double sr);
    void output();
    double dientich();
    double chuvi();
};

void cHinhtron::set(double sx, double sy, double sr) {
    x = sx;
    y = sy;
    r = sr;
}

void cHinhtron::output() {
    cout << "Toa do tam hinh tron la ";
    cout << "(" << x << ", " << y << ")";
    cout << "\nBan kinh hinh tron la " << r << endl;
}
double cHinhtron::chuvi() {
    double S;
    S = 3.14 * 2 * r;
    return S;
}

double cHinhtron::dientich() {
    double S;
    S = 3.14 * pow(r, 2);
    return S;
}
int main()
{
    cHinhtron H1;
    double sx, sy, sr;
    cout << "Hay nhap toa do hinh tron va ban kinh " << endl;
    cin >> sx >> sy >> sr;
    H1.set(sx, sy, sr);
    H1.output();
    cout << "Dien tich hinh tron la ";
    cout << H1.dientich() << endl;
    cout << "Dien chu vi hinh tron la ";
    cout << H1.chuvi() << endl;
}
