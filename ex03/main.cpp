
#include "Point.hpp"

int main()
{

    // Point a(0.0f, 0.0f);
    // Point b(4.0f, 0.0f);
    // Point c(2.0f, 4.0f);
    Point a(0.0f, 0.0f);
    Point b(4.0f, 0.0f);
    Point c(2.0f, 4.0f);

    // Point inside(2.0f, 2.0f);
    // Point outside(5.0f, 5.0f);
    // Point edge(2.0f, 0.0f);
    // Point vertex(3.0f, 0.5f);
    Point inside(2.0f, 2.0f);
    Point outside(5.0f, 5.0f);
    Point edge(2.0f, 0.0f);
    Point vertex(0.0f, 0.0f);
 
    std::cout << "Inside point: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside point: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "Edge point: " << bsp(a, b, c, edge) << std::endl;
    std::cout << "Vertex point: " << bsp(a, b, c, vertex) << std::endl;

    return 0;
}
