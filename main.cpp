#include <iostream>
using namespace std;

int main() {
	int Num = 0;
	int Sum = 0;
	int MultipleSum = 0;
	
	for (int j = 0; j < 100; j++)
	{
		Num = Num + 1;
		Sum = Sum + Num;

		if (Num % 3 == 0) {
			MultipleSum = MultipleSum + Num;
		}
	}

	cout << "1���� 100������ ��: " << Sum << endl;
	cout << "1���� 100������ 3�� ����� ��: " << MultipleSum << endl;
}

