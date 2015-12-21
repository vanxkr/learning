#pragma once
#include "xmlFile.h"
#include "mediaFile.h"
enum device{Windows, Linux, OSX, iOS, Android, Other};
class XmlMediaFile: public XmlFile, public MediaFile {
public:
    XmlMediaFile();
    ~XmlMediaFile();
    
    void setTheDevice(device theDevice);
    device getTheDevice();
protected:
private:
    device theDevice;
};
