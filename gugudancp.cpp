#include <iostream>
using namespace std;

int main() {
    int number;

    // 사용자로부터 숫자 입력 받기
    cout << "출력할 구구단의 숫자를 입력하세요: ";
    cin >> number;

    // 구구단 출력
    cout << number << "단" << endl;
    for (int i = 1; i <= 9; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
