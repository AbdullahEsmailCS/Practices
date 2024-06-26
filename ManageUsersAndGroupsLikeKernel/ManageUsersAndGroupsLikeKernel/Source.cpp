#include <iostream>
#include <vector>

// User structure
struct User {
    std::string username;
    std::string password;
};

// Group structure
struct Group {
    std::string groupName;
    std::vector<User> members;
};

// Function to create a new user
void createUser(std::vector<User>& users) {
    User newUser;
    std::cout << "Enter username: ";
    std::cin >> newUser.username;
    std::cout << "Enter password: ";
    std::cin >> newUser.password;
    users.push_back(newUser);
    std::cout << "User created successfully.\n";
}

// Function to modify an existing user
void modifyUser(std::vector<User>& users, const std::string& username) {
    for (auto& user : users) {
        if (user.username == username) {
            std::cout << "Enter new password: ";
            std::cin >> user.password;
            std::cout << "User modified successfully.\n";
            return;
        }
    }
    std::cout << "User not found.\n";
}

// Function to delete an existing user
void deleteUser(std::vector<User>& users, const std::string& username) {
    for (auto it = users.begin(); it != users.end(); ++it) {
        if (it->username == username) {
            users.erase(it);
            std::cout << "User deleted successfully.\n";
            return;
        }
    }
    std::cout << "User not found.\n";
}

// Function to create a new group
void createGroup(std::vector<Group>& groups) {
    Group newGroup;
    std::cout << "Enter group name: ";
    std::cin >> newGroup.groupName;
    groups.push_back(newGroup);
    std::cout << "Group created successfully.\n";
}

// Function to add a user to a group
void addUserToGroup(std::vector<Group>& groups, const std::string& groupName, const std::string& username) {
    for (auto& group : groups) {
        if (group.groupName == groupName) {
            for (const auto& user : group.members) {
                if (user.username == username) {
                    std::cout << "User already exists in the group.\n";
                    return;
                }
            }
            User newUser;
            newUser.username = username;
            std::cout << "Enter password for the user: ";
            std::cin >> newUser.password;
            group.members.push_back(newUser);
            std::cout << "User added to the group successfully.\n";
            return;
        }
    }
    std::cout << "Group not found.\n";
}

// Function to remove a user from a group
void removeUserFromGroup(std::vector<Group>& groups, const std::string& groupName, const std::string& username) {
    for (auto& group : groups) {
        if (group.groupName == groupName) {
            for (auto it = group.members.begin(); it != group.members.end(); ++it) {
                if (it->username == username) {
                    group.members.erase(it);
                    std::cout << "User removed from the group successfully.\n";
                    return;
                }
            }
            std::cout << "User not found in the group.\n";
            return;
        }
    }
    std::cout << "Group not found.\n";
}

int main() {
    std::vector<User> users;
    std::vector<Group> groups;

    int choice;
    std::string username, groupName;

    do {
        std::cout << "1. Create user\n";
        std::cout << "2. Modify user\n";
        std::cout << "3. Delete user\n";
        std::cout << "4. Create group\n";
        std::cout << "5. Add user to group\n";
        std::cout << "6. Remove user from group\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            createUser(users);
            break;
        case 2:
            std::cout << "Enter username: ";
            std::cin >> username;
            modifyUser(users, username);
            break;
        case 3:
            std::cout << "Enter username: ";
            std::cin >> username;
            deleteUser(users, username);
            break;
        case 4:
            createGroup(groups);
            break;
        case 5:
            std::cout << "Enter group name: ";
            std::cin >> groupName;
            std::cout << "Enter username: ";
            std::cin >> username;
            addUserToGroup(groups, groupName, username);
            break;
        case 6:
            std::cout << "Enter group name: ";
            std::cin >> groupName;
            std::cout << "Enter username: ";
            std::cin >> username;
            removeUserFromGroup(groups, groupName, username);
            break;
        case 0:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 0);

    return 0;
}