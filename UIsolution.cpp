#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Option 3" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
}

void handleOption1() {
    cout << "You chose Option 1!" << endl;
    // Add your code for Option 1 here
}

void handleOption2() {
    cout << "You chose Option 2!" << endl;
    // Add your code for Option 2 here
}

void handleOption3() {
    cout << "You chose Option 3!" << endl;
    // Add your code for Option 3 here
}

int main() {
    int choice = 0;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                handleOption1();
                break;
            case 2:
                handleOption2();
                break;
            case 3:
                handleOption3();
                break;
            case 4:
                running = false;
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        cout << endl;
    }

    return 0;
}
