#include<iostream>
using namespace std;
int main()
{
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    // First switch: Display season
    switch (month) {
    case 12:
    case 1:
    case 2:
        cout << "Winter" << endl;
        break;

    case 3:
    case 4:
    case 5:
        cout << "Spring" << endl;
        break;

    case 6:
    case 7:
    case 8:
        cout << "Summer" << endl;
        break;

    case 9:
    case 10:
    case 11:
        cout << "Autumn" << endl;
        break;

    default:
        cout << "Invalid month" << endl;
    }

    // Second switch: Display number of days
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days" << endl;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days" << endl;
        break;

    case 2:
        cout << "28 days" << endl;
        break;

    default:
        cout << "Invalid month" << endl;
    }

	return 0;
}