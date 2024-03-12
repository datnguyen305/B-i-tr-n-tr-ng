// Bai thuc hanh 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

typedef struct  
{
    int iTuso;
    int iMauso;
}PS;



void Nhap_phan_so(PS DS[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhap tu so: ";
		cin >> DS[i].iTuso;
		cout << "Nhap mau so: ";
        cin >> DS[i].iMauso;
    }
}

int Tim_uoc_chung_lon_nhat(int a, int b)
{
	while (a * b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return a + b;
}

PS Rut_gon_phan_so(PS p1)
{
	PS kq;
	int ucln = Tim_uoc_chung_lon_nhat(p1.iTuso, p1.iMauso);
	kq.iTuso = p1.iTuso / ucln;
	kq.iMauso = p1.iMauso / ucln;
	return kq;
}

PS Tinh_Tong(PS p1, PS p2)
{
	PS kq;
	kq.iTuso = p1.iTuso * p2.iMauso + p2.iTuso * p1.iMauso;
	kq.iMauso = p1.iMauso * p2.iMauso;
	return Rut_gon_phan_so(kq);
}

PS Tinh_Hieu(PS p1, PS p2)
{
	PS kq;
	kq.iTuso = p1.iTuso * p2.iMauso - p2.iTuso * p1.iMauso;
	kq.iMauso = p1.iMauso * p2.iMauso;
	return Rut_gon_phan_so(kq);
}

PS Nhan_phan_so(PS p1, PS p2)
{
	PS kq;
	kq.iTuso = p1.iTuso * p2.iTuso;
	kq.iMauso = p1.iMauso * p2.iMauso;
	return Rut_gon_phan_so(kq);
}

PS Chia_phan_so(PS p1, PS p2)
{
	PS kq;
	kq.iTuso = p1.iTuso * p2.iMauso;
	kq.iMauso = p1.iMauso * p2.iTuso;
	return Rut_gon_phan_so(kq);
}

void Output(PS p)
{
	cout << p.iTuso << "/" << p.iMauso;
}

PS phan_so_lon_nhat(PS p1, PS p2)   
{
    PS kq1, kq2;
	kq1.iTuso = p1.iTuso * p2.iMauso;
	kq2.iTuso = p1.iMauso * p2.iTuso;
    if (kq1.iTuso > kq2.iTuso)
    {
		return p1;
	}
    else
    {
		return p2;
	}
}


int main()
{
    PS DS[2];
	Nhap_phan_so(DS, 2);
	cout << "Tong 2 phan so: ";
	Output(Tinh_Tong(DS[0],DS[1]));
	cout<<"\nHieu 2 phan so: ";
	Output(Tinh_Hieu(DS[0], DS[1]));
	cout<< "\nTich 2 phan so: ";
	Output(Nhan_phan_so(DS[0], DS[1]));
	cout << "\nThuong 2 phan so: ";
	Output(Chia_phan_so(DS[0], DS[1]));
	return 0;
	
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
