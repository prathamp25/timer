#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void countdown(int seconds) {
    for (int i = seconds; i >= 0; i--) {
        cout << "Time left: " << i << " seconds\n";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "BOOM! Self-Destruct Activated! 💥\n";
}

int main() {
    int timeLeft;
    cout << "Enter countdown time in seconds: ";
    cin >> timeLeft;
    countdown(timeLeft);
    return 0;
}
