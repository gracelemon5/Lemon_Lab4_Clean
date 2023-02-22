#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    // I recommend writing your factorial code here
    int number;
    cout << "Factorial:\n";
    cout << "Enter a number: ";
    cin >> number;

    while (number < 0) {
        cout << "Nice try, please enter a POSITIVE number...: ";
        cin >> number;
    }

    int toReturn = 1;
    cout << number << "! = ";
    for (int i = 1; i <= number; i++) {
        if (i != number) {
            cout << i << " * ";
        }
        else {
            cout << i << " = ";
        }
        toReturn = toReturn * i;
    }
    cout << toReturn << endl;
}
void arithmetic() {
    // I recommend writing your arithmetic series code here
    int start;
    int to_add;
    int num_elements;
    int total = 0;

    cout << "Arithmetic Series:\n";
    cout << "Enter a number to start at: ";
    cin >> start;
    cout << "Enter a number to add each time: ";
    cin >> to_add;
    cout << "Enter the number of elements in the series: ";
    cin >> num_elements;

    for (int i = 0; i < num_elements; i++) {
        if (i != num_elements - 1) {
            cout << start << " + ";
        }
        else {
            cout << start << " = ";
        }
        total += start;
        start += to_add;
    }

    cout << total << endl;
}
void geometric()
{
    // I recommend writing your geometric series code here
    int a = 0;
    int r = 0;
    int n = 0;
    cout << "Geometric Series:\n";
    cout << "Enter a number to start at: ";
    cin >> a;
    cout << "Enter a number to multiply each time: ";
    cin >> r;
    cout << "Enter the number of elements in the series: ";
    cin >> n;

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << a << " * ";
        sum = sum + a;
        a = a * r;
    }

    cout << " = " << sum << endl;
}

int main() {
    int choice;
    char again;
    do {
        printMenu();
        cin >> choice;
        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }
        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }
        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}