#include <iostream>
#include <vector>
#include <string>
#include <map>

// Define structures for income and expense entries
struct Entry {
    std::string description;
    double amount;
    std::string date;
    std::string category;
};

// User class with authentication
class User {
public:
    User(std::string username, std::string password) : username(username), password(password) {}
    bool authenticate(std::string enteredPassword) {
        return enteredPassword == password;
    }

private:
    std::string username;
    std::string password;
};

int main() {
    std::vector<Entry> transactions;
    std::map<std::string, double> categories;

    User user("username", "password");

    std::string username, password;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    if (!user.authenticate(password) || username != user.getUsername()) {
        std::cout << "Authentication failed. Exiting...\n";
        return 1;
    }

    char choice;
    do {
        std::cout << "\nPersonal Budget Tracker\n";
        std::cout << "1. Add Income\n";
        std::cout << "2. Add Expense\n";
        std::cout << "3. View Transactions\n";
        std::cout << "4. View Budget Summary\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1':
                // Add income entry
                Entry income;
                income.category = "Income";
                std::cout << "Enter description: ";
                std::cin.ignore();
                std::getline(std::cin, income.description);
                std::cout << "Enter amount: ";
                std::cin >> income.amount;
                std::cout << "Enter date: ";
                std::cin >> income.date;
                transactions.push_back(income);
                break;
            case '2':
                // Add expense entry
                Entry expense;
                expense.category = "Expense";
                std::cout << "Enter description: ";
                std::cin.ignore();
                std::getline(std::cin, expense.description);
                std::cout << "Enter amount: ";
                std::cin >> expense.amount;
                std::cout << "Enter date: ";
                std::cin >> expense.date;
                transactions.push_back(expense);

                // Update category spending
                if (categories.find(expense.category) != categories.end()) {
                    categories[expense.category] += expense.amount;
                } else {
                    categories[expense.category] = expense.amount;
                }
                break;
            case '3':
                // View transactions
                for (const Entry& entry : transactions) {
                    std::cout << "Date: " << entry.date << " | Description: " << entry.description << " | Amount: " << entry.amount << " | Category: " << entry.category << "\n";
                }
                break;
            case '4':
                // View budget summary
                std::cout << "Budget Summary\n";
                for (const auto& pair : categories) {
                    std::cout << "Category: " << pair.first << " | Total Spending: " << pair.second << "\n";
                }
                break;
            case '5':
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != '5');

    return 0;
}
