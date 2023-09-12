#include <iostream>

using namespace std;

int main() {
	int arrsize = 0;
	int answer = 0;
	int intsum = 0;
	double doublesum = 0;

	cout << "\tchar, int, double 중 하나의 자료형을 선택하세요... >> : " << endl;
	cout << "\tchar = 1\t" << "int = 2\t" << "double = 3" << endl;
	cin >> answer;

	if (answer == 1) {
		char *chararr;
		cout << "char형 배열을 만듭니다." << endl;
		cout << "배열의 사이즈를 정해주세요... >> : " << endl;
		cin >> arrsize;

		chararr = (char*) malloc(sizeof(char) * arrsize);
		cout << "배열의 사이즈를 정해주세요... >> : " << endl;
		free(chararr);

	}
	else if (answer == 2) {
		int *intarr;
		cout << "int형 배열을 만듭니다." << endl;
		cout << "배열의 사이즈를 정해주세요... >> : ";
		cin >> arrsize;

		intarr = (int *)malloc(sizeof(int) * arrsize);
		cout << "입력할 정수의 개수를 입력하세요... >> : ";

		for (int i = 0; ; i++) {
			if (i == arrsize) { intarr[i] == '\0'; break; }
			cout << endl << i << "번째 정수를 입력하세요... >> : ";
			cin >> intarr[i];
		}

		for (int i = 0; ; i++) {
			if (i == arrsize) { break; }
			cout << intsum << " + " << intarr[i] << " = ";
			intsum = intsum + intarr[i];
			cout << intsum << endl;
		}
		cout << "입력된 정수의 합은 " << intsum << "입니다." << endl;
		free(intarr);

	}
	else if (answer == 3) {
		double *doublearr;
		cout << "double형 배열을 만듭니다." << endl;
		cout << "배열의 사이즈를 정해주세요... >> :";
		cin >> arrsize;

		doublearr = (double *)malloc(sizeof(double) * arrsize);
		cout << "배열의 사이즈를 정해주세요... >> : ";

		for (int i = 0; ; i++) {
			if (i == arrsize) { doublearr[i] == '\0'; break; }
			cout << endl << i << "번째 실수를 입력하세요... >> : ";
			cin >> doublearr[i];
		}

		for (int i = 0; ; i++) {
			if (i == arrsize) { break; }
			cout << doublesum << " + " << doublearr[i] << " = ";
			doublesum = doublesum + doublearr[i];
			cout << doublesum << endl;
		}
		cout << "입력된 실수의 합은 " << doublesum << "입니다." << endl;
		free(doublearr);
	}

}