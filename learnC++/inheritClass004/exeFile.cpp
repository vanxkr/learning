#include "exeFile.h"
ExeFile::ExeFile() {
    theAllRight = guest;
}

ExeFile::~ExeFile() {
}

void ExeFile::setTheAllRight(allRight theRght) {
    this->theAllRight = theAllRight;
}

allRight ExeFile::getTheAllRight() {
    return theAllRight;
}

