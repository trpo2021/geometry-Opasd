#pragma once
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <math.h>
#include <string>
#include <time.h>
#include <vector>

extern float pi;
extern float X, Y, R;

struct cir {
    float X = 0, Y = 0, R = 0;
    cir(float X1, float Y1, float R1) : X(X1), Y(Y1), R(R1)
    {
    }
    bool operator==(cir& cr1)
    {
        return (this->X == cr1.X) && (this->Y == cr1.Y) && (this->R == cr1.R);
    }
    bool operator!=(cir& cr1)
    {
        return !(*this == cr1);
    }
};
bool CircleCircleIntersect(cir first, cir second);
void ReadCircle(std::string str);
size_t FindCaseIns(std::string str, std::string substr);