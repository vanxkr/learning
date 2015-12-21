#include "iniFile.h"
IniFile::IniFile() {
    forProgram = "system";
}

IniFile::~IniFile() {
}

void IniFile::setForProgram(string forProgram) {
    this->forProgram = forProgram;
}

string IniFile::getForProgram() {
    return forProgram;
}
