class EllipticCurve {
public:
    int p {};
    int a {};
    int b {};
};

class Point {
public:
    EllipticCurve curve;
    int x {};
    int y {};
};

class Generator {
public:
    Point point {};
    int order {};
};