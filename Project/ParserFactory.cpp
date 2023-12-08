#include "ParserFactory.h"

IParsable* ParserFactory::create(string type)
{
    IParsable* parser = NULL;

    if ("Rectangle" == type) {
        return new RectangleParser();
    }
    else if ("Square" == type) {
        return new SquareParser();
    }
    else if ("Circle" == type) {
        return new CircleParser();
    }

    return NULL;
}

