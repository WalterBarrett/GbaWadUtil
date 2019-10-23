#ifndef WADPROCESSOR_H
#define WADPROCESSOR_H

#include <QtCore>
#include "wadfile.h"

class WadProcessor : public QObject
{
    Q_OBJECT
public:
    explicit WadProcessor(WadFile& wad, QObject *parent = nullptr);

    bool ProcessWad();

private:

    bool ProcessLevel(quint32 lumpNum);

    WadFile& wadFile;

};

#endif // WADPROCESSOR_H