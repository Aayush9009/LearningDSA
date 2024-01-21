// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     string str1;
//     cout<<"Enter the Text to be added."<<endl;
//     cin>>str1;
//     ofstream out("SampleFile.txt");
//     out<<str1;
//     ifstream in("SampleFileb.txt");
//     string str;
//     getline(in,str);
//     cout<<endl;
//     cout<<str<<endl;
// }

// #include <iostream>
// #include <fstream>

// using namespace std;

// class FileEncryptorDecryptor {
// public:
//     void encryptFile(string inputFileName, string outputFileName, string encryptionKey) {
//         // Open the input file.
//         ifstream inputFile(inputFileName);
//         if (!inputFile.is_open()) {
//             cout << "Error: Could not open input file." << endl;
//             return;
//         }

//         // Open the output file.
//         ofstream outputFile(outputFileName);
//         if (!outputFile.is_open()) {
//             cout << "Error: Could not open output file." << endl;
//             return;
//         }

//         // Read each character from the input file and encrypt it.
//         char ch;
//         while (inputFile.get(ch)) {
//             outputFile << encryptCharacter(ch, encryptionKey);
//         }

//         // Close the input and output files.
//         inputFile.close();
//         outputFile.close();
//     }

//     void decryptFile(string inputFileName, string outputFileName, string decryptionKey) {
//         // Open the input file.
//         ifstream inputFile(inputFileName);
//         if (!inputFile.is_open()) {
//             cout << "Error: Could not open input file." << endl;
//             return;
//         }

//         // Open the output file.
//         ofstream outputFile(outputFileName);
//         if (!outputFile.is_open()) {
//             cout << "Error: Could not open output file." << endl;
//             return;
//         }

//         // Read each character from the input file and decrypt it.
//         char ch;
//         while (inputFile.get(ch)) {
//             outputFile << decryptCharacter(ch, decryptionKey);
//         }

//         // Close the input and output files.
//         inputFile.close();
//         outputFile.close();
//     }

// private:
//     // Encrypts a character using the given encryption key.
//     char encryptCharacter(char ch, string encryptionKey) {
//         // TODO: Implement this function.
//         return ch;
//     }

//     // Decrypts a character using the given decryption key.
//     char decryptCharacter(char ch, string decryptionKey) {
//         // TODO: Implement this function.
//         return ch;
//     }
// };

// int main() {
//     // Get the input and output file names from the user.
//     string inputFileName, outputFileName;
//     cout << "Enter the name of the input file: ";
//     cin >> inputFileName;
//     cout << "Enter the name of the output file: ";
//     cin >> outputFileName;

//     // Get the encryption key from the user.
//     string encryptionKey;
//     cout << "Enter the encryption key: ";
//     cin >> encryptionKey;

//     // Create a new FileEncryptorDecryptor object.
//     FileEncryptorDecryptor fileEncryptorDecryptor;

//     // Encrypt the input file.
//     fileEncryptorDecryptor.encryptFile(inputFileName, outputFileName, encryptionKey);

//     // Decrypt the output file.
//    // fileEncryptorDecryptor.decryptFile(outputFileName, "decrypted.txt", encryptionKey);

//     cout << "Done!" << endl;

//     return 0;
// }






// #include<iostream>
// #include<conio.h>
// #include<string>
// #include<string.h>
// #include<fstream>
// #include<cstdlib>

// using namespace std;

// class passkey
// {
// private:
//     int password, key, k;
// public:
//     passkey();
//     void getkey();
//     int checkkey(int );
//     friend void encrypt(passkey);
//     friend void decrypt(passkey);
// }file1;

// passkey::passkey()
// {
//     password = 88;
// }

// void passkey::getkey()
// {
//     cout << "Enter the key: ";
//     cin >> key;
// }

// int passkey::checkkey(int a)
// {
//     if(a==key)
//         return 1;
//     else
//         return 0;
// }

// char filenaam[40];

// int main()
// {
//      int a, pw, x, k;
//      string c;

//          cout << "Enter the correct password: ";
//      cin>>pw;
//         if(pw!=88)
//         {
//             cout << "Sorry you entered the wrong password" << endl;
//             getch();
//             return 0;
//         }

//      cout << "For ENCRYPTION enter 1\nFor DECRYPTION enter 2\nTo terminate the program enter 3" << endl;
//      cin>> a;
//      if(a==1)
//      {
//          file1.getkey();

//          cout << "Give your file a name\neg: \"Input_Data\"" << endl;
//          cin >> filenaam;

//          strcat(filenaam,".txt");

//         cout << "Enter data to the file" << endl;

//         ofstream InputData(filenaam);

//         while(cin >> c)
//         {
//             InputData << c << " ";
//         }

//         InputData.close();

//         encrypt(file1);

//         getch();

//         return 0;

//      }
//      else if(a==2)
//      {
//          file1.getkey();

//          cout << "Enter name of your file\neg: Input_Data.txt" << endl;
//          cin >> filenaam;

//          strcat(filenaam,".txt");

//         decrypt(file1);

//         getch();

//         return 0;

//      }

//      else if (a==3)
//      {
//          return 0;
//      }
// }

// void encrypt(passkey file)
// {
//     char encfilenaam[50] = "Encrypted_";
//     strcat(encfilenaam,filenaam);

//     int n;

//     srand(file.key);

//     ifstream OutputData(filenaam);

//     char ch[50] = "";

//     ofstream InputData(encfilenaam);

//     OutputData.getline(ch,49);
//     do
//     {
//         n= 1 + rand()%9;
//         for(int i=0; i<strlen(ch); i++)
//         {
//             ch[i] = ch[i] + n;
//         }
//         InputData << ch;
//     }
//     while(OutputData.getline(ch,49));

//     OutputData.close();
//     InputData.close();

//     cout << "File is successfully encrypted"  << endl;
//     cout << "Encrypted data is stored in file with name: " << encfilenaam << endl;
// }

// void decrypt(passkey file)
// {
//     char decfilenaam[50] = "Decrypted_";
//     strcat(decfilenaam,filenaam);

//     int m;

//     srand(file.key);

//     ifstream OutputData(filenaam);

//     char ch[50] = "";

//     ofstream InputData(decfilenaam);

//     OutputData.getline(ch,49);
//     do
//     {
//         m= 1 + rand()%9;
//         for(int i=0; i<strlen(ch); i++)
//         {
//             ch[i] = ch[i] - m;
//         }
//         InputData << ch;
//     }
//     while(OutputData.getline(ch,49));

//     OutputData.close();
//     InputData.close();

//     cout << "File successfully decrypted" << endl;
//     cout << "Decrypted text is stored in " << decfilenaam << endl;
// }







#include <bits/stdc++.h>
#include <fstream>
using namespace std;
 
// encdec class with encrypt() and
// decrypt() member functions
class encdec {
    int key;
 
    // File name to be encrypt
    string file = "geeksforgeeks.txt";
    char c;
 
public:
    void encrypt();
    void decrypt();
};
 
// Definition of encryption function
void encdec::encrypt()
{
    // Key to be used for encryption
    cout << "key: ";
    cin >> key;
 
    // Input stream
    fstream fin, fout;
 
    // Open input file
    // ios::binary- reading file
    // character by character
    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);
 
    // Reading original file till
    // end of file
    while (fin >> noskipws >> c) {
        int temp = (c + key);
 
        // Write temp as char in
        // output file
        fout << (char)temp;
    }
 
    // Closing both files
    fin.close();
    fout.close();
}
 
// Definition of decryption function
void encdec::decrypt()
{
    cout << "key: ";
    cin >> key;
    fstream fin;
    fstream fout;
    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);
 
    while (fin >> noskipws >> c) {
 
        // Remove the key from the
        // character
        int temp = (c - key);
        fout << (char)temp;
    }
 
    fin.close();
    fout.close();
}
 
// Driver Code
int main()
{
    encdec enc;
    char c;
    cout << "\n";
    cout << "Enter Your Choice : -> \n";
    cout << "1. encrypt \n";
    cout << "2. decrypt \n";
    cin >> c;
    cin.ignore();
 
    switch (c) {
    case '1': {
        enc.encrypt();
        break;
    }
    case '2': {
        enc.decrypt();
        break;
    }
    }
}