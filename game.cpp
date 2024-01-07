#include <iostream>
using namespace std;

void restart (string userchoice) {
    int numbercomp = rand() % 3;
    string computerchoice; 

    switch (numbercomp) {
        case 0:
            computerchoice = "Rock";
            break;

        case 1:
            computerchoice = "Paper";
            break;

        case 2:
            computerchoice = "Scissors";
            break;
    }    

    while (userchoice != "Rock" && userchoice != "Paper" && userchoice != "Scissors") {
        cout << "Please enter a valid input: Rock, Paper or Scissors" << endl;
        cin >> userchoice;
    }

    cout << "You entered: " << userchoice << endl;
    cout << "The computer's choice is: " << computerchoice << endl;

    if (userchoice == computerchoice) {
        cout << "THAT IS A TIE !!";
    } 
    
    else if (userchoice == "Rock") {
        if (computerchoice == "Paper")
            cout << "The computer won! YOU LOST :(" << endl;
        if (computerchoice == "Scissors")
            cout << "Congratulations! YOU WON :D" << endl;
    } 
    
    else if (userchoice == "Paper") {
        if (computerchoice == "Rock")
            cout << "Congratulations ! YOU WON :D" << endl;
        if (computerchoice == "Scissors")
            cout << "The computer won ! YOU LOST :(" << endl;
    } 
    
    else if (userchoice == "Scissors") {
        if (computerchoice == "Rock")
            cout << "The computer won ! YOU LOST :(" << endl;
        if (computerchoice == "Paper")
            cout << "Congratulations ! YOU WON :D" << endl;
    }

    cout << endl << "Want to try another game?" << endl << "Enter Y (yes) or N (no): ";
    char wish;
    cin >> wish;

    if (wish == 'Y') {
        cout << endl << "Alright! Enter your choice :)" << endl;
        cin >> userchoice;
        restart(userchoice);
    } 
    
    else {
        cout << endl << "Thank you so much for playing :)";
    }

}


int main () {
    cout << "WELCOME TO THIS NOSTALGIC GAME OF ROCK PAPER SCISSORS :)" << endl << endl << "Here are the rules !!" << endl << endl;
    cout << "You have 3 choices: enter 'Rock', 'Paper', or 'Scissors', and the computer will randomly generate one option simultaneously." << endl;
    cout << "Depending on the entries, the winner will be declared." << endl << "In general, Rock defeats Scissors but not Paper. Scissors defeat Paper but not Rock. Lastly, Paper defeats Rock but not Scissors." << endl << endl;
    cout << "Enter your choice! (Remember it can only be one of these options -> Rock or Paper or Scissors)" << endl << endl;

    string userchoice;
    cin >> userchoice;

    restart(userchoice);

    return 0;
}

