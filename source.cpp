#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

float tich(int a, int b);

int tong(int a, int b){
	return a + b;
}
int hieu(int a, int b){
	return a - b;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;

	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;

	cout << "Chon phep toan (+,-,*,/) ";
	cin >> phepToan;
	int total = tong(a,b);
	int minuts = hieu(a,b);

	
	switch(phepToan){
		case "+":
			cout<<"Total = "<<total<<endl;
			break;
		case "-":
			cout<<"Minuts = "<<minuts<<endl;
			break;
		
	}
	
	system("pause");
	return 0;
}