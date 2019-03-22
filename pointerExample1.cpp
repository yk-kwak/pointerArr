#include <iostream>
using namespace std;

void main() {
	int i, j, k;

	/*
	double d1,d2;
	cout << " i의 주소 : "<<&i << ", j의 주소 : " << &j << ", k의 주소 : " << &k << ", d1의 주소 : " << &d1 << ", d2의 주소 : " << &d2 << endl;
	
	// 초기화 안한 상태 찍어보기
	//cout << i << "/" << j << "/" << k << endl;
	*/

	int *ptr;
	ptr = &i;
	*ptr = 10;

	j = *ptr + 10;
	

	cout << "i의 값 = " << i << endl;
	cout << "j의 값 = " << j << endl;


}