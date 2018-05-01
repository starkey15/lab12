//
// Created by cds15 on 5/1/2018.
//

#include "Box.h"

Box::Box(double l, double w, double h) : (length = l, width = w, height = h) {
    // no-op
}

double Box::getVolume() const {
    return length * width * height;
}
