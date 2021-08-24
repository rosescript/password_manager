#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    ifstream infile;
    ofstream outfile;

    string filename;
    string usertype;
    string cmd;

    cout << "Welcome to the password manager!" << endl << "Are you a new or returning user? (Enter new or returning)" << endl;
    cin >> usertype;

    if (usertype == "new") {
        cout << "Okay, let's get you set up with a password file." << endl << "What would you like to name your file? (ex. filename.txt)" << endl;
        cin >> filename;
        outfile.open(filename);
        cout << "Great. Now what would you like to do? (q or quit to exit)" << endl;
        cout << "Available commands:" << endl << "password generator" << endl << "password list" << endl << "file encryption instructions" << endl << "help" << endl;
        cin >> cmd;
        while ((cmd != "q") && (cmd != "quit")) {
            if ((cmd == "generator") || (cmd == "g")) {
                //insert pass_gen script
            } else if ((cmd ==))
        }
        // okay so like i need a command loop here, and it'll write to the file while the loop runs
        // and remember to close the file when done
        
    } else {
        cout << "Welcome back! Please enter your filename> ";
        cin >> filename;
        // need to account for if filename is incorrect, uhhh maybe if !outfile.good ??
        outfile.open(filename, std::ios_base::app);
        cout << endl << "Great. Now what would you like to do?" << endl;
        // command loop, remember to close the file after.
    }


    /*string usertype;
    string passfile;
    string masterpass;
    string passattempt;
    string newfileName;

    // basically this is for whenever i figure out how to "save" the data
    cout << "Welcome to the password manager!" << endl << "Are you a new or returning user? (Enter new or returning)" << endl;
    cin >> usertype;

    if (usertype == "new") {
        //TODO: ask user what they wanna name their file, create new text file, ask user what the master pass is
        cout << "What would you like to name your password file?" << endl;
        cin >> newfileName;
        // TODO: create the file
        std::ofstream outfile { newfileName + ".txt" };
        cout << "Great. Now let's set a master password. Pick something secure!" << endl;
        cin >> masterpass;
        cout << "Fantastic! Now let's get started with your shiny new password manager!";
    } else if (usertype == "returning") {

        // asks user to enter master pass
        cout << "Please enter the master password: " << endl;
        cin >> passattempt;

        // lets the user into the whole program if passattempt is correct
        if (passattempt == masterpass) {
            cout << "Please enter the name of your password file." << endl;
            cin >> passfile;

            // makes sure the file exists/can be opened
            infile.open(passfile);
            if (!infile.good()) {
                cout << endl << "**Error: unable to open input file '" << passfile << "'" << endl;
                return 0;
            }
        } else {
            cout << "Incorrect password. Goodbye. :) ";
            return 0;
        }
        
    }*/


    return 0;
}