#include <iostream>
#include <vector>

using namespace std;

bool primeFun(int num) {
    if (num < 2 || (num % 2 == 0 && num != 2)) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void primeList(const vector<int>& nums) {
    cout << "\nprime numbers in the list: ";
    for (int num : nums) {
        if (primeFun(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

void primeRange(int start, int end) {
    cout << " \nprime numbers in the range: ";
    for (int num = start; num <= end; ++num) {
        if (primeFun(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    while (true) {
        int choice;
        cout << "\n1) Check if a number is prime.\n"
             << "2) Find prime numbers in a list.\n"
             << "3) Find prime numbers in a range.\n"
             << "4) Exit\n"
             << "Type an option (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                cout << "Type a number: ";
                cin >> num;
                cout << num << (primeFun(num) ? " is a prime number.\n" : " \nisn't a prime number.\n");
                break;
            }
            case 2: {
                int size;
                cout << "Type the size of the list: ";
                cin >> size;
                vector<int> nums(size);
                cout << "Type the numbers:\n";
                for (int& n : nums) {
                    cin >> n;
                }
                primeList(nums);
                break;
            }
            case 3: {
                int start, end;
                cout << "Enter the start of the range: ";
                cin >> start;
                cout << "Enter the end of the range: ";
                cin >> end;
                primeRange(start, end);
                break;
            }
            case 4:
                cout << "\n Thank U!";
                return 0;
            default:
                cout << "Invalid option.\n";
        }
    }
}
