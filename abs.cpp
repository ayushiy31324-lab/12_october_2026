#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculatearea()=0;
};
class rectangle : public shape{
    public:
    void calculatearea() override{
        int length = 20, breadth = 10;
        cout<<"area of rectangle is"<<length*breadth<<endl;
    }
};
int main(){
    rectangle r;
    r.calculatearea();
    return 0;
}