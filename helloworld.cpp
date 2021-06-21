#include <iostream>
#include "vec3.h"
#include "ray.h"

using namespace std;

int main(){
    vec3 v1(1,2,3);
    vec3 v2(4,5,6);

    vec3 v3=v1+v2;

    cout<<v3.x()<<","<<v3.y()<<","<<v3.z()<<endl;
} 

   