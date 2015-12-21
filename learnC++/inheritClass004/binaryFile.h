#pragma once
#include "file.h"
class BinaryFile: public File {
public:
    BinaryFile();
    ~BinaryFile();

    void setInSystem(string inSystem);
    string getInSystem();
protected:
private:
    string inSystem;
};
