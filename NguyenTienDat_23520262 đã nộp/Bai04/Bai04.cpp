#include <iostream>
#include <cmath>
using namespace std;
class cMatphang {
private:
    double x;
    double y;
public:
    void set(double sx, double sy);
    void output();
    double tinhkhoangcach(cMatphang H1, cMatphang H2);
};

void cMatphang::set(double sx, double sy) {
    x = sx;
    y = sy;
}

void cMatphang::output() {
    cout << "toa do x la " << x << endl;
    cout << "toa do y la " << y << endl;
}

double cMatphang::tinhkhoangcach(cMatphang H1, cMatphang H2) {
    double result;
    result = sqrt(pow(H2.x - H1.x, 2) + pow(H2.y - H1.y, 2));
    return result;
}
int main()
{
    cMatphang H1, H2;
    double x, y;
    cout << "Hay nhap toa do cua mat phang 1\n";
    cin >> x >> y;
    H1.set(x, y);
    cout << "Hay nhap toa do cua mat phang 2\n";
    cin >> x >> y;
    H2.set(x, y);
    cout << "\nHinh 1 \n";
    H1.output();
    cout << "\nHinh 2 \n";
    H2.output();
    cout << "\nKhoang cach giua 2 mat phang la ";
    cout << H1.tinhkhoangcach(H1, H2)<<endl;

}
