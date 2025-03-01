#include <iostream>

using namespace std;

int bot;
int userchoice;

void botschoice () {
    srand(time(0)); 
    bot = (rand() % 3) + 1;
    cout << "Bot has chosen!" << endl;
    cout << bot;
}

void type1() {
    if (userchoice == 1) {
        userchoice = userchoice + 3;
    }

    if ((userchoice - 1) == bot) {
        cout << "you win!";
    }

    else {
        cout << "you lose!";
    }
}

void type2() {
    int sum = userchoice + bot;

    if (userchoice > bot || (sum == 4 && userchoice == 1)) {
        cout << "you win!";
    }

    else {
        cout << "you lose!";
    }
}

void type3() {
    int r = userchoice - bot;
    if(r == 1 || r == -2) {
        cout << "you win!";
    }
    else {
        cout << "you lose!";
    }
}

void type4() {
    int r = userchoice/bot;

    if(r > 1) {
        cout << "You win!";
    }

    else {
        cout << "You lose!";
    }
}

void playRPS() {

    system("cls");
    botschoice();

    cout << "Choose Rock (1), Paper (2) or Scissor (3)" <<endl;
    cin >> userchoice;
    
    if (bot == userchoice) {
        cout << "It's a draw!" << endl;
        return;
    }

    type2();
}
