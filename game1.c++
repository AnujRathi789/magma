#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getUserChoice() {
    int choice;
    while (true) {
        cout << "Enter your choice (1 - Rock, 2 - Paper, 3 - Scissors, 4 - Lizard, 5 - Spock): ";
        cin >> choice;
        if (choice >= 1 && choice <= 5) {
            return choice;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

int getComputerChoice() {
    srand(static_cast<unsigned int>(time(0)));
    return (rand() % 5) + 1;
}

void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 1 && (computerChoice == 3 || computerChoice == 4)) ||
               (userChoice == 2 && (computerChoice == 1 || computerChoice == 5)) ||
               (userChoice == 3 && (computerChoice == 2 || computerChoice == 4)) ||
               (userChoice == 4 && (computerChoice == 2 || computerChoice == 5)) ||
               (userChoice == 5 && (computerChoice == 1 || computerChoice == 3))) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    cout << "Let's play Rock, Paper, Scissors, Lizard, Spock!" << endl;
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();
    cout << "Your choice: " << userChoice << endl;
    cout << "Computer's choice: " << computerChoice << endl;
    determineWinner(userChoice, computerChoice);

    return 0;
}
