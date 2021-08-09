#include <ECC.h>

int main() {

    EllipticCurve the_curve {19, 3, 1};
    Point the_point {the_curve, 10, 13};
    Generator the_gtor {the_point, 17};

}


