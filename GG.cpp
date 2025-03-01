#include <iostream>

using namespace std;

string questions [] {"What can jump higher than a building?",
                     "What month has 28 days?",
                     "What is 1+1?",
                     "Divide 10 by half and then add 10"
};

string answers [4][4][2] = {{{"Anything","1"},{"Human","0"},{"Mosquito","0"},{"Superman","0"}},
                            {{"none","0"},{"All the months","1"},{"Depends on the year","0"},{"IDK","0"}},
                            {{"jendela","0"},{"2","1"},{"11","0"},{"!+1","0"}},
                            {{"30","1"},{"15","0"},{"10","0"},{"12","0"}},
};

int key [] {
    1,2,2,1
};

int i;
int j;
int GGanswer;
int mistake;

void printchoice(int i, int mistake) {
    for (j=0; j<4; j++) {
        cout << j+1;
        cout << " " << answers[i][j][0] << endl;
    }
      cin >> GGanswer;
}

int ask (int i, int mistake) {
cout << questions[i] << endl;

  printchoice(i, mistake);

    if (GGanswer < 1 || GGanswer > 4) {
        cout << "Invalid choice!" << endl;
        printchoice(i, mistake);
    }

    if (GGanswer == key[i]) {
        cout << "Answer is correct!" << endl;
        ask(i+1,0);
    }

    else {
        ask(i, mistake+1);
    }

    return GGanswer;
}

void playGG () {
    system("cls");
    ask(i,mistake);
}
