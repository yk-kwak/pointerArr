#include <iostream>
using namespace std;

void main() {
	
	/*
	int arr[10];

	cout << "arr 출력 : "<<arr << " / &arr 출력 : " << &arr << " / &arr[0] 출력 : " << &arr[0] << endl;
	*/

	double score[10];
	double *ptr = NULL;
	
	ptr = score;

	cout << score << " / " << &score << " / " << &score[0] << endl;

	for (int i = 0; i < 10; i++) {
		
		// 각 원소의 주소를 찍는다.

		//cout << i << "번째 원소의 주소 = " << ptr + i << endl;
		//cout << "ptr++ " << i << "번째 원소의 주소 = " << ptr++ << endl; 
		//cout << "++ptr "<<i+1 << "번째 원소의 주소 = " << ++ptr << endl; 
		//cout << i << "번째 원소의 주소 = " << score + i << endl;  
		//cout << i << "번째 원소의 주소 = " << &score[i] << endl;  
		//cout << i << "번째 원소의 주소 = " << score++ << endl; // 안됨. score은 배열 명. 바뀔 수 없다. 포인터 상수 역할. 상수를 증가시켜라? 이상한것.
		cout << i << "번째 원소의 주소 = " << &ptr[i] << endl; //ptr은 배열이 아님에도 불구하고 된다.
	}
}