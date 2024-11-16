#include <stdio.h>

int main() {
    int number;

    // 사용자로부터 정수 입력 받기
    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    // 홀수와 짝수 판별
    if (number % 2 == 0) {
        printf("%d는 짝수입니다.\n", number);
    } else {
        printf("%d는 홀수입니다.\n", number);
    }

    return 0;
}
