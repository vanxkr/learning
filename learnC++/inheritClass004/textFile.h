#pragma once
#include "file.h"
class TextFile: public File {
public:
    TextFile();
    ~TextFile();

    void setCoding(int coding);
    int getCoding();

protected:
private:
    int coding; // 0: ASCII 1:Unicode
};

