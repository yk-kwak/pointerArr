#include <iostream>
using namespace std;

void main() {

	/*
	int arr[10];

	cout << "arr 출력 : "<<arr << " / &arr 출력 : " << &arr << " / &arr[0] 출력 : " << &arr[0] << endl;
	*/

	double score[10] = {};
	double *ptr = NULL;

	ptr = score;

	cout << score << " / " << &score << " / " << &score[0] << endl;

	for (int i = 0; i < 10; i++) {

		
		//cout << i << "번째 원소의 주소 = " << &score[i] <<" / "<< score + i << endl;  //초기화를 시키지 않아서 이상한 값이 나옴
		//cout << i << "번째 원소의 값 = " << score[i] << endl;
		//cout << i << "번째 원소의 값 = " << *(score + i) << endl;
		//cout << i << "번째 원소의 값 = " << *(&score[i]) << endl; //*랑 &랑 상쇄됨
		cout << i << "번째 원소의 값 = " << *score + i << endl; //괄호의 위치다름. *score = 원소값. 배열의 시작주소에 있는 값

		//score = ptr; //왼쪽에 있으면 에러. score은 바뀔 내용이 아니다.
	}
}