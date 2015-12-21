#include "binaryFile.h"
BinaryFile::BinaryFile() {
    inSystem = "Windows";
}

BinaryFile::~BinaryFile() {
}

void BinaryFile::setInSystem(string inSystem) {
    this->inSystem = inSystem;
}

string BinaryFile::getInSystem() {
    return inSystem;
}
