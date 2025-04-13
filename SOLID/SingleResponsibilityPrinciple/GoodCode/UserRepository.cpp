
#ifndef USERREPOSITORY_CPP
#define USERREPOSITORY_CPP

#include <iostream>
using namespace std;

class UserRepository {
    public:
        void saveUser(const string& username) {
            cout << "Saving user: " << username << endl;
        }

        void deleteUser(const string& username) {
            cout << "Deleting user: " << username << endl;
        }

        void updateUser(const string& username) {
            cout << "Updating user: " << username << endl;
        }

        void findUser(const string& username) {
            cout << "Finding user: " << username << endl;
        }
};


#endif