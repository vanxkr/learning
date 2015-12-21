#include "xmlFile.h"
XmlFile::XmlFile() {
    version = "1.0";
}

XmlFile::~XmlFile() {
}

void XmlFile::setVersion(string version) {
    this->version = version;
}

string XmlFile::getVersion() {
    return version;
}
