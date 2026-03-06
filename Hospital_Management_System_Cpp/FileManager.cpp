#include "FileManager.h"
using namespace std;

vector<string> FileManager::readAllLine(string path) {
    vector<string> lines;
    ifstream file(path);

    if (!file.is_open()) {
        cerr << "Error opening file: " << path << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}

string FileManager::readLine(string path, int index) {
    ifstream file(path);
    if (!file.is_open()) {
        cerr << "Error opening file: " << path << endl;
        return "";
    }

    string line;
    int current_line = 0;

    while (getline(file, line)) {
        if (current_line == index) {
            file.close();
            return line;
        }
        current_line++;
    }

    file.close();
    return "";
}

void FileManager::writeAllLines(string path, vector<string> lines) {
    ofstream file(path);
    if (!file.is_open()) {
        cerr << "Error opening file for writing: " << path << endl;
        return;
    }

    for (const string& line : lines) {
        file << line << endl;
    }

    file.close();
}

void FileManager::writeToLine(string path, string line, int index) {
    vector<string> lines = readAllLine(path);
    if (index < 0 || index >= lines.size()) {
        cerr << "Index out of range: " << index << endl;
        return;
    }

    lines[index] = line;
    writeAllLines(path, lines);
}

void FileManager::appendLine(string path, string line) {
    ofstream file(path, ios::app);
    if (!file.is_open()) {
        cerr << "Error opening file for appending: " << path << endl;
        return;
    }

    file << line << endl;
    file.close();
}

bool FileManager::fileExists(string path) {
    return filesystem::exists(path);
}


void FileManager::clearFile(string path) {
    ofstream file(path, ios::trunc);
    if (!file.is_open()) {
        cerr << "Error opening file to clear: " << path << endl;
        return;
    }

    file.close();
}
