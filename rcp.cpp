#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    int randomChoice = rand() % 3;
    switch(randomChoice) {
        case 0: return "가위";
        case 1: return "바위";
        case 2: return "보";
        default: return "오류";
    }
}

string getResult(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) return "비겼습니다!";
    else if ((userChoice == "가위" && computerChoice == "보") ||
             (userChoice == "바위" && computerChoice == "가위") ||
             (userChoice == "보" && computerChoice == "바위"))
        return "사용자가 이겼습니다!";
    else
        return "컴퓨터가 이겼습니다!";
}

int main() {
    srand(time(0));
    string userChoice;
    string computerChoice;

    cout << "가위, 바위, 보 중 하나를 선택하세요: ";
    cin >> userChoice;

    computerChoice = getComputerChoice();
    cout << "컴퓨터의 선택: " << computerChoice << endl;

    string result = getResult(userChoice, computerChoice);
    cout << result << endl;

    return 0;
}
