
/******************************
Program: DnD Character Creator
Author: Connor Hopkins
Time Log:
    7:15-8:40

*******************************/

// Import libraries.
#include <iostream>
#include <fstream>
#include <string>
#include <map>

// Gets a name for the DnD character.
std::string getName() {
    std::string name = "";
    std::cout << "Enter your character's name: ";
    std::cin >> name;
    return name;
}

// Prompts for the character's starting level.
int getLevel() {
    int level = 0;
    std::cout << "Enter your character starting level: ";
    std::cin >> level;
    return level;
}

// Displays the available DnD Classes.
void displayClasses() {
    std::cout << "Select a DnD Class:";
    std::cout << "\t1) Barbarian\n";
    std::cout << "\t2) Druid\n";
    std::cout << "\t3) Monk\n\n";
    std::cout << "\t4) Paladin\n";
    std::cout << "\t5) Ranger\n";
    std::cout << "\t6) Rogue\n";
    std::cout << "\t7) Warlock\n";
}

// Prompts for the character's DnD Class.
std::string getClass() {
    std::string characterClass = "";
    displayClasses();
    std::cin >> characterClass;
    return characterClass;
}

void readFeatsFile(std::map<std::string, std::string> feats) {
    // Step 1: Open the file
    std::ifstream inputFile("FeatsTest.txt");

    // Step 2: Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "File failed to open.";
    }

    // Step 3: Read the file content line by line
    std::map<std::string, std::string> featsFile;
    std::string line;
    int i_line = 0;

    while (std::getline(inputFile, line)) {
        feats[i_line] = line;
        i_line++;
    }

    // Step 4: Close the file
    inputFile.close();
}

std::map<std::string, std::string> getFeats() {
    std::map<std::string, std::string> feats;

    return feats;
}

void displayFeats() {
    
}

// Driver of the program.
int main()
{
    readFeatsFile();
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
