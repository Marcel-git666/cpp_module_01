#include <fstream>
#include <iostream>
#include <string>

std::string findAndReplace(const std::string &s1, const std::string &s2,
                           const std::string &line) {
    std::string replaced_line = "";
    std::string::size_type found_pos = 0;
    std::string::size_type last_pos = 0;
    while ((found_pos = line.find(s1, last_pos)) != std::string::npos) {
        replaced_line += line.substr(last_pos, found_pos - last_pos);
        replaced_line += s2;
        last_pos = found_pos + s1.length();
    }
    replaced_line += line.substr(last_pos);
    return replaced_line;
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
    std::string line;
    std::getline(readFile, line, '\0');
    readFile.close();
    std::cout << "Replacing " << s1 << " for " << s2 << '\n';
    std::ofstream writeFile;
    std::string wFilename = filename + ".replace";
    writeFile.open(wFilename.c_str());
    if (!writeFile.is_open()) {
        std::cout << "Error writing to file " << wFilename << '\n';
        return 1;
    }
    writeFile << findAndReplace(s1, s2, line);
    writeFile.close();
    return 0;
}
