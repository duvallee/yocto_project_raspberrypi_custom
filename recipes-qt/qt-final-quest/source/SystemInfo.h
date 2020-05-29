// ****************************************************************
//
// File: SystemInfo.h
//
// Written by duvallee in 2020
//
// ****************************************************************
#ifndef SYSTEMINFO_H_
#define SYSTEMINFO_H_

#include <QObject>
#include <QString>
#include <QFile>

// ==================================================================================
class SystemInfo : public QObject
{
   Q_OBJECT

   // -------------------------------------------------------------------------------
   Q_PROPERTY(QString getCpuInfo READ getCpuInfo)

// ==================================================================================
public:
   explicit SystemInfo(QObject* parent = nullptr);

   // ----------------------------------------------------------------------------------
   QString getCpuInfo();


// ==================================================================================
signals:

// ==================================================================================
private:
   // ----------------------------------------------------------------------------------
   QString m_processor_info;


};

#endif   // SYSTEMINFO_H_

