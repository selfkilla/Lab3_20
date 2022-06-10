#ifndef GENERATORGRAPH_H
#define GENERATORGRAPH_H

#include <iostream>
#include <string>
#include "graph.h"
#include "datagr.h"
class GeneratorGraph
{
private:
//    std::string *type;
//    DataGr *dataGraph;
public:
    GeneratorGraph();
    // Получаем график, передаем данные графика и тип этих данных
    Graph GetGraph(DataGr dataGraph, std::string type);
};

#endif // GENERATORGRAPH_H
