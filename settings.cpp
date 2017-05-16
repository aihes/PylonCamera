#include "settings.h"

Settings::Settings()
{
    Settings::FilePath = QDir::homePath() + "/" + "images/";
    Settings::FilePrefix = "capture";
}

Settings::~Settings()
{

}

