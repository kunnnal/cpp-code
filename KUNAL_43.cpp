       #include <iostream>
       using namespace std;
       class first {
        public:
        int a ,b;
        void assign()
        {a=5 ; b=3;}
        void sum(){
            cout <<a+b<<endl;
        }
        int add(){
            return (a+b);
        }
       };
       
       int main() {
        cout<<"the sum of the values:"<<endl;
        first obj1;
        obj1.assign();
        obj1.sum();     
        int r=obj1.add();
        cout<<"the sum of a+b:" <<r<<endl;
        return 0;
       }