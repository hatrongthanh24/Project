#include <iostream>
#include <iomanip>
#include "ParserFactory.h"
#include "IShape.h"
#include <memory>
#include "NormalDisplayer.h"
#include "RowDisplayer.h"
#include "IDisplayer.h"
#include "Utils.h"
#include "ShapeLoader.h"

int main()
{
    vector<int> widths = {
        15, 11, 28
    };
    const string FILENAME = "shape.txt";
    auto dao = ShapeLoader::instance();
    auto f = ParserFactory::instance();
    shared_ptr<IDisplayer> normalDisplayer = std::make_shared<NormalDisplayer>();
    shared_ptr<IDisplayer> rowDisplayer = std::make_shared<RowDisplayer>(widths);
    
    vector <string> rawData=dao->loadShape(FILENAME);
    vector<std::shared_ptr<IShape>> shapes;

    for (int i = 0; i < rawData.size(); i++) {
        vector<string> tokens = Utils::String::split(rawData[i], ": ");
        shared_ptr<IParsable> parser = f->create(tokens[0]);
        auto parseResult= parser->parse(tokens[1]);

        if (get<0>(parseResult) != false) {
            shapes.push_back(get<1>(parseResult));
        }
    }

    cout << "Reading shapes.txt..." << endl;
    cout << "Found " << shapes.size() << "/" << rawData.size() << " shapes." << endl;

    for (int i = 0; i < shapes.size(); i++) {
        cout << i + 1 << ". ";
        shapes[i]->accept(normalDisplayer);
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < shapes.size(); i++) {
        cout << "|" << i + 1 << "|";
        shapes[i]->accept(rowDisplayer);
        cout << endl;
    }
  
}

