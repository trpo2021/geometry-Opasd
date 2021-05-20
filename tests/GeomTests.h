#pragma once
#define lest_FEATURE_AUTO_REGISTER 1
#include "Library.h"
#include "lest.hpp"
#include <algorithm>
#include <string>
#include <vector>

#define CASE(name) lest_CASE(specification, name)
static lest::tests specification;

void TestIntersect(lest::env& lest_env)
{
    cir o(1,2,5) ;
    cir o1(1,3,10);
   EXPECT(CircleCircleIntersect(o, o1)==true);
}



CASE("TestPirCir")
{
    TestIntersect(lest_env);
}