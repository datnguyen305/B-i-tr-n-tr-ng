#include <iostream>
#include <string>
using namespace std;
class cSinhvien {
private:
    string HoTen;
    double Dtoan;
    double Dvan;
public:
    void set(double diemtoan, double diemvan, string ten);
    void output();
    double diemtrungbinh();
    void xephang();
};

void cSinhvien::set(double diemtoan, double diemvan, string ten) {
    HoTen = ten;
    Dtoan = diemtoan;
    Dvan = diemvan;
}

void cSinhvien::output() {
    cout << "Ho va Ten cua sinh vien la " << HoTen << endl;
    cout << "Diem toan cua sinh vien la " << Dtoan << endl;
    cout << "Diem van cua sinh vien la " << Dvan;
}

double cSinhvien::diemtrungbinh() {
    double result;
    result = (Dtoan + Dvan) / 2;
    return result;
}

void cSinhvien::xephang() {
    if (diemtrungbinh() <= 5) cout << "Hoc sinh xep hang yeu ";
    else
        if (diemtrungbinh() > 5 && diemtrungbinh() < 8) cout << "Hoc sinh xep hang trung binh ";
        else cout << "Hoc sinh xep hang gioi ";
}

int main()
{
    cSinhvien SV;
    string ten;
    double diemvan, diemtoan;
    cout << "Hay nhap Ten, Diem toan, Diem van cua sinh vien\n";
    getline(cin, ten);
    cin >> diemvan >> diemtoan;
    SV.set(diemtoan, diemvan, ten);
    SV.output();
    cout <<endl << "Diem trung binh la ";
    cout << SV.diemtrungbinh()<< endl;
    SV.xephang();
    
}




