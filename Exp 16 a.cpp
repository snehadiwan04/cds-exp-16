//sneha diwan
//entc B2
//23070123126
//experiment 16
#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age <18) {
            throw age; 
        } else {

            cout <<"approved"<< endl;
        }
    } catch (int a) {
        cout << "ERROR :Underage! " << a << endl;
    }

    return 0;
}
/*
Enter age: 15
ERROR :Underage! 15

=== Code Execution Successful ===


*/
