#include <iostream>
#include <string>

using namespace std;

class astring{
    public:
    astring (string b){
        setaname (b);
    }
    void setaname(string a){
        name = a;
    }
    string getaname(){
        return name;
    }
    private:
    string name;
};
int main(){
    astring ifuo("sup there!");
    cout<<ifuo.getaname()<<endl<<endl;

return 0;
}