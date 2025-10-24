#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

std::string findAndReplace(const std::string &s1, const std::string &s2,
                           const std::string &line) {
    std::string replaced_line = line;
    std::string::size_type res = 0;
    while ((res = replaced_line.find(s1, res)) != std::string::npos) {
        replaced_line.erase(res, s1.length());
        replaced_line.insert(res, s2);
        res += s2.length();
    }

    return replaced_line + '\n';
}

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
    std::string line;
    while (std::getline(readFile, line)) {
        writeFile << findAndReplace(s1, s2, line);
    }
    return 0;
}
