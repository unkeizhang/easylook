#include "rdr.h"

int CRdr::getRdrFromString(string strRdr){
    int pos = 0;
    strImsi = strRdr.substr(pos,16);
    pos += 16;
    strImei = strRdr.substr(pos,16);
    pos += 16;
    strMsisdn = strRdr.substr(pos,26);
    pos += 26;
    strFirstCgi = strRdr.substr(pos,13);
    pos += 13;
    strLastCgi = strRdr.substr(pos,13);
    pos += 13;
    strOtherMsisdn = strRdr.substr(pos,26);
    pos += 26;
    strMsc = strRdr.substr(pos,26);
    pos += 26;
    strMsrn = strRdr.substr(pos,26);
    pos += 26;
    strGsmPi = strRdr.substr(pos,16);
    pos += 16;
    strSncode = strRdr.substr(pos,4);
    pos += 4;
    strCallType = strRdr.substr(pos,2);
    pos += 2;
    strCallStartTime = strRdr.substr(pos,14);
    pos += 14;
    strDuration = strRdr.substr(pos,10);
    pos += 10;
    strIntrunk = strRdr.substr(pos,10);
    pos += 10;
    strOuttrunk = strRdr.substr(pos,10);
    pos += 10;
    strCauseOfTermination = strRdr.substr(pos,1);
    pos += 1;
    strTon = strRdr.substr(pos,2);
    pos += 2;
    strNpi = strRdr.substr(pos,2);
    pos += 2;
    strSourceEi = strRdr.substr(pos,15);
    pos += 15;
    strDestinationEi = strRdr.substr(pos,15);
    pos += 15;
    strOpcode = strRdr.substr(pos,1);
    pos += 1;
    strUplinkVol = strRdr.substr(pos,10);
    pos += 10;
    strDownlinkVol = strRdr.substr(pos,10);
    pos += 10;
    strApnNi = strRdr.substr(pos,63);
    pos += 63;
    strApnOi = strRdr.substr(pos,63);
    pos += 63;
    strGgsnAddress = strRdr.substr(pos,16);
    pos += 16;
    strSgsnAddress = strRdr.substr(pos,16);
    pos += 16;
    strChargeAmt = strRdr.substr(pos,9);
    pos += 9;
    strTapNetRate = strRdr.substr(pos,9);
    pos += 9;
    strSourceFile = strRdr.substr(pos,80);
    pos += 80;
    strTracStartTime = strRdr.substr(pos,14);
    pos += 14;
    strTapTaxRate = strRdr.substr(pos,9);
    pos += 9;
    strMsClass = strRdr.substr(pos,1);
    pos += 1;
    strZpcode = strRdr.substr(pos,6);
    pos += 6;
    strCallDest = strRdr.substr(pos,2);
    pos += 2;
    strTtcode = strRdr.substr(pos,4);
    pos += 4;
    strTwcode = strRdr.substr(pos,4);
    pos += 4;
    strRatedClicks = strRdr.substr(pos,12);
    pos += 12;
    strSpcode = strRdr.substr(pos,4);
    pos += 4;
    strCoid = strRdr.substr(pos,10);
    pos += 10;
    strPartid = strRdr.substr(pos,10);
    pos += 10;
    strDnid = strRdr.substr(pos,10);
    pos += 10;
    strTzcode = strRdr.substr(pos,4);
    pos += 4;
    strTmVersion = strRdr.substr(pos,4);
    pos += 4;
    strUmcode = strRdr.substr(pos,4);
    pos += 4;
    strRtxLfnr = strRdr.substr(pos,4);
    pos += 4;
    strRtxType = strRdr.substr(pos,1);
    pos += 1;
    strGvcode = strRdr.substr(pos,4);
    pos += 4;
    strMccode = strRdr.substr(pos,4);
    pos += 4;
    strCustomerId = strRdr.substr(pos,10);
    pos += 10;
    strBillcycle = strRdr.substr(pos,2);
    pos += 2;
    strRatedFlatAmount = strRdr.substr(pos,12);
    pos += 12;
    strVplcode = strRdr.substr(pos,4);
    pos += 4;
    strEccode = strRdr.substr(pos,4);
    pos += 4;
    strRoamerInd = strRdr.substr(pos,1);
    pos += 1;
    strRoundedVolume = strRdr.substr(pos,12);
    pos += 12;
    strHplcode = strRdr.substr(pos,4);
    pos += 4;
    strSscode = strRdr.substr(pos,4);
    pos += 4;
    strTmcode = strRdr.substr(pos,4);
    pos += 4;
    strRemark = strRdr.substr(pos,80);
    pos += 80;
    strIntraPhone = strRdr.substr(pos,1);
    pos += 1;
    strGrpId = strRdr.substr(pos,5);
    pos += 5;
    strMobileFlag = strRdr.substr(pos,1);
    pos += 1;
    strTimeZoneId = strRdr.substr(pos,4);
    pos += 4;
    strContractTariffId = strRdr.substr(pos,4);
    pos += 4;
    strDiscountType = strRdr.substr(pos,1);
    pos += 1;
    strDiscountValue = strRdr.substr(pos,9);
    pos += 9;
    strSurCharge = strRdr.substr(pos,9);
    pos += 9;
    strContentCharge = strRdr.substr(pos,9);
    pos += 9;
    strDeliveryCharge = strRdr.substr(pos,9);
    pos += 9;

    return 0;
}

string CRdr::printToString(){
    string strRdr;
    strRdr = "msisdn:" + strMsisdn +  "\n{\n"
    "\timsi:                    " + strImsi + "\n" +
    "\timei:                    " + strImei + "\n" +
    "\tmsisdn:                  " + strMsisdn + "\n" +
    "\tfirst_cgi:               " + strFirstCgi + "\n" +
    "\tlast_cgi:                " + strLastCgi + "\n" +
    "\tother_msisdn:            " + strOtherMsisdn + "\n" +
    "\tmsc:                     " + strMsc + "\n" +
    "\tmsrn:                    " + strMsrn + "\n" +
    "\tgsm_pi:                  " + strGsmPi + "\n" +
    "\tsncode:                  " + strSncode + "\n" +
    "\tcall_type:               " + strCallType + "\n" +
    "\tcall_start_time:         " + strCallStartTime + "\n" +
    "\tduration:                " + strDuration + "\n" +
    "\tintrunk:                 " + strIntrunk + "\n" +
    "\touttrunk:                " + strOuttrunk + "\n" +
    "\tcause_of_termination:    " + strCauseOfTermination + "\n" +
    "\tton:                     " + strTon + "\n" +
    "\tnpi:                     " + strNpi + "\n" +
    "\tsource_ei:               " + strSourceEi + "\n" +
    "\tdestination_ei:          " + strDestinationEi + "\n" +
    "\topcode:                  " + strOpcode + "\n" +
    "\tuplink_vol:              " + strUplinkVol + "\n" +
    "\tdownlink_vol:            " + strDownlinkVol + "\n" +
    "\tapn_ni:                  " + strApnNi + "\n" +
    "\tapn_oi:                  " + strApnOi + "\n" +
    "\tggsn_address:            " + strGgsnAddress + "\n" +
    "\tsgsn_address:            " + strSgsnAddress + "\n" +
    "\tcharge_amt:              " + strChargeAmt + "\n" +
    "\ttap_net_rate:            " + strTapNetRate + "\n" +
    "\tsource_file:             " + strSourceFile + "\n" +
    "\ttrac_start_time:         " + strTracStartTime + "\n" +
    "\ttap_tax_rate:            " + strTapTaxRate + "\n" +
    "\tms_class:                " + strMsClass + "\n" +
    "\tzpcode:                  " + strZpcode + "\n" +
    "\tcall_dest:               " + strCallDest + "\n" +
    "\tttcode:                  " + strTtcode + "\n" +
    "\ttwcode:                  " + strTwcode + "\n" +
    "\trated_clicks:            "  +  strRatedClicks  +  "\n"  +
    "\tspcode:                  " + strSpcode + "\n" +
    "\tco_id:                   " + strCoid + "\n" +
    "\tport_id:                 " + strPartid + "\n" +
    "\tdn_id:                   " + strDnid + "\n" +
    "\ttzcode:                  " + strTzcode + "\n" +
    "\ttm_version:              " + strTmVersion + "\n" +
    "\tumcode:                  " + strUmcode + "\n" +
    "\trtx_lfnr:                " + strRtxLfnr + "\n" +
    "\trtx_type:                " + strRtxType + "\n" +
    "\tgvcode:                  " + strGvcode + "\n" +
    "\tmccode:                  " + strMccode + "\n" +
    "\tcustomer_id:             " + strCustomerId + "\n" +
    "\tbillcycle:               " + strBillcycle + "\n" +
    "\trated_flat_amount:       " + strRatedFlatAmount + "\n" +
    "\tvplcode:                 " + strVplcode + "\n" +
    "\teccode:                  " + strEccode + "\n" +
    "\troamer_ind:              " + strRoamerInd + "\n" +
    "\trounded_volume:          " + strRoundedVolume + "\n" +
    "\thplcode:                 " + strHplcode + "\n" +
    "\tsccode:                  " + strSscode + "\n" +
    "\ttmcode:                  " + strTmcode + "\n" +
    "\tremark:                  " + strRemark + "\n" +
    "\tintraphone:              " + strIntraPhone + "\n" +
    "\tgrp_id:                  " + strGrpId + "\n" +
    "\tmobile_flag:             " + strMobileFlag + "\n" +
    "\ttime_zone_id:            " + strTimeZoneId + "\n" +
    "\tcontract_tariff_id:      " + strContractTariffId + "\n" +
    "\tdiscount_type:           " + strDiscountType + "\n" +
    "\tdiscount_value:          " + strDiscountValue + "\n" +
    "\tsur_charge:              " + strSurCharge + "\n" +
    "\tcontent_charge:          " + strContentCharge + "\n" +
    "\tdelivery_charge:         " + strDeliveryCharge + "\n" +
    "}\n";

    return strRdr;
}
