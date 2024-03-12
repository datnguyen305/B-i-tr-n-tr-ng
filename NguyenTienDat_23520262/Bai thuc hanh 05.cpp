// Bai thuc hanh 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
typedef struct
{
    string sHo_ten;
    int  iDiem_toan;
    int iDiem_van;
    float fDiem_trung_binh_cua_hoc_sinh;
}SV;

void Input(SV DS[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhap ho ten: ";
        getline(cin, DS[i].sHo_ten);
        cout << "Nhap diem toan: ";
        cin >> DS[i].iDiem_toan;
        cout << "Nhap diem van: ";
        cin >> DS[i].iDiem_van;
        cin.ignore();
    }
}

float Diem_trung_binh_cua_lop(SV DS[], int n)
{
    float fDiem_trung_binh_cua_lop = 0;
    for (int i = 0; i < n; i++) {
        fDiem_trung_binh_cua_lop = fDiem_trung_binh_cua_lop + (float)(DS[i].iDiem_toan + DS[i].iDiem_van) / 2;
    }
    return (fDiem_trung_binh_cua_lop / n);
}

float Diem_trung_binh_cua_hoc_sinh(SV DS[], int n)
{
    for (int i = 0; i < n; i++) {
        return DS[i].fDiem_trung_binh_cua_hoc_sinh = (float)(DS[i].iDiem_toan + DS[i].iDiem_van) / 2;
    }
}

void Kiem_tra_trung_binh_cao_nhat(SV DS[], int n)
{
	float max = DS[0].fDiem_trung_binh_cua_hoc_sinh;
    for (int i = 1; i < n; i++) {
        if (DS[i].fDiem_trung_binh_cua_hoc_sinh > max) {
			max = DS[i].fDiem_trung_binh_cua_hoc_sinh;
		}
	}
	cout << "Diem trung binh cao nhat la: " << max <<endl;
}

void Kiem_tra_trung_binh_thap_hon_diem_trung_binh_cua_lop(SV DS[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (DS[i].fDiem_trung_binh_cua_hoc_sinh < Diem_trung_binh_cua_lop(DS ,n))
        {
			cout << "Hoc sinh co diem trung binh thap hon diem trung binh cua lop la: " << DS[i].sHo_ten << endl;
		}
    }
}
int main()
{
    SV DS[50];
    int n;
    cout << "Hay nhap so luong hoc sinh ";
    cin >> n;
    cin.ignore();
    Input(DS, n);
    Diem_trung_binh_cua_hoc_sinh(DS, n);
    Kiem_tra_trung_binh_cao_nhat(DS, n);
    Kiem_tra_trung_binh_thap_hon_diem_trung_binh_cua_lop(DS, n);
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
