#ifndef VEC_CPP
#define VEC_CPP
#include <cmath>
class Vector2 {
public:
    double x, y, r, phi;
    bool flag;
    //конструктор
    Vector2();
    Vector2(double x, double y);
    //для ПСК перегрузим конструктор:
    Vector2(double x, double y, bool flag);
    double getLen();

    void setX(int x);
    double getX();
    void setY(int y);
    double getY();

    double getPhi();
    //передвая в функцию что либо по адресу: function(int &a){....} при изменении этого а в функции оно же меняется и в теле программы
    // те если я передаю a=2 следующим образом в функцию где  function(int a){....}, то в функции созадется копия а,
    //  а если по ссылке, то я работаю с адресом в памяти напрямую и меняю переменную и в теле программы
    //операторы

    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator+=(const Vector2& vector);
    Vector2 operator-=(const Vector2& vector);
    Vector2 operator*(const double a) const;
    Vector2 operator/(const double a) const;
    Vector2 operator*=(const double a);
    Vector2 operator/=(const double a);
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;

    //Vector2 operator-=(const Vector2& vector) const;

    double getPhiDeg();
    Vector2 polar();
    double kos_scal(const Vector2& vector) const;
    Vector2 norm();
    Vector2 cahnge_lin_save_angle(double k);
    Vector2 cahnge_angle_save_phi(double k);
    double cos_dist(const Vector2& vector) const;
};
#endif