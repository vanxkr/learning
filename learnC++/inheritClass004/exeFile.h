#pragma once
#include "binaryFile.h"
enum allRight{administrator, guest};
class ExeFile: public BinaryFile {
public:
    ExeFile();
    ~ExeFile();
    void setTheAllRight(allRight theAllRight);
    allRight getTheAllRight();
protected:
private:
    allRight theAllRight;
};
