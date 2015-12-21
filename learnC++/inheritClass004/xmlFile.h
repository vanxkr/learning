#pragma once
#include "textFile.h"
class XmlFile: public TextFile {
public:
    XmlFile();
    ~XmlFile();

    void setVersion(string version);
    string getVersion();
protected:
private:
    string version;
};
