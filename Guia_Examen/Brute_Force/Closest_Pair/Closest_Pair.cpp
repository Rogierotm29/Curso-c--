#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main(){

    const double points [10][2]{
        {-2.423, -8.469},
        {5.721, 9.354},
        {6.766, -3.823},
        {4.129, 6.744},
        {5.371, -5.404},
        {-8.101, 0.904},
        {-7.121, 1.38},
        {8.156, 6.039},
        {2.615, 2.077},
        {-0.822, 9.342}
    };

   
    double closest_distance {numeric_limits<float>::max()};
    double  closest_x1 {numeric_limits<float>::max()};
    double closest_x2 {numeric_limits<float>::max()};
    double closest_y1 {numeric_limits<float>::max()};
    double closest_y2 {numeric_limits<float>::max()};

    for(size_t i{0}; i < 10; ++i){
        for(size_t j{i + 1}; j < 10; ++j){
            float dx = points[j][0] - points[i][0];
            float dy = points[j][1] - points[i][1];
            float distance = sqrt(dx * dx + dy * dy);

            if(distance < closest_distance){
                closest_distance = distance;
                closest_x2 = points[j][0];
                closest_x1 = points[i][0];
                closest_y1 = points[i][1];
                closest_y2 = points[j][1];
            }

        }

    }

    cout << "The closest distance is " << closest_distance << endl;
    cout << "With the points x1: " << closest_x1 << " y1: " << closest_y1;
    cout << " x2: " << closest_x2 << " y2: " << closest_y2 << endl;




    return 0;
}