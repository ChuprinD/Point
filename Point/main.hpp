#include <math.h>
#include <conio.h>
#include <iostream>

using namespace std;

class Point
    {
    private:
        int x_, y_;
    public:   
        Point (int x, int y);
        Point();

        int get_x() { return x_; }
        int get_y() { return y_; }

        void set_x (int x) { x_ = x; }
        void set_y (int y) { y_ = y; }

        Point operator+  (Point rhs);
        Point operator-  (Point rhs);
        int   operator*  (Point rhs);
        Point operator*  (int rhs);
        int   operator%  (Point rhs);
        bool  operator== (Point rhs);
        bool  operator!= (Point rhs);

        friend ostream& operator<< (ostream&, const Point&);

        int get_len();
        double get_angle (Point rhs);
    };

Point::Point (int x, int y):
    x_(x),
    y_(y)
    {};

Point::Point():
    x_(0),
    y_(0)
    {};

Point Point::operator+ (Point rhs)
    {
    return Point(x_ + rhs.x_, y_ + rhs.y_);
    }

Point Point::operator- (Point rhs)
    {
    return Point(x_ - rhs.x_, y_ - rhs.y_);
    }

int Point::operator* (Point rhs)
    {
    return x_ * y_ + rhs.x_ * rhs.y_;
    }
    
Point Point::operator* (int rhs)
    {
    return Point(x_ * rhs, y_ * rhs);
    }  
   
int Point::operator% (Point rhs)
    {
    return x_ * rhs.y_ - y_ * rhs.x_;
    }

ostream& operator<<(ostream& out, const Point& rhs)
    {
    return out << "(" << rhs.x_ << ", " << rhs.y_ << ")";
    }

bool Point::operator== (Point rhs)
    {
    return (x_ == rhs.get_x()) && (y_ == rhs.get_y());
    }

bool Point::operator!= (Point rhs)
    {
    return (!this->operator==(rhs));
    }

int Point::get_len()
    {
    return sqrt((x_ * x_) + (y_ * y_));
    }

double Point::get_angle (Point rhs)
    {
    return acos((this->operator*(rhs)) / (rhs.get_len() * this->get_len()));
    }