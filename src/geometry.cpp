#define _CRT_SECURE_NO_WARNINGS

#include <Library.h>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <math.h>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

vector<cir> Vec_of_Circles;

void File_Reading()
{
    string read;
    ifstream write("input.txt");
    while (getline(write, read)) {
        ReadCircle(read);
        Vec_of_Circles.emplace_back(X, Y, R);
    }
}

int main(int argc, char* argv[])
{
    File_Reading();
    for (auto& cir : Vec_of_Circles) {
        printf("Circle(%f %f,%f)\n", cir.X, cir.Y, cir.R);
        float area = pi * cir.R * cir.R;
        printf("area of Circle: %f\n", area);
        float per = 2 * pi * cir.R;
        printf("per of Circle: %f\n", per);
        for (auto& cir_next : Vec_of_Circles) {
            if (cir != cir_next && CircleCircleIntersect(cir, cir_next)) {
                printf("intersect\n");
                printf("Circle(%f %f,%f)\n\n",
                       cir_next.X,
                       cir_next.Y,
                       cir_next.R);
            }
        }
    }
}
