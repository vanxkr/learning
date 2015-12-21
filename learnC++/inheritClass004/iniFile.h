#pragma once
#include "textFile.h"
class IniFile: public TextFile {
public:
    IniFile();
    ~IniFile();

    void setForProgram(string forProgram);
    string getForProgram();

protected:
private:
    string forProgram;
};
