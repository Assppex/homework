
#include <iostream>
#include "Vector2.h"
#define M_PI 3.1415926
using namespace std;
//при определении методов класса вне класса (в друго файле пишем: им€ класса::названи€ метода {.....}   )
// ќпредел€ем конструктор через списки инициализации
Vector2::Vector2() : x(0.0), y(0.0) {};
Vector2::Vector2(double x, double y) : x(x), y(y) {};
Vector2::Vector2(double r, double phi, bool flag) :r(r), phi(phi), flag(1) {};
double Vector2::getLen() {
    return sqrt(x * x + y * y);
}

double Vector2::getPhi() {
    return atan2(y, x);
}
//const в конце значит что метод не мен€ет обьект (его атрибуты) на который действует метод
//чтобы определить оператор называем метод как: operator...., где вместо .... ставитс€ сам опреатор
Vector2 Vector2::operator+(const Vector2& vector) const {
    return Vector2(x + vector.x, y + vector.y);
}
Vector2 Vector2::operator+=(const Vector2& vector) {
    x += vector.x;
    y += vector.y;
    return Vector2(x, y);
}
Vector2 Vector2::operator-(const Vector2& vector) const {
    return Vector2(x - vector.x, y - vector.y);
}
Vector2 Vector2::operator-=(const Vector2& vector) {
    x -= vector.x;
    y -= vector.y;
    return Vector2(x, y);
}
Vector2 Vector2::operator*(const double a) const {
    return Vector2(x * a, y * a);
}
Vector2 Vector2::operator*=(const double a) {
    x *= a;
    y *= a;
    return Vector2(x, y);
}
Vector2 Vector2::operator/(const double a) const {
    return Vector2(x / a, y / a);
}
Vector2 Vector2::operator/=(const double a) {
    x /= a;
    y /= a;
    return Vector2(x, y);
}

bool Vector2::operator==(const Vector2& vector) const {
    if (x == vector.x && y == vector.y) {
        return(1);
    }
    else {
        return(0);
    }
}
bool Vector2::operator!=(const Vector2& vector) const {
    if (x != vector.x && y != vector.y) {
        return(1);
    }
    else {
        return(0);
    }
}



double Vector2::getPhiDeg() {
    return getPhi() * 180 / M_PI;
}

void Vector2::setX(int x) {
    x = x;
}

double Vector2::getX() {
    return x;
}

void Vector2::setY(int y) {
    y = y;
}

double Vector2::getY() {
    return y;
}
//≈сли нет данных на вход, можем использовать атрибуты обьекта класса
Vector2 Vector2::polar() {
    return Vector2(getLen(), getPhi(), 1);
}
double Vector2::kos_scal(const Vector2& vector) const {
    double tmp1 = x * vector.x + y * vector.y;
    double tmp2 = sqrt(x * x + y * y) * sqrt(vector.x * vector.x + vector.y * vector.y);
    double tmp3 = sin(acos(tmp1 / tmp2));
    return(tmp2 * tmp3);
}
Vector2 Vector2::norm() {
    return(Vector2(x / getLen(), y / getLen()));
}
Vector2 Vector2::cahnge_lin_save_angle(double k) {
    return(Vector2(k * x, k * y));
}
Vector2 Vector2::cahnge_angle_save_phi(double k) {
    // k - угол на который надо повернуть тк 2д, то поворот вокруг о’

    return(Vector2(x * cos(k) - y * sin(k), x * sin(k) + y * cos(k)));
}
double Vector2::cos_dist(const Vector2& vector) const {
    double tmp1 = x * vector.x + y * vector.y;
    double tmp2 = sqrt(x * x + y * y) * sqrt(vector.x * vector.x + vector.y * vector.y);
    double tmp3 = tmp1 / tmp2;
    return(tmp3);
}