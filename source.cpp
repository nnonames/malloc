#include <iostream>

using namespace std;

int main() {
	int arrsize = 0;
	int answer = 0;
	int intsum = 0;
	double doublesum = 0;

	cout << "\tchar, int, double �� �ϳ��� �ڷ����� �����ϼ���... >> : " << endl;
	cout << "\tchar = 1\t" << "int = 2\t" << "double = 3" << endl;
	cin >> answer;

	if (answer == 1) {
		char *chararr;
		cout << "char�� �迭�� ����ϴ�." << endl;
		cout << "�迭�� ����� �����ּ���... >> : " << endl;
		cin >> arrsize;

		chararr = (char*) malloc(sizeof(char) * arrsize);
		cout << "�迭�� ����� �����ּ���... >> : " << endl;
		free(chararr);

	}
	else if (answer == 2) {
		int *intarr;
		cout << "int�� �迭�� ����ϴ�." << endl;
		cout << "�迭�� ����� �����ּ���... >> : ";
		cin >> arrsize;

		intarr = (int *)malloc(sizeof(int) * arrsize);
		cout << "�Է��� ������ ������ �Է��ϼ���... >> : ";

		for (int i = 0; ; i++) {
			if (i == arrsize) { intarr[i] == '\0'; break; }
			cout << endl << i << "��° ������ �Է��ϼ���... >> : ";
			cin >> intarr[i];
		}

		for (int i = 0; ; i++) {
			if (i == arrsize) { break; }
			cout << intsum << " + " << intarr[i] << " = ";
			intsum = intsum + intarr[i];
			cout << intsum << endl;
		}
		cout << "�Էµ� ������ ���� " << intsum << "�Դϴ�." << endl;
		free(intarr);

	}
	else if (answer == 3) {
		double *doublearr;
		cout << "double�� �迭�� ����ϴ�." << endl;
		cout << "�迭�� ����� �����ּ���... >> :";
		cin >> arrsize;

		doublearr = (double *)malloc(sizeof(double) * arrsize);
		cout << "�迭�� ����� �����ּ���... >> : ";

		for (int i = 0; ; i++) {
			if (i == arrsize) { doublearr[i] == '\0'; break; }
			cout << endl << i << "��° �Ǽ��� �Է��ϼ���... >> : ";
			cin >> doublearr[i];
		}

		for (int i = 0; ; i++) {
			if (i == arrsize) { break; }
			cout << doublesum << " + " << doublearr[i] << " = ";
			doublesum = doublesum + doublearr[i];
			cout << doublesum << endl;
		}
		cout << "�Էµ� �Ǽ��� ���� " << doublesum << "�Դϴ�." << endl;
		free(doublearr);
	}

}