#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> input(){
    string s;
    vector<string> array;
    ifstream file("VanaLeva.txt");
    if(file.is_open()){
            cout << "Dqwdwq";
        while(getline(file, s)){
            array.push_back(s) ;
            //cout << s;


        }
    }
    file.close();
    return array;
}
void pupunt(){

}

void mumunt(){}
void bubunt(){}
int main()
{
    vector<string> array  =input();
    cout << array.size();

    pupunt();
    mumunt();
    bubunt();

    return 0;
}
