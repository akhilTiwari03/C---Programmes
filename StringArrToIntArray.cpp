//  string to 2d array

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>
#include <algorithm>

bool isNotDigit(char c) {
    return !(isdigit(c) || c == '-');
}

int main() {
    using namespace std;

    string input = "(1,-2,3),(-4,5,-6),(7,8,9)"; // Example input string
    vector<vector<int>> intArray; // 2D integer array

    stringstream ss(input); // Create a stringstream to read the input string
    string token;

    // Iterate over each substring within parentheses
    while (getline(ss, token, ')')) {
        if (token.empty()) continue; // Skip empty substrings

        // Remove the leading '(' character
        if (token[0] == '(') {
            token = token.substr(1);
        }

        vector<int> row; // Create a vector to store each row of integers
        stringstream row_ss(token); // Create a stringstream to read each row substring

        string number;
        while (getline(row_ss, number, ',')) {
            number.erase(remove_if(number.begin(), number.end(), isNotDigit), number.end());

            if (!number.empty()) {
                int num = stoi(number); // Convert the sanitized number substring to an integer
                row.push_back(num); // Add the integer to the current row vector
            }
        }

        intArray.push_back(row); // Add the row vector to the 2D array
    }

    // Printing the resulting 2D integer array
    for (const auto& row : intArray) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

// string to 1d array

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    using namespace std;

    string input = "1,-2,3,-4,5,-6,7,8,9"; // Example input string
    vector<int> intArray; // 1D integer array

    stringstream ss(input); // Create a stringstream to read the input string
    string token;

    while (getline(ss, token, ',')) {
        int number = stoi(token); // Convert the token substring to an integer
        intArray.push_back(number); // Add the integer to the array
    }

    // Printing the resulting 1D integer array
    for (int num : intArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
