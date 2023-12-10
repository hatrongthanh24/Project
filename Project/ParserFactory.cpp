#include "ParserFactory.h"

shared_ptr<IParsable> ParserFactory::create(string type)
{
    shared_ptr<IParsable> parser = NULL;

    if ("Rectangle" == type) {
        return make_shared<RectangleParser>();
    }
    else if ("Square" == type) {
        return make_shared<SquareParser>();
    }
    else if ("Circle" == type) {
        return make_shared<CircleParser>();
    }

    return NULL;
}

