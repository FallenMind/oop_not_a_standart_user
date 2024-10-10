#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <limits>

#include <string.h>
#include <math.h>

using namespace std;

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

void RandomEvent() {
    int randomValue = rand() % 100;

    if (randomValue < 15) {
        system(CLEAR_COMMAND);
        cout << "hic" << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        system(CLEAR_COMMAND);
        cout << "Please, buy anti-hiccup medication for your calculator. It really needs it." << endl;

    }
    else if (randomValue < 80) {
        float A = 0, B = 0;
        float i, j;
        int k;
        float z[1760];
        char b[1760];
        printf("\x1b[2J");
        for (int _ = 0; _ < 50; _++) {
            memset(b, 32, 1760);
            memset(z, 0, 7040);
            for (j = 0; j < 6.28; j += 0.07) {
                for (i = 0; i < 6.28; i += 0.02) {
                    float c = sin(i);
                    float d = cos(j);
                    float e = sin(A);
                    float f = sin(j);
                    float g = cos(A);
                    float h = d + 2;
                    float D = 1 / (c * h * e + f * g + 5);
                    float l = cos(i);
                    float m = cos(B);
                    float n = sin(B);
                    float t = c * h * g - f * e;
                    int x = 40 + 30 * D * (l * h * m - t * n);
                    int y = 12 + 15 * D * (l * h * n + t * m);
                    int o = x + 80 * y;
                    int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                    if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                        z[o] = D;
                        b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0]; //JackEatDonut
                    }
                }
            }
            printf("\x1b[H");
            for (k = 0; k < 1761; k++) {
                putchar(k % 80 ? b[k] : 10);
                A += 0.00004;
                B += 0.00002;
            }
        }
    }
    else if (randomValue < 83) {
        cout << "Did you know that sandwitch is basicly a lasagna?" << endl;
    }
    else if (randomValue < 86) {
        cout << "Did you know that ketchup is basicly a drink?" << endl;
    }
    else if (randomValue < 89) {
        cout << "Did you know that if you were born feet first, your mom was basicly a hat for a moment?" << endl;
    }
    else if (randomValue < 92) {
        cout << "Did you know that this calculator is actually is not sick? IT IS FIRE!" << endl;
        cout << "Halk, probably" << endl;
    }
    else {

        cout << "Keep going, you're doing great!" << endl;
    }
}

int main() {

    char op;
    double num1, num2, result;
    char choice;

    do {
        srand(time(0));
        system(CLEAR_COMMAND);
        cout << "-----------------------------\n";
        cout << "      Console Calculator\n";
        cout << "-----------------------------\n";

        cout << "Enter the first number: ";
        while (!(cin >> num1)) {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;
        while (op != '+' && op != '-' && op != '*' && op != '/') {
            cout << "Invalid operator. Please enter one of (+, -, *, /): ";
            cin >> op;
        }
        cout << "Enter the second number: ";
        while (!(cin >> num2)) {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "-----------------------------\n";

        switch (op) {
        case '+':
            result = num1 + num2;
            system(CLEAR_COMMAND);
            RandomEvent();
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            system(CLEAR_COMMAND);
            RandomEvent();
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            system(CLEAR_COMMAND);
            RandomEvent();
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                system(CLEAR_COMMAND);
                RandomEvent();
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
        }

        cout << "-----------------------------\n";
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); 

    cout << "Exiting Calculator. Goodbye!" << endl;

    return 0;
}
