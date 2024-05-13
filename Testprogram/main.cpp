#include <iostream>

using namespace std;

int main(int argc, char ** argv){

    cout << "Executing non compliant program:" << endl;

    int array[10];
    for (int i=0;i<10;){
        array[i] = i+1;
        cout << array[i] << " ";
        i++;
    }
    cout << endl;
    cout << "Finished executing non compliant program." << endl;
    return 0;
}