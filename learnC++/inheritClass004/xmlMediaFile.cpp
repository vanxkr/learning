#include "xmlMediaFile.h"
XmlMediaFile::XmlMediaFile() {
    theDevice = Windows;
}

XmlMediaFile::~XmlMediaFile() {
}

void XmlMediaFile::setTheDevice(device theDevice) {
    this->theDevice = theDevice;
}

device XmlMediaFile::getTheDevice() {
    return theDevice;
}
