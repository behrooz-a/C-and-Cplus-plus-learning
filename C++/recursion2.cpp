# include <iostream>
using namespace std;

// Here the main program from the previous example (recursion2) has broken down into smaller task by calling a function
int SUM(int n );

int main(){
    int x;
    cout << "Enter x:";
    cin>> x;
    cout<< "The sum of the number from 1 to "<< x << " is : "<<  SUM(x) ;
    return 0;
}

int SUM(int n){
    int s=0,i;
    for (int i=1; i<=n; ++i)        

        s=s+i;

    return s;

}
