// Bai thuc hanh 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Kiem_tra_nam_nhuan(int nam) 
{
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
    {
        return 1;
	}
	else
	{
		return 0;
    }
}

int So_ngay_trong_thang(int thang, int nam)
{
    int ngay;
    switch (thang)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ngay = 31;
			break;
		case 4: case 6: case 9: case 11:
			ngay = 30;
			break;
		case 2:
            if (Kiem_tra_nam_nhuan(nam) == 1)
            {
				ngay = 29;
			}
            else
            {
				ngay = 28;
			}
			break;
    }
    return ngay;
}
int main()
{
    int ngay, thang, nam;
    cout << "Hay nhap ngay thang nam \n";
    cin >> ngay;
    cin >> thang; 
    cin >> nam;
    if (ngay > So_ngay_trong_thang(thang, nam))
    {
        ngay = 1;
        thang++;
        if (thang > 12)
        {
			thang = 1;
			nam++;
		}
    }
    else
    {
        cout << "Ngay thang nam tiep theo la ";
        cout << ngay + 1 << "/" << thang << "/" << nam;
    }
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
