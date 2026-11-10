#pragma once
#include <string>
using namespace std;

class shape{
    private:
        string inshape;

    public:
        shape(string inshape);
        ~shape();

        virtual void Drawshape();
        virtual float calculatearea();
        virtual float calculateperimeter();

        string Getshapename();
};