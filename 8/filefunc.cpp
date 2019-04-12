//
// Created by sym on 4/12/19.
//
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int LIMIT = 5;

void file_it(ostream &os, double fo, const double fe[],int n);

int main(){

    cout<<"hello world!"<<endl;
    const char* fn = "ep-data.txt";
    ofstream fout;
    fout.open(fn);
    cout<<fout.is_open()<<endl;
    if(!fout.is_open()){
        cout<<"can't open fn"<<endl;
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter the focal length of your"<<"telescope objective in mm:";

    cin >> objective;

    cout << objective <<endl;

    double eps[LIMIT];

    cout<< "Enter the focal lengths,in mm,of "<< LIMIT << "eyepieces \n"<<endl;
    for(int i=0;i<LIMIT;i++){
        cout << "Eyepiece #"<<i+1<<":";
        cin>>eps[i];
    }

}

void file_it(ostream &os, double fo, const double fe[],int n){

    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);

    os.precision(0);
    os<<"Focal length of objective: "<<fo<<" mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os<<"f eyepiece";
    os.width(15);
    os<<"magnification"<<endl;
    for (int i = 0; i < n; ++i) {
        os.width(12);
        os<<fe[i];
        os.width(15);
        os<<int(fo/fe[i] + 0.5) <<endl;
    }
    os.setf(initial);
}