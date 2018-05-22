#ifndef _UDR_H_
#define _UDR_H_

#include<string>
#include<string.h>
#include <fstream>
#include <iostream>

#define DATE_SIZE 15

using namespace std;

class CUdr{
public:
    string strImsi;
    string strImei;
    string strMsisdn;
    string strFirstCgi;
    string strLastCgi;
    string strOtherMsisdn;
    string strMsc;
    string strMsrn;
    string strGsmPi;
    string strSncode;
    string strCallType;
    string strCallStartTime;
    string strDuration;
    string strIntrunk;
    string strOuttrunk;
    string strCauseOfTermination;
    string strTon;
    string strNpi;
    string strSourceEi;
    string strDestinationEi;
    string strOpcode;
    string strUplinkVol;
    string strDownlinkVol;
    string strApnNi;
    string strApnOi;
    string strGgsnAddress;
    string strSgsnAddress;
    string strChargeAmt;
    string strTapNetRate;
    string strSourceFile;
    string strTracStartTime;
    string strTapTaxRate;
    string strMsClass;
    string strRejectReason;

/*
	"%-16s",  strImsi;
"%-16s",  strImei;
"%-26s",  strMsisdn;
"%-13s",  strFirstCgi;
"%-13s",  strLastCgi;
"%-26s",  strOtherMsisdn;
"%-26s",  strMsc;
"%-26s",  strMsrn;
"%-16s",  strGsmPi;
"%-4d",   strSncode;
"%-2d",   strCallType;
"%-14s",  strCallStartTime;
"%-10ld", strDuration;
"%-10s",  strIntrunk;
"%-10s",  strOuttrunk;
"%-1d",   strCauseOfTermination;
"%-2s",   strTon;
"%-2s",   strNpi;
"%-15s",  strSourceEi;
"%-15s",  strDestinationEi;
"%-1s",   strOpcode;
"%-10ld", strUplinkVol;
"%-10ld", strDownlinkVol;
"%-63s",  strApnNi;
"%-63s",  strApnOi;
"%-16s",  strGgsnAddress;
"%-16s",  strSgsnAddress;
"%-9d",   strChargeAmt;
"%-9d",   strTapNetRate;
"%-80s",  strSourceFile;
"%-14s",  strTracStartTime;
"%-9d",   strTapTaxRate;
"%-1d",   strMsClass;
"%-100s", strRejectReason;
*/
public:
    int getUdrFromString(string strUdr);
    string printToString();
};


#endif//_UDR_H_
