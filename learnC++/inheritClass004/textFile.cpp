#include "textFile.h"
TextFile::TextFile() {
    coding = 0; // ASCII
}

TextFile::~TextFile() {
}

void TextFile::setCoding(int coding) {
    this->coding = coding;
}

int TextFile::getCoding() {
    return coding;
}
