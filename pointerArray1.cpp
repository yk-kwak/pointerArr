#include <iostream>
using namespace std;

void main() {
	
	/*
	int arr[10];

	cout << "arr ��� : "<<arr << " / &arr ��� : " << &arr << " / &arr[0] ��� : " << &arr[0] << endl;
	*/

	double score[10];
	double *ptr = NULL;
	
	ptr = score;

	cout << score << " / " << &score << " / " << &score[0] << endl;

	for (int i = 0; i < 10; i++) {
		
		// �� ������ �ּҸ� ��´�.

		//cout << i << "��° ������ �ּ� = " << ptr + i << endl;
		//cout << "ptr++ " << i << "��° ������ �ּ� = " << ptr++ << endl; 
		//cout << "++ptr "<<i+1 << "��° ������ �ּ� = " << ++ptr << endl; 
		//cout << i << "��° ������ �ּ� = " << score + i << endl;  
		//cout << i << "��° ������ �ּ� = " << &score[i] << endl;  
		//cout << i << "��° ������ �ּ� = " << score++ << endl; // �ȵ�. score�� �迭 ��. �ٲ� �� ����. ������ ��� ����. ����� �������Ѷ�? �̻��Ѱ�.
		cout << i << "��° ������ �ּ� = " << &ptr[i] << endl; //ptr�� �迭�� �ƴԿ��� �ұ��ϰ� �ȴ�.
	}
}