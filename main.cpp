#include <iostream>
using namespace std;
int pizza, burger, salad = 0;
int balance = 500;
double r;

void bill(int pizza, int burger, int salad);
void restaurant();
void parking();
void bank();
void deposit(int amount);
void withdraw(int amount);
void area(double r);
void circumference(double r);
void volume(double r);
void movie();

int main(){
    /* problem 1
    restaurant();
    bill(pizza, burger, salad);*/
    // problem 2   parking();
    // problem 3 bank();
    /*
    cout << "Enter radius: ";
    cin >> r;
    area(r);
    circumference(r);
    volume(r); */
    // problem 4   movie();

    return 0;
}

void area(double r) {
    double area = 3.14 * r * r;
    cout << "Area: " << area << endl;
}
void circumference(double r) {
    double circumference = 3.14 * 2 * r;
    cout << "Circumference: " << circumference << endl;
}
void volume(double r) {
    double volume = (4/3) * 3.14 * r * r * r;
    cout << "Volume: " << volume << endl;
}
void bill(int pizza, int burger, int salad) {
    int bill = 10*pizza + 8*burger + 5*salad;
    cout << "Your bill is $" << bill;
}
void restaurant() {
    int num = 0;
    int temp = 0;
    cout << "Menu:" << endl <<
    "Pizza: 10$" << endl <<
    "Burger: 8$" << endl <<
    "Salad: 5$" << endl;
    cout << "Please enter a number to select the food and quantity: " << endl;
    do {
        cout << "1 for Pizza, 2 for Burger, 3 for Salad and 4 to exit: " << endl;
        cin >> num;
        switch (num) {
            case 1:
                cout << "Pizza quantity: " << endl;
                cin >> temp;
                pizza += temp;
            break;
            case 2:
                cout << "Burger quantity: " << endl;
                cin >> temp;
                burger += temp;
            break;
            case 3:
                cout << "Salad quantity: " << endl;
                cin >> temp;
                salad += temp;
            break;
            case 4:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid input" << endl;
        }
    }
    while (num != 4);
}
void parking() {
    bool cont = true;
    char character;
    int fee = 0;
    int hours;
    while (cont) {
        cout << "Please enter the number of hours you have been in parking: ";
        cin >> hours;
        if (hours <= 2) {
            fee = 0;
        }
        else if (hours <= 5) {
            hours -= 2;
            fee = hours * 2;
        }
        else {
            hours -= 5;
            fee = 6 + hours * 5;
        }
        cout << "Your parking fee: $" << fee << endl;

        cout << "Do you want to continue for another person? (Enter y for yes) ";
        cin >> character;
        if (character == 'y')
            cont = true;
        else
            cont = false;

    }
}
void deposit(int amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Your current balance is $" << balance << endl;
    }
    else if (amount < 0)
        cout << "Please enter a positive number!" << endl;
}
void withdraw(int amount) {
    if (amount > 0) {
        balance -= amount;
        cout << "Your current balance is $" << balance << endl;
    }
    else if (amount < 0)
        cout << "Please enter a positive number!" << endl;
}
void bank() {
    int numba, amount;
    do {
        cout << "Enter 1 to check balance" << endl << "Enter 2 to deposit" << endl << "Enter 3 to withdraw" << endl << "Enter 4 to exit" << endl;
        cin >> numba;
        switch (numba) {
            case 1:
                cout << "Your balance is $" << balance << endl;
            break;
            case 2:
                cout << "Enter an amount to deposit: ";
            cin >> amount;
            deposit(amount);
            break;
            case 3:
                cout << "Enter an amount to withdraw: ";
            cin >> amount;
            withdraw(amount);
            break;
            case 4:
                cout << "Exitting..." << endl;
            default:
                cout << "Invalid input" << endl;
        }
    } while (numba != 4);
}
void movie() {
    int cost = 0;
    int choice = 0;
    int a = 0, b = 0, c = 0, temp = 0;
    cout << "Movies: " << endl << "Movie A: 8$" << endl << "Movie B: 10$" << endl << "Movie C: 12$" << endl;
    do {
        cout << "Please enter a number to choose the movie(4 to exit): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "How many tickets? ";
                cin >> temp;
                a += temp;
                break;
            case 2:
                cout << "How many tickets? ";
                cin >> temp;
                b += temp;
                break;
            case 3:
                cout << "How many tickets? ";
                cin >> temp;
                c += temp;
                break;
            case 4:
                cout << "Exiting..." << endl;
            default:
                cout << "Invalid input" << endl;
        }
    }while (choice != 4);
    cost = a * 8 + b * 10 + c * 12;
    cout << "Your cost is: $" << cost << endl;
}