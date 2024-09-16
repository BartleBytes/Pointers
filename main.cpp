#include <iostream>
#include <fstream>  // For file input/output
#include <string>   // For string manipulation
#include <algorithm> // For std::reverse function

// Constants for file names
const std::string INPUT_FILE = "CSC450_CT5_mod5.txt";
const std::string OUTPUT_FILE = "CSC450-mod5-reverse.txt";

// Function to append user input to the provided file
void appendToFile() {
    std::string input;
    std::ofstream outFile;

    // Open the file in append mode
    outFile.open(INPUT_FILE, std::ios::app);

    if (!outFile) {
        std::cerr << "Error: Could not open the file for writing." << std::endl;
        return;
    }

    // Get input from the user
    std::cout << "Enter the text you want to append to the file: ";
    std::getline(std::cin, input);

    // Append input to the file
    outFile << input << std::endl;

    // Close the file after writing
    outFile.close();

    // Notify the user
    std::cout << "Data has been appended to the file." << std::endl;
}

// Function to reverse the contents of the input file and store in output file
void reverseFileContents() {
    std::ifstream inFile(INPUT_FILE);
    std::ofstream outFile(OUTPUT_FILE);

    if (!inFile) {
        std::cerr << "Error: Could not open the input file for reading." << std::endl;
        return;
    }

    if (!outFile) {
        std::cerr << "Error: Could not open the output file for writing." << std::endl;
        return;
    }

    // Read the entire file into a string
    std::string fileContents((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());

    // Reverse the content of the string
    std::reverse(fileContents.begin(), fileContents.end());

    // Write the reversed content to the new file
    outFile << fileContents;

    // Close both files
    inFile.close();
    outFile.close();

    // Notify the user
    std::cout << "The contents have been reversed and saved to " << OUTPUT_FILE << "." << std::endl;
}

int main() {
    // Step 1: Append user input to the file
    appendToFile();

    // Step 2: Reverse the contents of the file and save to the new file
    reverseFileContents();

    return 0;
}
