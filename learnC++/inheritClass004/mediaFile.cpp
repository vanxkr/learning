#include "mediaFile.h"
MediaFile::MediaFile() {
    theQuality = mid;
}

MediaFile::~MediaFile() {
}

void MediaFile::setTheQuality(quality theQuality) {
    this->theQuality = theQuality;
}

quality MediaFile::getTheQuality() {
    return theQuality;
}
