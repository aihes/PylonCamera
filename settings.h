#ifndef SETTINGS_H
#define SETTINGS_H

#include <iostream>
#include <QtWidgets>
#include <pylon/PylonIncludes.h>

enum SaveMode {All,TimeBased};
enum OutPutFile {Image,Video};


enum Algorithm_AIHE {
    TIME,
    SPACE,
    GRAY
};

enum Resulotion_AIHE {
    FIRST,
    SECOND,
    THIRD
};

using namespace std;
using namespace GenApi;

class Settings
{

public:
    Settings();
    ~Settings();
    int image2save = 200 ;
    gcstring acquisitionFrameRate = "60";
    gcstring exposureTime = "8000";
    gcstring width = "658";
    gcstring height = "492";
    QString FilePath = "";
    QString FilePrefix= "";
    Pylon::EImageFileFormat format;
    Algorithm_AIHE algo = Algorithm_AIHE::GRAY;

    QString myattr;
    QString myvalue;
    int type;
//    SaveMode RecordMethode = SaveMode::All;
//    OutPutFile FileSelection = OutPutFile::Image;
};

#endif // SETTINGS_H
