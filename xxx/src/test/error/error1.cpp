include <iostream>   // include error

using namespace stds; // namespace error

int main()
{  
    double radius = 11;
    double pi  = 3.14;
    double sphere_volume = (4/3)*pi*(radius * radius * radius);
    double surface_area = 4 * pi * (radius * radius);
    cout << "Volume = " << sphere_volume;
    cout << "Area = " << surface_area // missing a semi-colon 

    return 0;
}
