#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tong;
	if(n>2){
		tong=(n+2) + (n*2) + (n*3);
		cout << "tong la: " << tong;
	}
	else{
		cout <<"Khong phai hinh chop";
	}
	return 0;
	
//cach 2

//	return 6*n+2;
}

