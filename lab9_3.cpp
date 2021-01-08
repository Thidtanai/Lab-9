#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
  ifstream read;
  read.open("score.txt");
  int N = 0;
  float Xbar = 0;
  string textline;
  while(getline(read,textline)){
    Xbar += atof(textline.c_str());
    N++;
  }
  float M = Xbar/N;
    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << M << endl;
  read.close();
  read.open("score.txt");
  float Xbarsq = 0;
  while(getline(read,textline)){
    Xbarsq += pow(atof(textline.c_str()),2);
  }
  float std = sqrt(Xbarsq/N - pow(M,2));
    cout << "Standard deviation = " << std;
  read.close();
}