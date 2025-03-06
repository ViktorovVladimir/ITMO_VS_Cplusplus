#include "TriangleBase.h"

//---------------------------------------------------
//--.
tuple<double, double, double> TriangleComposition::getSedeLength()
{
    //--.
    double sideLen1 = a.distanceTo(b);
    double sideLen2 = b.distanceTo(c);
    double sideLen3 = c.distanceTo(a);
    //--.
    return make_tuple(sideLen1, sideLen2, sideLen3);
}

//---------------------------------------------------
//--.
double TriangleComposition::getPerimetr()
{
    auto resSlen = getSedeLength();
    return get<0>(resSlen) + get<1>(resSlen) + get<2>(resSlen);
}
