// HomeWork6.cpp: определяет точку входа для приложения.
//

#include "HomeWork6v2.h"

using namespace std;

int main() {
    Vector2 a(1, 1);
    Vector2 b(2, 3);
    Vector2 d(2, 1);
    Vector2 c = a + b;
    cout << c.getLen() << endl;
    cout << c.getPhi() << endl;
    cout << c.getPhiDeg() << endl;
    cout << d.polar().r << " " << d.polar().phi << endl;
    cout << c.x << " " << c.y;
    cout << b.kos_scal(a) << endl;
    cout << a.norm().x << " " << a.norm().y << endl;
    cout << a.cahnge_lin_save_angle(2).getLen() << " " << a.cahnge_lin_save_angle(2).getPhi() << " " << a.getLen() << " " << a.getPhi() << endl;
    cout << a.cahnge_angle_save_phi(3.1415926).getLen() << " " << a.cahnge_angle_save_phi(3.1415926).getPhi() << " " << a.getLen() << " " << a.getPhi() << endl;
    cout << a.cos_dist(a) << endl;
    return 0;
}
