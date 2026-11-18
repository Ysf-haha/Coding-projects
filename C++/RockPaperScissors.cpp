#include <iostream>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char pChoice);
void chooseWinner(char pPlayer, char pComputer);

int main(){
    char player, computer;
    cout << "*********************************************" << endl;
    cout << "This is a Rock-Paper-Scissors Game!" << endl;
    cout << "*********************************************" << endl;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    cout << "*********************************************" << endl;
    chooseWinner(player, computer);
    cout << "*********************************************" << endl;
    return 0;
}

char getUserChoice(){
    char player;
    do{
        cout << "Your choices are the following:" << endl;
        cout << "r - Rock \t p - Paper \t s - Scissors" << endl;
        cout << "Your choice: ";
        cin >> player;
        cout << "*********************************************" << endl;
        if ((player != 'r') && (player != 'p') && (player != 's')){
            cout << "Not a valid choice, try again" << endl;
            cout << "*********************************************" << endl;
        }
    }while((player != 'r') && (player != 'p') && (player != 's'));
    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = (rand() % 3) + 1;
    
    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
        default:
            return 'r';
    }
}
void showChoice(char pChoice){
    switch(pChoice){
        case 'r':
            cout << "Rock" << endl;
            break;
        case 'p':
            cout << "Paper" << endl;
            break;
        case 's':
            cout << "Scissors" << endl;
            break;
    }
}
void chooseWinner(char pPlayer, char pComputer){
    switch(pPlayer){
        case 'r':
            if (pComputer == 'r'){
                cout << "Tie!" << endl;
                break;
            }
            else if (pComputer == 'p'){
                cout << "You lose!" << endl;
                break;
            }
            else{
                cout << "You win!" << endl;
                break;
            }
        case 'p':
            if (pComputer == 'r'){
                cout << "You win!" << endl;
                break;
            }
            else if (pComputer == 'p'){
                cout << "Tie!" << endl;
                break;
            }
            else{
                cout << "You lose!" << endl;
                break;
            }
        case 's':
            if (pComputer == 'r'){
                cout << "You lose!" << endl;
                break;
            }
            else if (pComputer == 'p'){
                cout << "You win!" << endl;
                break;
            }
            else{
                cout << "Tie!" << endl;
                break;
            }
    }
}