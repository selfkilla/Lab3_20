#ifndef PRINTER_H
#define PRINTER_H

#include "datagr.h"

class Printer
{
public:
    Printer();
    DataGr getData();
};

class PrintDataTypeA : Printer
{

};

class PrintDataTypeB : Printer
{

};

#endif // PRINTER_H
