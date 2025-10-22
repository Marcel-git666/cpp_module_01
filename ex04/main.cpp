#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Error.\n" << "Usage: ./main filename string1 string2\n";
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream readFile;
    readFile.open(filename.c_str());
    if (!readFile.is_open()) {
        std::cout << "Error reading file " << filename << '\n';
        return 1;
    }
    std::cout << "Replacing " << s1 << " for " << s2 << '\n';
    std::ofstream writeFile;
    std::string wFilename = filename + ".replace";
    writeFile.open(wFilename.c_str());
    if (!writeFile.is_open()) {
        std::cout << "Error writing to file " << wFilename << '\n';
        return 1;
    }

    return 0;
}
