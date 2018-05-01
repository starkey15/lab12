//
// Created by cds15 on 5/1/2018.
//

#include "Box.h"

Box::Box(double l, double w, double h) : length(l), width(w), height(h) {
    //no=op
}

double Box::getVolume() const {
    return length * width * height;
}

bool Box::operator<(const Box &rhs) const {
    return getVolume() < rhs.getVolume();
}

bool Box::operator==(const Box &rhs) const {
    return getVolume() == rhs.getVolume();
}

bool Box::operator>(const Box &rhs) const {
    return !(*this < rhs) && !(*this == rhs);
}

Box Box::operator+(const Box &rhs) const {
    double length{rhs.length + this->length};
    double width{rhs.width + this->width};
    double height{rhs.height + this->height};

    Box box{};
    return box;
}
