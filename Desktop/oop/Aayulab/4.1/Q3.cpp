#include<iostream>
using namespace std;

class Time{
    private:
    int hrs;
    int min;
    public:
    Time(int h=0,int m =0){
        hrs=h;
        min = m;      
    }

    Time operator+(Time t){
        Time temp;
        temp.hrs = hrs + t.hrs;
        temp.min = min + t.min;

        if (temp.min >= 60)
    {
        temp.hrs++;
        temp.min = temp.min - 60;
    }

        return temp;
    }
    void display(){
        cout<<"Time is: "<<hrs<<" hrs "<<min<<" min"<<endl;
    }

};


int main(){
    Time t1(12,40);
    Time t2(24,50);
    Time t3(t1+t2);

    //t3 = t1+t2;

    t3.display();

    return 0;
}