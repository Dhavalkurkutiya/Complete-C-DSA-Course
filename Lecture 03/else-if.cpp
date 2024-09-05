#include <iostream>
using namespace std;

int main() {
    int marks = 90;

    if (marks >= 90)
    {
        cout << "Grade A" << endl;
    }
    else if(marks >= 80 && marks < 90){
        cout << "Grade B" << endl;
    }
    else{
        cout << "Grade C" << endl;
    }
    return 0;
}