#pragma once
#include "binaryFile.h"
enum quality{high, mid, low};
class MediaFile: public BinaryFile {
public:
    MediaFile();
    ~MediaFile();
    void setTheQuality(quality theQuality);
    quality getTheQuality();
protected:
private:
    quality theQuality;
};
