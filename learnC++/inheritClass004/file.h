#pragma once

#include <string>
#include <ctime>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
using namespace std;

class File {
public:
    File();
    ~File();

    void setName(string name);
    string getName();
    long long getSize();
    const char *getFileTime();


protected:
private:
    string name;
    long long size;
    struct tm *fileTime;
};
