// 实现了文件夹中的图上所有的类
#include <iostream>
#include "file.h"
#include "textFile.h"
#include "IniFile.h"
#include "xmlFile.h"
#include "binaryFile.h"
#include "mediaFile.h"
#include "exeFile.h"
#include "xmlMediaFile.h"
using namespace std;
int main()
{
    File f;
    f.setName("file");
    cout << f.getName() << endl;
    cout << f.getSize() << endl;
    cout << f.getFileTime();
    cout << "#####################################" << endl;

    TextFile t;
    t.setName("textFile");
    t.setCoding(1);
    cout << t.getName() << endl;
    cout << t.getSize() << endl;
    cout << t.getFileTime();
    cout << t.getCoding() << endl;
    cout << "#####################################" << endl;

    IniFile i;
    i.setName("iniFile");
    i.setCoding(0);
    i.setForProgram("QQ"); 
    cout << i.getName() << endl;
    cout << i.getSize() << endl;
    cout << i.getFileTime();
    cout << i.getCoding() << endl;
    cout << i.getForProgram() << endl;
    cout << "#####################################" << endl;

    XmlFile x;
    x.setName("xmlFile");
    x.setCoding(0);
    x.setVersion("1.1.123");
    cout << x.getName() << endl;
    cout << x.getSize() << endl;
    cout << x.getFileTime();
    cout << x.getVersion() << endl;
    cout << "#####################################" << endl;

    BinaryFile b;
    b.setName("binaryFile");
    b.setInSystem("Linux");
    cout << b.getName() << endl;
    cout << b.getSize() << endl;
    cout << b.getFileTime();
    cout << b.getInSystem() << endl;
    cout << "#####################################" << endl;

    MediaFile m;
    m.setName("mediaFile");
    m.setInSystem("Mac OS X");
    m.setTheQuality(high);
    cout << m.getName() << endl;
    cout << m.getSize() << endl;
    cout << m.getFileTime();
    cout << m.getInSystem() << endl;
    cout << m.getTheQuality() << endl;
    cout << "#####################################" << endl;

    ExeFile e;
    e.setName("exeFile");
    e.setInSystem("Windows");
    e.setTheAllRight(administrator);
    cout << e.getName() << endl;
    cout << e.getSize() << endl;
    cout << e.getFileTime();
    cout << e.getInSystem() << endl;
    cout << e.getTheAllRight() << endl;
    cout << "#####################################" << endl;

    XmlMediaFile xm;
    xm.XmlFile::setName("xmlMediaFile");
    xm.setInSystem("Windows");
    xm.setCoding(0);
    xm.setVersion("2.2.2.222");
    xm.setTheQuality(high);
    xm.setTheDevice(Windows);
    cout << xm.XmlFile::getName() << endl;
    cout << xm.XmlFile::getSize() << endl;
    cout << xm.XmlFile::getFileTime();
    cout << xm.getCoding() << endl;
    cout << xm.getInSystem() << endl;
    cout << xm.getVersion() << endl;
    cout << xm.getTheQuality() << endl;
    cout << xm.getTheDevice() << endl;

    return 0;
}
