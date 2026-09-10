#include<iostream>
using namespace std;


class Matrix{
    private:
    int a[2][2];
    public:
    void input(){
       // cout<<"Enter index 0 1"<<endl;
        for(int i = 0;i<2;i++){
            for(int j = 0; j < 2 ;j++){
                cout<<"Enter index"<<i  << j<<endl;
                cin >>a[i][j];
            }
        }
    }
    
    Matrix operator+(Matrix m){ //Accessing insdie the class
    Matrix temp;
    for(int i = 0;i<2;i++){
            for(int j = 0; j < 2 ;j++){
                temp.a[i][j] = a[i][j]+ m.a[i][j];
            }
        }
    
    return temp;
    }
    Matrix operator-(Matrix m);
    void display()
    {   
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
              cout << a[i][j] << " ";
            }
            cout << endl;
        }
}

};

 
Matrix Matrix::operator-(Matrix m){ //Accessing outside the class
    Matrix temp;
    for(int i = 0;i<2;i++){
            for(int j = 0; j < 2 ;j++){
                temp.a[i][j] = a[i][j]- m.a[i][j];
            }
        }
    return temp;

 }

 int main(){
    Matrix m1,m2,m3,m4;
    
    cout<<"Enter 1st matrix element"<<endl;
    m1.input();
    m1.display();
    cout<<"Enter 1st matrix element"<<endl;
    m2.input();
    m2.display();
    cout<<"Addtion of matrix is: "<<endl;
    m3 = m1 + m2;
    m3.display();
    cout<<"Subtraction of matrix is: "<<endl;
    m4 = m1 - m2;
    m4.display();
    


    return 0;
 }