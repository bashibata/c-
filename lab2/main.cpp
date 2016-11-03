#include <iostream>
#include "cpoint.h"

using namespace std;
CPoint operator- (CPoint pt1, CPoint pt2);

int CPoint::nCount = 0;
int main()
{
    CPoint c(3,4);
    CPoint a;
    CPoint b;
    cout << c;
    cin >> a;
    a.ShowPoint();
    b = c-a;
    b.ShowPoint();
    //b = a+c;
    //b.ShowPoint();

    return 0;
}

CPoint operator - (CPoint pt1, CPoint pt2)
{
        int tempX,tempY;
        tempX = pt1.GetX()-pt2.GetX();
        tempY = pt1.GetY()-pt2.GetY();
        return CPoint(tempX,tempY);
}
