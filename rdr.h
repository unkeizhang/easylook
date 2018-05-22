#ifndef _RDR_H_
#define _RDR_H_

#include<string>
#include<string.h>
#include <fstream>
#include <iostream>

#define DATE_SIZE 15

using namespace std;

class CRdr{
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
	string strZpcode;
	string strCallDest;
	string strTtcode;
	string strTwcode;
	string strRatedClicks;
	string strSpcode;
	string strCoid;
	string strPartid;
	string strDnid;
	string strTzcode;
	string strTmVersion;
	string strUmcode;
	string strRtxLfnr;
	string strRtxType;
	string strGvcode;
	string strMccode;
	string strCustomerId;
	string strBillcycle;
	string strRatedFlatAmount;
	string strVplcode;
	string strEccode;
	string strRoamerInd;
	string strRoundedVolume;
	string strHplcode;
	string strSscode;
	string strTmcode;
	string strRemark;
	string strIntraPhone;
	string strGrpId;
	string strMobileFlag;
	string strTimeZoneId;
	string strContractTariffId;
	string strDiscountType;
	string strDiscountValue;
	string strSurCharge;
	string strContentCharge;
	string strDeliveryCharge;

/*
	char imsi[17];
	char imei[17];
	char msisdn[27];
	char first_cgi[14];
	char last_cgi[14];
	char other_msisdn[27];
	char msc[27];
	char msrn[27];
	char gsm_pi[17];
	int sncode;
	int call_type;
	char call_start_time[DATE_SIZE];
	long duration;
	char intrunk[11];
	char outtrunk[11];
	int cause_of_termination;
	char ton[3];
	char npi[3];
	char source_ei[16];
	char destination_ei[16];
	char opcode[2];
	long uplink_vol;
	long downlink_vol;
	char apn_ni[64];
	char apn_oi[64];
	char ggsn_address[17];
	char sgsn_address[17];
	double charge_amt;
	double tap_net_rate;
	char source_file[81];
	char trac_start_time[DATE_SIZE];
	double tap_tax_rate;
	int ms_class;
	int zpcode;
	char call_dest[3];
	int ttcode;
	int twcode;
	long rated_clicks;
	int spcode;
	long co_id;
	long port_id;
	long dn_id;
	int tzcode;
	int tm_version;
	int umcode;
	int rtx_lfnr;
	char rtx_type[2];
	int gvcode;
	int mccode;
	long customer_id;
	char billcycle[3];
	double rated_flat_amount;
	int vplcode;
	int eccode;
	char roamer_ind[2];
	long rounded_volume;
	int hplcode;
	int sccode;
	int tmcode;
	char remark[81];
	char intraphone[2];
	int grp_id;
	char mobile_flag[2];
	int time_zone_id;
	int contract_tariff_id;
	char discount_type[2];
	double discount_value;
	double sur_charge;
	double content_charge;
	double delivery_charge;
*/
public:
    int getRdrFromString(string strRdr);
    string printToString();
};


#endif//_RDR_H_
