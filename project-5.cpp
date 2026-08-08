#include <iostream>
using namespace std;

int main(){
    int correct_pin = 1245;
    int entered_pin;

    cout << "enter your pin: ";
    cin >> entered_pin ;

    while (entered_pin != correct_pin){
        cout << "incorrect pin, try again" << endl;

        cout << "enter your pin again: " << endl;
        cin >> entered_pin;
    }

    cout << "correct pin enter take your cash" << endl;
    return 0;
}
