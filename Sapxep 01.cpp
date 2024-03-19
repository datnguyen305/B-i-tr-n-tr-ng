// Sapxep 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
/*void selectionSort1(int arr[], int n)
{
    int i, j, min_idx, vi_tri_khong_am;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            vi_tri_khong_am = i;
        }
    }

    for (int i = vi_tri_khong_am; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
				swap(arr[i], arr[j]);
			}
		}
    }
}*/
/*void selectionSort2(int arr[], int n)
{
    int i, j, min_idx, vi_tri_am;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            vi_tri_am= i;
        }
    }
    
    for (int i = vi_tri_am; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j] && arr[j] < 0)
            {
				swap(arr[i], arr[j]);
			}
		}
	}
}*/
/*void selectionSort3(int arr[], int n)
{
    int i, j, min_idx, vi_tri_khong_am;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
			vi_tri_khong_am = i;
            break;
		}
    }

    for (int i = vi_tri_khong_am; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j] && arr[j] >= 0)
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void Xuat_mang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}*/
/*void selectionSort4(int arr[], int n)
{
	int i, j, min_idx, vi_tri_am;
    for (i = 0; i < n - 1; i++)
    {
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] > arr[min_idx])
				min_idx = j;
		swap(arr[min_idx], arr[i]);
	}

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
			vi_tri_am = i;
			break;
		}
	}

    for (int i = vi_tri_am; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j] && arr[j] <= 0)
            {
				swap(arr[i], arr[j]);
			}
		}
    }
    

}*/
void selectionSort5(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[i] < 0 && arr[j] < 0)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            swap(arr[min_idx], arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[i] > 0 && arr[j] > 0)
                if (arr[j] > arr[min_idx])
                    min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}

void Xuat_mang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, -6, 7, 8, 9, -1, -2, -3, -4, -5, 6, -7, -8, -9};
    clock_t start, end;
    start = clock();
    selectionSort5(arr, 18);
    Xuat_mang(arr, 18);
    cout << endl;
    end = clock();
    cout << "Time: " << (double)(end - start) / CLOCKS_PER_SEC << "s" << endl;
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
