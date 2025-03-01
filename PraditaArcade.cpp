#include<iostream>
#include "games/RPS.cpp"
#include "games/GG.cpp"

using namespace std;

int choice;
char answer;
char restart;
int gamechoice;
string username;

void menubar(){
    cout<<endl;
    cout<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Menu Bar~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|-------1. Games---------------------------------------------------------|"<<endl;
    cout<<"|-------2. Tutorial------------------------------------------------------|"<<endl;
    cout<<"|-------3. Credits-------------------------------------------------------|"<<endl;
    cout<<"|-------4. About---------------------------------------------------------|"<<endl;
    cout<<"|-------0. Exit----------------------------------------------------------|"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<endl;
    cout<<"|~~~|Choose the option you would like to go(1-5):|~"<<"~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cin>>choice;
    cout<<endl;
}
void menugames(){
    cout<<endl;
                 cout<<endl;
                 cout<<"|========================================================================|"<<endl;
                 cout<<"|~~~~~~~~~~~~~~~~~~!Welcome to the game menu!~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~~~~~~Here, you choose what games you want to play!~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~Have Fun!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|========================================================================|"<<endl;
                 cout<<endl;
                 cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Game Menu~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|-------1. Rock Paper Scissors--------------------------------------------|"<<endl;
    cout<<"|-------2. Guess What It is?----------------------------------------------|"<<endl;
    cout<<"|-------0. Exit-----------------------------------------------------------|"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<endl;
    cout<<"|~~~|Choose the option you would like to go(1-2):|~"<<"~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cin>>choice;
}
void reviewmenu(){
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Review~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|-------      5                  |                *****                  |"<<endl;
    cout<<"|-------      4                  |                ****                   |"<<endl;
    cout<<"|-------      3                  |                ***                    |"<<endl;
    cout<<"|-------      2                  |                **                     |"<<endl;
    cout<<"|-------      1                  |                *                      |"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~|Rate our Program from 1 to 5:|~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cin>>choice;
    cout<<endl;
}
void StartMenu(string x){
    cout<<"|==============================================================================|"<<endl;
    cout<<"|==============================================================================|"<<endl;
    cout<<"            Welcome "<<username<<"! This is Our" << x << "Game           "<<endl;
    cout<<"|==============================================================================|"<<endl;
    cout<<"|==============================================================================|"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~" << x << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|-------1. Play----------------------------------------------------------------|"<<endl;
    cout<<"|-------2. Exit----------------------------------------------------------------|"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cin>>gamechoice;
    cout<<endl;
}

void RestartMenu(){
    cout<<endl;
    cout<<"|======================================================|"<<endl;
    cout<<"|======================================================|"<<endl;
    cout<<"|              Do you want to play again?              |"<<endl;
    cout<<"|                       (Y/N)                          |"<<endl;
    cout<<"|======================================================|"<<endl;
    cout<<"|======================================================|"<<endl;
    cin>> restart;
}


int main(){
    cout<<"|========================================================================|"<<endl;
    cout<<"|        Enter Your Name:";
    cin>>username;
    cout<<"|========================================================================|"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"|========================================================================|"<<endl;
    cout<<"|~~~~~~~Hello "<<username<<"! Welcome to Pradita Arcade, here~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|~~~~~~~you can play games that are made by official Pradita~~~~~~~~~~~~~|"<<endl;
    cout<<"|~~~~~~~college students which are Primus, Andrew, Jojo, Kim On~~~~~~~~~~|"<<endl;
    cout<<"|~~~~~~~from group 7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|========================================================================|"<<endl;
    cout<<endl;
    for(;;){
    menubar();
    switch (choice){
        case 1 : {
                 BackToGameMenu:

                 menugames();
                 switch (choice){
                     case 1: {
                        StartMenu(" RPS ");
                        switch(gamechoice){
                            case 1:{
                                RestartMenu1:
                                playRPS();
                                RestartMenu();
                                switch(restart){
                                    case 'Y':{
                                        goto RestartMenu1;
                                            }
                                        break;
                                    case 'N':{
                                        cout<<endl;
                                        cout<<endl;
                                        cout<<"|======================================================|"<<endl;
                                        cout<<"|======================================================|"<<endl;
                                        cout<<"             Thank you for playing our game!"<<endl;
                                        cout<<"|======================================================|"<<endl;
                                        cout<<"|======================================================|"<<endl;
                                        }
                                        goto BackToGameMenu;

                                }
                            }
                        case 2:{
                    }
                    break;
                    default:
                    int any;
                    cout<<endl;
                    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                    cout<<"!!!!!!!!Invalid Choice! Please choose the available options!!!!!!!!!!!!!!!!"<<endl;
                    cout<<"!!!!!!!!!!!!!!!!!!Type 1-10 To Go Back To Menu!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                    cout<<endl;
                    cin>>any;
                            }
                            }
                      break;
                      case 2: {
                             StartMenu("Guessing game");
                             switch (gamechoice){
                                 case 1:{
                                     RestartMenu2:
                                     playGG();
                             }
                             break;
                                 case 2:{
                                 }
                             break;
                                 default:{
                                    cout<<"Invalid Choice! Back to Menu!";
                                 }
                            }
                      }
                      break;
                      case 0:{
                      }
                      break;
                      default : {
                             int any;
                             cout<<endl;
                             cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                             cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                             cout<<"!!!!!!!!Invalid Choice! Please choose the available options!!!!!!!!!!!!!!!!"<<endl;
                             cout<<"!!!!!!!!!!!!!!!!!!Type 1-10 To Go Back To Menu!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                             cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                             cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                             cout<<endl;
                             cin>>any;
                             break;
                      }
        }
        break;
        case 2 : {
                 int any;
                 cout<<endl;
                 cout<<endl;
                 cout<<"|========================================================================|"<<endl;
                 cout<<"|~~~~~~Here, Tutorial is a computer program that provides~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~practical information about a specific subject (our~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~games). This will help you know how to play the games~~~~~~~~~~~~~|"<<endl;
                 cout<<"|========================================================================|"<<endl;
                 cout<<endl;
                 cout<<endl;
                 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Tutorial~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|-------Game 1(Rock, Paper, Scissors):-----------------------------------|"<<endl;
                 cout<<"|-------Very Simple Game, You are given 3 choice Rock, Paper, Scissors---|"<<endl;
                 cout<<"|-------just like what the title is given. Then, you type the option-----|"<<endl;
                 cout<<"|-------you would like to pick(Number 1 to 3). After that, the result----|"<<endl;
                 cout<<"|-------will come out and you can see who wins.--------------------------|"<<endl;
                 cout<<"|------------------------------------------------------------------------|"<<endl;
                 cout<<"|-------Game 2 (Guess What It Is?)---------------------------------------|"<<endl;
                 cout<<"|-------Simple quiz game. Choose the choice until u win!-----------------|"<<endl;
                 cout<<"|-------The answer is not always what you expect---------------------------|"<<endl;
                 cout<<"|-------Choose up to 4 choice (1-4)--------------------------------------|"<<endl;
                 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<endl;
                 cout<<"|------------------Type (1-10) To Go Back To Menu------------------------|"<<endl;
                 cin>>any;
        }
        break;
        case 3 : {
                 int any;
                 cout<<endl;
                 cout<<endl;
                 cout<<"|==================================================================================================|"<<endl;
                 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CREDITS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~This program is divided into 4 sections:~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~1. Menu Bar              : Andrew       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~Making Input Name, Making Case Structures (Menu Bar, Game Menu, Review Menu)~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~2. Games                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~Making 2 games:                              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~-Rock Paper Scissors     : Primus and Jojo   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~-Guess What It is        : Kim On            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~3. Additionals:                              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~Making additionals edit  : Andrew            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|==================================================================================================|"<<endl;
                 cout<<endl;
                 cout<<"|------------------------------Type (1-10) To Go Back To Menu--------------------------------------|"<<endl;
                 cin>>any;
                }
        break;
        case 4 : {
                 cout<<endl;
                 cout<<endl;
                 int any;
                 cout<<"|======================================================================================|"<<endl;
                 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ABOUT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~This program is made by group 7 consisting of Andrew, Primus, Jojo, Kim On.~~~~~~~|"<<endl;
                 cout<<"|~~~~The program is meant to be an arcade filled with games that you can choose to~~~~~|"<<endl;
                 cout<<"|~~~~play. We also created a lot of commands to make the program run easier.~~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~The games that we created are the Rock Paper Scissors game and the Guess~~~~~~~~~~|"<<endl;
                 cout<<"|~~~~What It Is? Game.~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                 cout<<"|======================================================================================|"<<endl;
                 cout<<endl;
                 cout<<"|---------------------------Type (1-10) To Go Back To Menu--------------------------------|"<<endl;
                 cin>>any;
                 }
        break;
        case 0 : {
                 cout<<"|==================================================================================================|"<<endl;
                 cout<<"                         Have you played any of the games before?(Y/N)                              "<<endl;
                 cout<<"|==================================================================================================|"<<endl;
                 cin>>answer;
                 switch (answer){
                    case 'Y':{
                    reviewmenu();
                    switch (choice){
                        case 5:{
                         cout<<"|==================================================================================================|"<<endl;
                         cout<<"                              Thanks for the 5 Star [*****]                                         "<<endl;
                         cout<<"                                We Appreciate Your Review!                                          "<<endl;
                         cout<<"                                Come back again next time!                                          "<<endl;
                         cout<<"|==================================================================================================|"<<endl;
                         return 0;
                        }
                        break;
                        case 4:{
                         cout<<"|==================================================================================================|"<<endl;
                         cout<<"                              Thanks for the 4 Star [****]                                          "<<endl;
                         cout<<"                                We will improvise better!                                           "<<endl;
                         cout<<"                                Come back again next time!                                          "<<endl;
                         cout<<"|==================================================================================================|"<<endl;
                        return 0;
                        }
                        break;
                        case 3:{
                         cout<<"|==================================================================================================|"<<endl;
                         cout<<"                              Thanks for the 3 Star [***]                                           "<<endl;
                         cout<<"                              We will look for improvements!                                        "<<endl;
                         cout<<"                                Come back again next time!                                          "<<endl;
                         cout<<"|==================================================================================================|"<<endl;
                         return 0;
                        }
                        break;
                        case 2:{
                         cout<<"|==================================================================================================|"<<endl;
                         cout<<"                              Thanks for the 2 Star [**]                                            "<<endl;
                         cout<<"                           Sorry! We will do even better next time!                                 "<<endl;
                         cout<<"                                Come back again next time!                                          "<<endl;
                         cout<<"|==================================================================================================|"<<endl;
                         return 0;
                        }
                        break;
                        case 1:{
                         cout<<"|==================================================================================================|"<<endl;
                         cout<<"                              Thanks for the 1 Star [*]                                             "<<endl;
                         cout<<"                             Very Sorry! We will look for the                                       "<<endl;
                         cout<<"                           mistakes and do even better next time!                                   "<<endl;
                         cout<<"                                Come back again next time!                                          "<<endl;
                         cout<<"|==================================================================================================|"<<endl;
                         return 0;
                        }
                        break;
                        default:{
                            cout<<"|------------------------Invalid! Please Choose the availabe choice-----------------------------|"<<endl;
                        }
                    }
                 }

                case 'N':{
                    cout<<"|==================================================================================================|"<<endl;
                    cout<<"|==================================================================================================|"<<endl;
                    cout<<"|                                       Thank you!                                                 |"<<endl;
                    cout<<"|                                  Come back next time!                                            |"<<endl;
                    cout<<"|==================================================================================================|"<<endl;
                    cout<<"|==================================================================================================|"<<endl;
                    return 0;
                }
                break;
                default:{
                    cout<<"|----------------------------Invalid! Please Choose the availabe choice--------------------------------|"<<endl;
                }
            }
        }
        default:{
               int any;
               cout<<endl;
               cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
               cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
               cout<<"!!!!!!!!Invalid Choice! Please choose the available options!!!!!!!!!!!!!!!!"<<endl;
               cout<<"!!!!!!!!!!!!!!!!!!Type 1-10 To Go Back To Menu!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
               cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
               cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
               cout<<endl;
               cin>>any;
        }
    }

    return 0;
    }
    }
}

