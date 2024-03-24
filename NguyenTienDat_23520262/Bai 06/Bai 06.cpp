// Bai 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
class cSoPhuc
{
private:
    static int iCount;
    float fThuc, fAo;
public:

    cSoPhuc(float x, float y)
    {
        this->fThuc = x;
        this->fAo = y;
    }
    cSoPhuc()
    {
		this->fThuc = 0;
		this->fAo = 0;
	}
    void set()
    {
        cout << "Nhap phan thuc: ";
        cin >> this->fThuc;
        cout << "Nhap phan ao: ";
        cin >> this->fAo;
        cout << endl;
        iCount++;
    }
    ~cSoPhuc()
    {
        iCount--;
    }
    void Change();
    void Get_Value();
    void Get_Complex();
    void Get_Count();
    cSoPhuc Sum(cSoPhuc p2);
    cSoPhuc Sub(cSoPhuc p2);
    cSoPhuc Mul(cSoPhuc p2);
    cSoPhuc Div(cSoPhuc p2);

};
void cSoPhuc::Change()
{
    cout << "\nHay nhap phan thuc: ";
    cin >> this->fThuc;
    cout << "Hay nhap phan ao: ";
    cin >> this->fAo;
}
void cSoPhuc::Get_Value()
{
    cout << "\nSo thuc la: " << this->fThuc;
    cout << "\nSo ao la: " << this->fAo << endl;
}
void cSoPhuc::Get_Complex()
{
	cout << "\nSo phuc la: " << this->fThuc << " + " << this->fAo << "i" << endl;
}
void cSoPhuc::Get_Count()
{
	cout << "So luong so phuc la: " << iCount << endl << endl;
}
cSoPhuc cSoPhuc::Sum(cSoPhuc p2)
{
    cSoPhuc result;
    result.fThuc = this->fThuc + p2.fThuc;
    result.fAo = this->fAo + p2.fAo;
    return result;
}
cSoPhuc cSoPhuc::Sub(cSoPhuc p2)
{
	cSoPhuc result;
	result.fThuc = this->fThuc - p2.fThuc;
	result.fAo = this->fAo - p2.fAo;
	return result;
}
cSoPhuc cSoPhuc::Mul(cSoPhuc p2)
{
	cSoPhuc result;
	result.fThuc = this->fThuc * p2.fThuc - this->fAo * p2.fAo;
	result.fAo = this->fThuc * p2.fAo + this->fAo * p2.fThuc;
	return result;
}
cSoPhuc cSoPhuc::Div(cSoPhuc p2)
{
	cSoPhuc result;
	result.fThuc = (this->fThuc * p2.fThuc + this->fAo * p2.fAo) / (p2.fThuc * p2.fThuc + p2.fAo * p2.fAo);
	result.fAo = (this->fAo * p2.fThuc - this->fThuc * p2.fAo) / (p2.fThuc * p2.fThuc + p2.fAo * p2.fAo);
	return result;
}
int cSoPhuc::iCount = 0;
int main()
{
    cSoPhuc a, b;
    a.set();
    b.set();
    a.Get_Count();
    a.Change();
    b.Change();
    a.Get_Value();
    b.Get_Value();
    a.Get_Complex();
    b.Get_Complex();
    cSoPhuc result = a.Sum(b);
    cout << "Tong 2 so phuc la: ";
    result.Get_Complex();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
