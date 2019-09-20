#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1; i<=10; i++){
        for(j=1; j<=11; j++){
            if((i<=2)&&((j>=4-i&&j<=3+i)||(j>=9-i&&j<=8+i))){
                cout << " * ";
            }
            else if((i>=3&&i<=5)&&j>=1){
                cout << " * ";
            }
            else if((i>=6)&&(j>=i-4&&j<=16-i)){
                cout << " * ";
            }
            else{
                cout << "   ";
            }
        }
        cout << endl;
    }
}
