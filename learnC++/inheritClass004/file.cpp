#include "file.h"
File::File() {
    name = "new file";
    size = 1024; 
    time_t t;
    putenv("TZ=PST8PDT");
    tzset();
    t = time(NULL);
    fileTime = localtime(&t);
}

File::~File() {
}

void File::setName(string name) {
    this->name = name;
}

string File::getName() {
    return this->name;
}

long long File::getSize() {
    return size;
}

const char *File::getFileTime() {
    return asctime(fileTime);
}
