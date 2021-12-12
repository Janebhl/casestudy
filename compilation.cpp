//Case Study
//Title: Odd or Even Marble Game: An Interactive 
//       Player vs Bot Game Inspired By the Marble Game in the Netflix Series “Squid Game”
//Name: Jane Cristel Bohol
//Date: December 12, 2021
#include <iostream>
#include <conio.h>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib> 

using namespace std;
void stillremember();
void promptAndWait();
void getUserPick(string& rps_player);
void getBotPick(string& rps_bot);
void chooseWinner(string& rps_player, string& rps_bot, int& c, int& winlose);
void botGuess(string& bot_guess, int& player_marbles);
void guessResult(string& bot_guess, int& bet_player, int& player_marbles, int& bot_marbles, int& rightwrong);
void botBet(int& player_marbles,int& bot_marbles,int& bot_bet, string& player_guess, int& rightwrong);
void login();


int main(){
//START OF CODE 1
    int watched,a=0;
    string rps_player, rps_bot;
    int c=0, winlose=0;
    int player_marbles=10, bot_marbles=10;
    int bet_player;
    int rightwrong=0;
    int bot_bet;
    string bot_guess;
    string player_guess;
    string date, experience;

    ifstream in_stream;
    ofstream ou_stream;
    ou_stream.open("Record.txt", ios::app); 

//Log in
    system("cls");
    cout << "Welcome Player!" << endl;
    cin.get();
    cout << "Press Enter to reveal the invitation to join the game..." << endl;
    cin.get();
    cout << " ____________________________________________________" << endl;
    cout << "|                                                    |" << endl;
    cout << "|           *            .**.         * * *          |" << endl;
    cout << "|         *   *         *    *        *   *          |" << endl;
    cout << "|        * * * *         '**'         * * *          |" << endl;
    cout << "|                                                    |" << endl;
    cout << "|              Welcome to Squid Game                 |" << endl;
    cout << "|                                                    |" << endl;
    cout << "|              Username: Player_365                  |" << endl;
    cout << "|              Password: marblegame                  |" << endl;
    cout << "|                                                    |" << endl;
    cout << " ----------------------------------------------------" << endl;
    cin.get();
    cout << "Please take note of your username and password to log in on the game." << endl;
    promptAndWait();
    system("cls");
    cout<<"\nPlease enter your username and password.";
    login();
    cout<<"\nYou have successfully logged in!!";
    cout<<"\nPress enter or return to continue...";
    cin.get();
//END OF CODE 1


//Introduction
    do{
//START OF CODE 2
        system ("cls");
        cin.get();
        cout << "Have you watched the Netflix series Squid Game?"<< endl;
        cout << "[1] yes \n[2] no" << endl;
        cin >> watched;
//END OF CODE 2

//SWITCH  
        switch (watched){
//CASE 1
            case 1:{
//START OF CODE 3
                system("cls");
                cin.get();
                cout <<"Then this game will definitely be easy for you!" << endl;
                cin.get();
                cout << "Do you still remember the marble game in the episode entitled Gganbu?" << endl;
                cout <<  "Here players are tasked to compete with whatever game they want as long as there will be a winner that owns 20 marbles." << endl;
                cin.get();
                cout << "However, in this game, we are only gonna play the odd or even marble game which is played by the lead characters Gi-hun and Il-nam." << endl;
                cin.get();
                cout << "I bet you are excited now!" << endl;
                cin.get();
                promptAndWait();
                stillremember();
                a++;
//END OF CODE 3

//BREAK
                break;
            }

//CASE 2
            case 2:{
//START OF CODE 4
                system("cls");
                cin.get();
                cout << "You haven't watched it yet?" << endl; 
                cin.get();
                cout << "It is fine!!" << endl;
                cin.get();
                cout << "You will surely still enjoy this game!!" << endl;
                cin.get();
                cout << "Of course, we are not gonna play the game of squid game." << endl;
                cin.get();
                cout << "We are only going to play one game from the episode Gganbu which is the marble game" << endl;
                cin.get();
                cout << "Here players are tasked to compete with whatever game they want as long as there will be a winner that owns 20 marbles." << endl;
                cin.get();
                cout << "However, in this game, we are only gonna play the odd or even marble game which is played by the lead characters Gi-hun and Il-nam." << endl;
                cin.get();
                cout << "I bet you are excited now!" << endl;
                cin.get();
                promptAndWait();
                stillremember();
                a++;
//START OF CODE 4

//BREAK
                break;
            }

//DEFAULT
            default: {
//START OF CODE 5
                cout << "Invalid Input!";
                promptAndWait(); 
//END OF CODE 5
            }
        }

//WHILE 1
    }while (a==0);

//START OF CODE 6
    system ("cls");
    promptAndWait();
//END OF CODE 6


//Rock Paper Scissors Game
    do{
//START OF CODE 7
        system("cls");
        cin.get();
        cout << "Player 001: Let us play rock paper scissors!!" << endl;
        cin.get();
        getUserPick(rps_player);
        getBotPick(rps_bot);
        cout << "You picked " << rps_player << endl;
        cout << "Player 001 picked " << rps_bot << endl;
        chooseWinner(rps_player,rps_bot, c, winlose);
//END OF CODE 7

//WHILE 2
    }while (c==0); 
    cin.get();

//result of Rock Paper Scissors Game

//IF 1
    if (winlose==1){
//START OF CODE 8
        cout << "Congratulations for winning the rock paper scissirors!" << endl;
        cout << "Just like what is written in the instructions, you will be the bettor on the first round!!";
        rightwrong=0;
        promptAndWait();
//END OF CODE 8
    }

//IF 2
    else if (winlose==2){

//START OF CODE 9
        cout << "Awww you lost on the rock paper scissirors!" << endl;
        cout << "Just like what is written in the instructions, you will be the guesser on the first round!!";
        rightwrong=1;
        promptAndWait();
//END OF CODE 9
    }

//Start of odd even marble game

//PLAY
        play:


//IF 3
    if ((rightwrong == 0) && (rightwrong != 1) && (player_marbles <20) && (bot_marbles <20)){
        do{

//START OF CODE 10
            system("cls");
            cin.get();
            cout << "You now have " << player_marbles << " marbles left." << endl;
            cin.get();
            cout << "Place your bet! \nPick a number between 1 to " << player_marbles << endl;
            cin >> bet_player;
            cout << "(Your bet will be unknown to Player 001)" << endl;
//START OF CODE 10

//IF 4
            if (player_marbles >= bet_player){
                botGuess(bot_guess, player_marbles);
                /*cout << "My guess is..." << endl;
                cin.get();
                cout << "The number of your bet..." << endl;
                cin.get();
                cout << "is an "<< bot_guess << " number!" << endl;*/
                promptAndWait();
                system("cls");
                guessResult(bot_guess, bet_player, player_marbles, bot_marbles, rightwrong);
                cin.get();
                goto play;
            }
            else {
                cout << "Invalid Input.\n Try again." << endl;
                promptAndWait();
            }
//END OF IF 4

        }while (rightwrong == 0);
    }

//IF 5
    else if ((rightwrong == 1) && (rightwrong != 0) && (player_marbles <20) && (player_marbles >0) && (bot_marbles <20)){

//START OF CODE 11  
        system("cls");
        cout << "You are now a guesser." << endl;
        cin.get();
        cout << "You now have " << player_marbles << " marbles left." << endl;
        cin.get();
        cout << "You will guess  if the number of marbles Player 001 will bet is an odd or even number." << endl;
        cin.get();
        botBet(player_marbles, bot_marbles, bot_bet, player_guess, rightwrong);
        cin.get();
//END OF CODE 11 

//GOTO PLAY
        goto play;
    }

//IF 6
    else if ((player_marbles>=20) && (bot_marbles<=0)){
        promptAndWait();
        system("cls");
        cout << "You have won the game!!" << endl;
        cin.get();
        cout << "\nWe should record this phenomenal win!!";
        cin.get();
        cout << "Please input the date today (dd/mm/yyyy): " << endl;
        getline(cin,date);
        in_stream >> date;
        cin.get();
        system("cls");
        cout << "Player 001: It has been fun playing with you!" << endl;
        cin.get();
        cout << "I'll make sure to win next time!!" << endl;
        cin.get();
        cout << "Till next time.. Gganbu... \n(Gganbu means great friend in squid game)" << endl;
        cin.get();
        system ("cls");
        cout << "Share your experience! \nPlease write a short feedback about your experience: " << endl;
        getline(cin,experience);
        in_stream >> experience;
        cin.get();
        //print on the file stream
        ou_stream << "On this day " << date << " you won against Player 001." << endl;
        ou_stream << "Here's your feedback: " << endl;
        ou_stream << experience << endl;
        ou_stream << "```````````````````````````````````````````````````````````````" << endl;
        cout << "Thank you for playing this game! \nBye!!" << endl;
        promptAndWait();
    }
    else {
        promptAndWait();
        system("cls");
        cout << "Awww.. Don't be sad..." << endl;
        cin.get();
        cout << "We can play again next time!!" << endl;
        cin.get();
        cout << "Still, we need to record this fun experience!" << endl;
        cin.get();
        cout << "Please input the date today (dd/mm/yyyy): " << endl;
        getline(cin,date);
        in_stream >> date;
        promptAndWait();
        system("cls");
        cin.get();
        cout << "Player 001: It has been fun playing with you!" << endl;
        cin.get();
        cout << "I'm looking forward to play again with you!" << endl;
        cin.get();
        cout << "Till next time.. Gganbu... \n(Gganbu means great friend in squid game)" << endl;
        cin.get();
        system ("cls");
        cout << "Share your experience! \nPlease write a short feedback about your experience: " << endl;
        getline(cin,experience);
        in_stream >> experience;
        cout << "Thank you for playing this game! \nBye!!" << endl;
        cin.get();
        //print on the file stream
        ou_stream << "On this day " << date << " you lost against Player 001." << endl;
        ou_stream << "Here's your feedback: " << endl;
        ou_stream << experience << endl;
        ou_stream << "```````````````````````````````````````````````````````````````" << endl;
        promptAndWait();
    }
//END OF IF 5

//CODE 12
    ou_stream.close();
    return 0;
}


void promptAndWait(){
    cin.ignore (100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
}  

// void function for log in
void login(){
    char login_un[20], login_pw[20];
    
            while (strcmp(login_un, "Player_365") !=0)
            {
                cin.get();
                cout<<"Username: ";
                cin.getline(login_un, 20);
                if (strcmp(login_un, "Player_365") ==0) break;
                else
                    cout<<"\nInvalid Username.\n";
            }     
            while (strcmp(login_pw, "marblegame") !=0)
            {
                cin.get();
                cout<<"Password: ";
                cin.getline(login_pw, 20);
                if (strcmp(login_pw, "marblegame") == 0) break;
                else
                    cout<<"\nInvalid Password\n";
            }  
}

// void functions for introduction

void stillremember(){
    int sr, b=0;
    
        do{
            system("cls");
            cout << endl;
            cout << "Do you know the instructions of the game?";
            cout << "\n[1] yes \n[2] no" << endl;
            cin >> sr;
            switch(sr){
                case 1:{
                    system("cls");
                    cout << "Then let's start the game!" << endl;
                    cin.get();
                    b++;
                    promptAndWait();
                    break;
                }
                case 2:{
                    system("cls");
                    cin.get();
                    cout << "<<Instructions of the game>>" << endl;
                    cin.get();
                    cout << "In this game, your opponent will be a bot named Player 001." << endl;
                    cin.get();
                    cout << "The two of you will be given ten marbles each." << endl;
                    cin.get();
                    cout << "Your only objective of the game is to win the ten marbles from your opponent to get a total of 20 marbles!" << endl;
                    cin.get();
                    cout << "To do that..." << endl;
                    cout << "First, you have to play rock paper scissors" << endl;
                    cin.get();
                    cout << "The loser will be the one to guess, while the winner will be the one to bet." << endl;
                    cin.get();
                    cout << "The winner (we will call them the 'bettor') will place a number of marbles to bet." << endl;
                    cout << "The number of marbles will be unknown to the opponent(we will call them the 'guesser')" << endl;
                    cin.get();
                    cout << "The guesser will then guess if the number of marbles is even or odd." << endl;
                    cin.get();
                    cout << "If the guesser guessed correctly, then they would receive all the marbles that the bettor betted." << endl;
                    cout << "Otherwise, if they guessed wrong, then they will be the one to give the same amount of marbles as the bettor betted." << endl;
                    cin.get();
                    cout << "Along with this, if the guesser won this round, then the roles will be switched for the next round." << endl;
                    cout << "The guesser will now be the bettor, and the bettor will be the guessor." << endl;
                    cin.get();
                    cout << "But if they've guessed wrong, then the roles will be the same next round." << endl;
                    cin.get();
                    cout << "The game will not end until there is a winner." << endl;
                    cin.get();
                    cout << "Good luck!" << endl;
                    b++;
                    cin.get();
                    break;
                    
                }
                default:{
                    cout << "Invalid Input!";
                    promptAndWait(); 
                }  
            }
        }while (b==0);
    return;
}

// void functions for rock paper scissors game

void getUserPick(string& rps_player){
    int rps_p;
    int e =0;
    do{
        cout << "Choose one: " << endl;
        cout << "[1]rock \n[2]paper \n[3]scissors" << endl;
        cin >> rps_p;
        switch(rps_p){
            case 1: {
                rps_player = "rock";
                e++;
                break;
            }
            case 2: {
                rps_player = "paper";
                e++;
                break;
            }
            case 3: {
                rps_player = "scissors";
                e++;
                break;
            }
            default:{
                cout << "Invalid Input!"<<endl;
                cin.get();
            }
        }
    }while (e==0);

}
void getBotPick(string& rps_bot){
    int rps_b = rand() % 3 + 1;
    
    if (rps_b == 1){
        rps_bot = "rock";
    }
    if (rps_b == 2){
        rps_bot = "paper";
    }
    if (rps_b == 3){
        rps_bot = "scissors";
    }
}

void chooseWinner(string& rps_player, string& rps_bot, int& c, int& winlose){
    if ((rps_player == "rock" && rps_bot == "rock") || (rps_player == "paper" && rps_bot == "paper") 
    || (rps_player == "scissors" && rps_bot == "scissors")){
        cout << "It's a tie! \nPlay again." << endl;
        promptAndWait();
        cin.get();
    }
    if ((rps_player == "rock" && rps_bot == "scissors") || (rps_player == "paper" && rps_bot == "rock") 
    || (rps_player == "scissors" && rps_bot == "paper")){
        cout << "You won!!!" << endl;
        cin.get();
        c++;
        winlose = winlose+1;
        return;
    }
    if ((rps_player == "rock" && rps_bot == "paper") || (rps_player == "paper" && rps_bot == "scissors") 
    || (rps_player == "scissors" && rps_bot == "rock")){
        cout << "You Lose :(" << endl;
        cin.get();
        c++;
        winlose = winlose+2;
        return;
    }
}
// void functions for odd even marblegame
void botGuess(string& bot_guess, int& player_marbles){
    int b_guess;
    cout << "Player 001: Hmmmm...." << endl;
    cin.get();
    cout << "I wonder if that is odd or even.." << endl;
    cin.get();
    b_guess = rand() % 2 + 1;
    if (b_guess ==1 ){
        bot_guess = "odd";
    }
    else if (b_guess == 2 ){
        bot_guess = "even";
    }    
    cout << "My guess is..." << endl;
    cin.get();
    cout << "The number of your bet..." << endl;
    cin.get();
    cout << "is an "<< bot_guess << " number!" << endl;
    cin.get(); 
     
    return;
}
void  guessResult(string& bot_guess, int& bet_player, int& player_marbles, int& bot_marbles, int& rightwrong){
    int win=0;
    int lose=1;
    if ((bet_player%2==1) && (bot_guess == "odd") || (bet_player%2==0) && (bot_guess == "even")) {
            cout << "Player 001 guessed right!" << endl;
            cin.get();
            cout << "You will lose " << bet_player << " of your marbles." << endl;
            cin.get();
            cout << "You will become a guesser next round." << endl;
            player_marbles = player_marbles - bet_player;
            bot_marbles = bot_marbles - player_marbles;
            rightwrong=lose;
            cin.get();
    }
    else if ((bet_player%2==0) && (bot_guess == "odd") || (bet_player%2==1) && (bot_guess == "even")) {
            cout << "Player 001 guessed wrong!" << endl;
            cin.get();
            cout << "You will gain " << bet_player << " marbles from Player 001." << endl;
            cin.get();
            cout << "The position will be the same next round." << endl;
            player_marbles = player_marbles + bet_player;
            bot_marbles = bot_marbles - bet_player;
            rightwrong=win;
            cin.get();
    }
    return;
}

void botBet(int& player_marbles,int& bot_marbles,int& bot_bet, string& player_guess,int& rightwrong){
    int e=1;
    int p_guess;
    int w=0;
    int l=1;

    cout << "Player 001: I will now pick my bet..." << endl;
    cin.get();
    cout << "Hmm..." << endl;
    cin.get();
    do{
    bot_bet = rand() % bot_marbles + 1;

        if (bot_bet <= player_marbles){
            e++;
        }
        else {
            e==1;
        }
    }while (e==1);

    cout << "You can now guess if my bet is an odd or even number!" << endl;
    cout << "Pick your guess!" << endl;
    cout << "\n[1]odd \n[2]even" << endl;
    cin >> p_guess;

        if (p_guess==1){
            player_guess = "odd";
        }
        else if (p_guess==2){
            player_guess = "even";
        }
        else{
            cout << "Invalid Input. /nTry again." << endl;
            promptAndWait();
        }
        cin.get();
        cout << "I have bet " << bot_bet << " marbles." << endl;

    if ((bot_bet%2==1) && (player_guess == "odd") || (bot_bet%2==0) && (player_guess== "even")) {
            cout << "You guessed right!" << endl;
            cin.get();
            cout << "You will gain " << bot_bet << " marbles from Player 001." << endl;
            cin.get();
            cout << "You will become a bettor next round." << endl;
            player_marbles = player_marbles + bot_bet;
            bot_marbles = bot_marbles - bot_bet;
            rightwrong=w;
            cin.get();
    }
    else if ((bot_bet%2==0) && (player_guess == "odd") || (bot_bet%2==1) && (player_guess == "even")) {
            cout << "You guessed wrong!" << endl;
            cin.get();
            cout << "You will lose " << bot_bet << " marbles." << endl;
            cin.get();
            cout << "The position will be the same next round." << endl;
            player_marbles = player_marbles - bot_bet;
            bot_marbles = bot_marbles - player_marbles;
            rightwrong=l;
            cin.get();
            }
    promptAndWait();
}