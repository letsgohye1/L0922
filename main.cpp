#include <iostream>
using namespace std;

int main() {
	int Num = 0;
	int OneToHundreadSum = 0;
	int MultipleSum = 0;
	
	for (int j = 0; j < 100; j++)
	{
		Num = Num + 1;
		OneToHundreadSum = OneToHundreadSum + Num;

		if (Num % 3 == 0) {
			MultipleSum = MultipleSum + Num;
		}
	}

	cout << "1���� 100������ ��: " << OneToHundreadSum << endl;
	cout << "1���� 100������ 3�� ����� ��: " << MultipleSum << endl;
}

