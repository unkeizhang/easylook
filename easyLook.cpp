#include "easyLook.h"

using namespace std;

int main(int argc, char* argv[])
{

    string xdr;
    string inName;
    string inType;
    string outName;
    string rdrType = "-rdr";
    string udrType = "-udr";

    CRdr rdrRecord;
    CUdr udrRecord;

    if(argc != 3){
        cout << "usage:	easyLook [-rdr | -udr] filename" << endl;
    }

    inType = argv[1];
    inName = argv[2];
    ifstream inFile(inName.c_str());
    outName = inName + ".out";
    ofstream outFile(outName.c_str());


    if (inType == rdrType){
        cout << "parse rdr begin!" << endl;
        while (getline(inFile,xdr)) {
            if (xdr.length() < 100){
                continue;
            }
            rdrRecord.getRdrFromString(xdr);
            outFile << rdrRecord.printToString() << endl;
        }
        cout << "parse rdr end!" << endl;
    }else if(inType == udrType){
        cout << "parse udr begin!" << endl;
        while (getline(inFile,xdr)) {
            if (xdr.length() < 100){
                continue;
            }
            udrRecord.getUdrFromString(xdr);
            outFile << udrRecord.printToString() << endl;
        }
        cout << "parse udr end!" << endl;
    }else{
        cout << "usage:	easyLook [-rdr | -udr] filename" << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}
