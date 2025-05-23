#include <iostream>
#include <cmath>

class Point2d{
private:
  double m_x {0};
  double m_y {0};
public:
  constexpr Point2d() = default; //default constructor
  constexpr Point2d(double x, double y): m_x {x}, m_y {y}{} // list constructor for (double, double)

  void print() const{
    std::cout << "Point2d(" << m_x << "," << m_y << ")" << "\n";   
  }

  double distanceTo(Point2d point2d) const{
    return std::sqrt((m_x - point2d.m_x) * (m_x - point2d.m_x) + 
                     (m_y - point2d.m_y) * (m_y - point2d.m_y)); 
  }
};


int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}
