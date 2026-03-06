#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>

using namespace std;

class FileManager
{
public:
    vector<string> readAllLine(string path);
    string readLine(string path,int index);

    void writeAllLines(string path, vector<string> lines);
    void writeToLine(string path, string line,int index);

    void appendLine(string path, string line);

    bool fileExists(string path);
    void clearFile(string path);
};