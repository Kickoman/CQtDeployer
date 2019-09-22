#ifndef IGNORERULE_H
#define IGNORERULE_H

#include "envirement.h"
#include "libinfo.h"

#include <QString>
#include <deploycore.h>


/**
 * @brief The IgnoreData struct
 * ignore file with label and othe rooles
 */
struct IgnoreData{
    QString label;
    Platform platform = UnknownPlatform;
    LibPriority prority = NotFile;
    Envirement enfirement;
};


class IgnoreRule
{
private:
    QList<IgnoreData> _data;

    bool checkOnlytext(const QString& lib);

    bool check(const LibInfo &info, const QString &ignoreLabel);
public:
    IgnoreRule();
    void addRule(const IgnoreData& rule);
    bool isIgnore(const LibInfo& info);
};

#endif // IGNORERULE_H
