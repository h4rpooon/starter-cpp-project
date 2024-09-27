#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    // double scores[]{80.5, 81, 98, 67, 77};

    // for (int i = 0; i < 5; i++){
    //     cout << "Score " << (i +1) << ": " << scores[i] << (scores[i] < 70 ? "*" : "") << endl;
    // }

    // for (double score : scores){
    //     cout << score << endl;
    // }

    // array <char, 4> html {'H', 'T', 'M', 'L'};
    // for (int i = 0; i < html.size(); i++){
    //     cout << setw(i + 1) << html[i] << endl;
    // }

    // int count = 0;
    // int n, min, max;
    // double sum;

    // vector <char> numbers;

    // do {
    //     cout << "Enter a positive number that is a multiple of 3: ";
    //     cin >> n;

    //     if (n > 0 && n % 3 == 0){
    //         numbers.push_back(n);

    //         if (count == 0){
    //             min = max = sum = n;
    //         }
    //         else {
    //             if (n < min) min = n;
    //             if (n > max) max = n;
    //             sum += n;
    //         }
    //         count++;
    //     }
    //     else {
    //         cout << "Invalid number" << endl;
    //     }
    // } while (count < 5);

    // for (int n : numbers){
    //     cout << n << ", ";
    // }
    // cout << endl;

    string greeting = "Hello, World!";
    int spaceCount {0};

    for(char c : greeting){
        if (c != ' ') spaceCount++;
        cout << c << "  ";
    }

    cout << endl << "String size: " << greeting.size() << " Without spaces: " << spaceCount << endl;

    greeting.erase(7, 10);
    cout << greeting << endl;

    greeting.replace(7, 11, "John");
    cout << greeting << endl;

    return 0;
}