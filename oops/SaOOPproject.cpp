#include <iostream>
#include <fstream>
#include <string>
#include<map>

using namespace std;

string encrypt(string text,string key) {
    string encryptedText = text;
    for (size_t i = 0; i < text.size(); ++i) {
        encryptedText[i] ^= key[i % key.size()];
    }
    return encryptedText;
}


string decrypt(string encryptedText ,string key) {
    return encrypt(encryptedText, key); 
}

int main() {
    map<string, string> user_data;
    
    while (true) {
        cout << "****" << endl;
        cout << "_ 1.REGISTER _" << endl;
        cout << "_ 2.LOGIN __" << endl;
        cout << "_ 3.QUIT ___" << endl;
        cout << "****" << endl;

       int choice;
       cin >> choice;

        if (choice == 1) {
            string username, password;
            cout << "Enter your username: ";
            cin >> username;
            cout << "Enter your password: ";
            cin >> password;
            user_data[username] = password;
            cout << "REGISTRATION SUCCESSFUL."<< endl;

        } 
        else if (choice == 2) {
            string username, password;
            cout << "Enter your username: ";
            cin >> username;
            cout << "Enter your password: ";
            cin >> password;

            if (user_data.find(username) != user_data.end() && user_data[username] == password) {
                 cout << "Login Successful." << endl;

                while (true) {
                    string key;
                    cout<<"Enter the key: ";
                    cin>>key;
                    
                    cout << "****" << endl;
                    cout << "_ 1.ENCRYPT __" << endl;
                    cout << "_ 2.DECRYPT __" << endl;
                    cout << "_ 3.LOGOUT  __" << endl;
                    cout << "****" << endl;
                     
                    int sub_choice;
                    cin >> sub_choice;

                    if (sub_choice == 1) {
                            string inputText;
                            cout << "Enter the text: ";
                            cin.ignore(); // Consume newline character
                            getline(cin, inputText);
                            
                            // Encryption
                            string encryptedText = encrypt(inputText, key);

                            // Save the encrypted text to a file
                            ofstream outFile("encrypted.txt");
                            if (outFile.is_open()) {
                                outFile << encryptedText;
                                cout << "Text encrypted and saved to 'encrypted.txt'." << endl;
                            } 
                            else {
                                cerr << "Failed to open the output file." <<endl;
                                return 1;
                            }
                    } 
                    else if (sub_choice == 2) {
                            
                            string str1;
                            ifstream infile("encrypted.txt");
                            getline(infile,str1);
                            
                            string decryptedText = decrypt(str1, key);

                        // Save the decrypted text to a file
                        ofstream decryptedFile("decrypted.txt");
                        if (decryptedFile.is_open()) {
                                decryptedFile << decryptedText;
                                cout << "Text decrypted and saved to 'decrypted.txt'." <<endl;
                        } 
                        else {
                            cerr << "Failed to open the decrypted file." <<endl;
                            return 1;
                        }
                    } 
                    else if (sub_choice == 3) {
                        cout << "Logged out." << endl;
                        break;
                    } 
                    else {
                        cout << "Invalid option. Please try again." << endl;
                    }
                }
            } 
            else {
                cout << "Invalid username or password. Please try again." << endl;
            }
        } 
        else if (choice == 3) {
            cout << "____" << endl;
            cout << "*           Goodbye!         *" << endl;
            cout << "____" << endl;
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

return 0;
}