#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long long a;
	long long N;
	long long s=1;
	long long c=0;
	do{
		cout << "Nhap  stn: ";
		cin >> a;
	}while(a>100);
	cout <<"Nhap st2: ";
	cin >> N;
	c=N%4;
	if(c!=0){
		for(int i=0;i<c;i++){
			s*=a;
		}
	}
	else{
		s=pow(a,4);
	}
	cout <<s%10;
	return 0;
}
