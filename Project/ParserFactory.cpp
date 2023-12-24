#include "ParserFactory.h"

ParserFactory::~ParserFactory() {

}

shared_ptr<ParserFactory> ParserFactory::instance() {
    if (nullptr == _instance) {
        ParserFactory* temp = new ParserFactory();
        _instance =shared_ptr<ParserFactory>(temp);
    }

    return _instance;
}

ParserFactory::ParserFactory() {
    vector<shared_ptr<IParsable>> items = {
        make_shared<CircleParser>(),
        make_shared<RectangleParser>(),
        make_shared<SquareParser>(),

    };

    for (auto item : items) {
        _services.insert({ item->keyword(), item });
    }
}

shared_ptr<IParsable> ParserFactory::create(string type) {
   shared_ptr<IParsable> f = nullptr;

    if (_services.contains(type)) { 
        return _services[type];
    }

    return f;
}
