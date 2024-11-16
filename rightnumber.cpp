#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber, guess, tries = 0;

    // 랜덤 숫자 생성
    srand(time(0));
    secretNumber = rand() % 100 + 1; // 1에서 100 사이의 랜덤 숫자 생성

    cout << "1에서 100 사이의 숫자를 맞춰보세요!" << endl;

    do {
        cout << "숫자를 입력하세요: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "더 낮은 숫자를 시도해보세요." << endl;
        } else if (guess < secretNumber) {
            cout << "더 높은 숫자를 시도해보세요." << endl;
        } else {
            cout << "정답입니다! " << tries << "번 만에 맞췄어요!" << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
