
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool validateTransaction(const unordered_map<string, int>& entries) {
    int totalDebit = 0;
    int totalCredit = 0;

    for (const auto& entry : entries) {
        if (entry.second < 0) {
            totalCredit += entry.second;
        }
        else {
            totalDebit += entry.second;
        }
    }

    return totalDebit == totalCredit;
}

int main() {
    // Sample transaction entries
    unordered_map<string, int> entries = {
        {"Account A", 100},
        {"Account B", -50},
        {"Account C", -50}
    };

    bool isValid = validateTransaction(entries);

    if (isValid) {
        cout << "Transaction is valid." << endl;
    }
    else {
        cout << "Transaction is not valid." << endl;
    }

    return 0;
}


//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//struct Entry {
//    string account;
//    int amount;
//};
//
//void generateTrialBalance(const Entry* entries, int size) {
//    unordered_map<string, int> accountBalances;
//
//    // Calculate account balances
//    for (int i = 0; i < size; ++i) {
//        accountBalances[entries[i].account] += entries[i].amount;
//    }
//
//    // Print trial balance
//    cout << "Trial Balance" << endl;
//    cout << "-------------" << endl;
//
//    for (const auto& entry : accountBalances) {
//        cout << entry.first << ": " << entry.second << endl;
//    }
//}
//
//int main() {
//    // Sample ledger entries
//    Entry entries[] = {
//        {"Account A", 100},
//        {"Account B", -50},
//        {"Account C", -50},
//        {"Account D", 200},
//        {"Account E", -150}
//    };
//    int size = sizeof(entries) / sizeof(entries[0]);
//
//    generateTrialBalance(entries, size);
//
//    return 0;
//}



