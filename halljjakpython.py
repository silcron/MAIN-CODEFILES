# 사용자로부터 정수 입력 받기
number = int(input("정수를 입력하세요: "))

# 홀수와 짝수 판별
if number % 2 == 0:
    print(f"{number}는 짝수입니다.")
else:
    print(f"{number}는 홀수입니다.")
