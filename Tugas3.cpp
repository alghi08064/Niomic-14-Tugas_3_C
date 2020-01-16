#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
	int a = 10;
	int b = 20;
	int c;
	c = a*b;
    setcolor(5);
	cout<<"Nilai Awal A : "<<a<<endl;
	setcolor(3);
	cout<<"Nilai Awal B : "<<b<<endl;
	cout<<"Hasil Perkalian Kedua Variabel adalah : "<<c<<endl;
    return 0;
}
