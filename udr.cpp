#include "udr.h"

int CUdr::getUdrFromString(string strUdr){
    int pos = 0;
    strImsi = strUdr.substr(pos,16);
    pos += 16;
    strImei = strUdr.substr(pos,16);
    pos += 16;
    strMsisdn = strUdr.substr(pos,26);
    pos += 26;
    strFirstCgi = strUdr.substr(pos,13);
    pos += 13;
    strLastCgi = strUdr.substr(pos,13);
    pos += 13;
    strOtherMsisdn = strUdr.substr(pos,26);
    pos += 26;
    strMsc = strUdr.substr(pos,26);
    pos += 26;
    strMsrn = strUdr.substr(pos,26);
    pos += 26;
    strGsmPi = strUdr.substr(pos,16);
    pos += 16;
    strSncode = strUdr.substr(pos,4);
    pos += 4;
    strCallType = strUdr.substr(pos,2);
    pos += 2;
    strCallStartTime = strUdr.substr(pos,14);
    pos += 14;
    strDuration = strUdr.substr(pos,10);
    pos += 10;
    strIntrunk = strUdr.substr(pos,10);
    pos += 10;
    strOuttrunk = strUdr.substr(pos,10);
    pos += 10;
    strCauseOfTermination = strUdr.substr(pos,1);
    pos += 1;
    strTon = strUdr.substr(pos,2);
    pos += 2;
    strNpi = strUdr.substr(pos,2);
    pos += 2;
    strSourceEi = strUdr.substr(pos,15);
    pos += 15;
    strDestinationEi = strUdr.substr(pos,15);
    pos += 15;
    strOpcode = strUdr.substr(pos,1);
    pos += 1;
    strUplinkVol = strUdr.substr(pos,10);
    pos += 10;
    strDownlinkVol = strUdr.substr(pos,10);
    pos += 10;
    strApnNi = strUdr.substr(pos,63); 
    pos += 63;
    strApnOi = strUdr.substr(pos,63);
    pos += 63;
    strGgsnAddress = strUdr.substr(pos,16);
    pos += 16;
    strSgsnAddress = strUdr.substr(pos,16);
    pos += 16;
    strChargeAmt = strUdr.substr(pos,9);
    pos += 9;
    strTapNetRate = strUdr.substr(pos,9);
    pos += 9;
    strSourceFile = strUdr.substr(pos,80);
    pos += 80;
    strTracStartTime = strUdr.substr(pos,14);
    pos += 14;
    strTapTaxRate = strUdr.substr(pos,9);
    pos += 9;
    strMsClass = strUdr.substr(pos,1);
    pos += 1;
    strRejectReason = strUdr.substr(pos,100);
    pos += 100;

    return 0;
}

string CUdr::printToString(){
    string strUdr;
    strUdr = "msisdn:" + strMsisdn +  "\n{\n"
    "\timsi:                    " + strImsi	+ "\n" +
    "\timei:                    " + strImei	+ "\n" +
    "\tmsisdn:                  " + strMsisdn	+ "\n" +
    "\tfirst_cgi:               " + strFirstCgi	+ "\n" +
    "\tlast_cgi:                " + strLastCgi	+ "\n" +
    "\tother_msisdn:            " + strOtherMsisdn	+ "\n" +
    "\tmsc:                     " + strMsc	+ "\n" +
    "\tmsrn:                    " + strMsrn	+ "\n" +
    "\tgsm_pi:                  " + strGsmPi	+ "\n" +
    "\tsncode:                  " + strSncode	+ "\n" +
    "\tcall_type:               " + strCallType	+ "\n" +
    "\tcall_start_time:         " + strCallStartTime	+ "\n" +
    "\tduration:                " + strDuration	+ "\n" +
    "\tintrunk:                 " + strIntrunk	+ "\n" +
    "\touttrunk:                " + strOuttrunk	+ "\n" +
    "\tcause_of_termination:    " + strCauseOfTermination	+ "\n" +
    "\tton:                     " + strTon	+ "\n" +
    "\tnpi:                     " + strNpi	+ "\n" +
    "\tsource_ei:               " + strSourceEi	+ "\n" +
    "\tdestination_ei:          " + strDestinationEi	+ "\n" +
    "\topcode:                  " + strOpcode	+ "\n" +
    "\tuplink_vol:              " + strUplinkVol	+ "\n" +
    "\tdownlink_vol:            " + strDownlinkVol	+ "\n" +
    "\tapn_ni:                  " + strApnNi	+ "\n" +
    "\tapn_oi:                  " + strApnOi	+ "\n" +
    "\tggsn_address:            " + strGgsnAddress	+ "\n" +
    "\tsgsn_address:            " + strSgsnAddress	+ "\n" +
    "\tcharge_amt:              " + strChargeAmt	+ "\n" +
    "\ttap_net_rate:            " + strTapNetRate	+ "\n" +
    "\tsource_file:             " + strSourceFile	+ "\n" +
    "\ttrac_start_time:         " + strTracStartTime	+ "\n" +
    "\ttap_tax_rate:            " + strTapTaxRate	+ "\n" +
    "\tms_class:                " + strMsClass	+ "\n" +
    "\treject_reason:           " + strRejectReason	+ "\n" +
    "}\n";

    return strUdr;
}
