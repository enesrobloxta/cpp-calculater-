#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int hesapla(){

    int x[1000000];
    double sum;
    char ch;
    int i=2;
    cin >> x[1];
    x[0]=x[1];
    cin.ignore();
    cin >> ch;

    x:
    cin.ignore();
    switch(ch){
        case 43://+
        cin >> x[i];
        cin.ignore();
        cin >> ch;
        x[0]+=x[i];
        if(ch == 3){    
            return x[0];
            cout << x[0] << endl;
        }
        else
            i++;
            goto x;
        case 45://-
        cin >> x[i];

        cin.ignore();
        cin >> ch;
        x[0]-=x[i];        
        if(ch == 3){    

            return x[0];
            cout << x[0] << endl;
        }
        else
            i++;
            goto x;
        case 42://*
        cin >> x[i];
        cin.ignore();
        cin >> ch;
        x[0]*=x[i];
        if(ch == 3){    
            
            return x[0];
            cout << x[0] << endl;
        } 
        else
            i++;
            goto x;
        case 47:// /
        cin >> x[i];
        cin.ignore();
        cin >> ch;
        x[0]/=x[i];
        if(ch == 3){    
          
            return x[0];
            cout << x[0] << endl;
        }
        else
            i++;
            goto x;
    }
}

int main(){


    int x[1000000];
    double sum;
    char ch;
    int i=2;
    cin >> x[1];
    x[0]=x[1];
    cin.ignore();
    cin >> ch;

    x:
    cin.ignore();
    switch((int)ch){
        case 43://+
        cin >> x[i];
        cin.ignore();
        cin >> ch;
        x[0]+=x[i];
        if((int)ch == 3){    
            return x[0];
            cout << x[0] << endl;
        }
        else
            i++;
            goto x;
        case 45://-
        cin >> x[i];

        cin.ignore();
        cin >> ch;
        x[0]-=x[i];        
        if((int)ch == 3){    

            return x[0];
            cout << x[0] << endl;
        }
        else
            i++;
            goto x;
        case 42://*
        cin >> x[i];
        cin.ignore();
        cin >> ch;
        x[0]*=x[i];
        if((int)ch == 3){    
            
            return x[0];
            cout << x[0] << endl;
        } 
        else
            i++;
            goto x;
        case 47:// /
        cin >> x[i];
        cin.ignore();
        cin >> ch;
        x[0]/=x[i];
        if((int)ch == 3){    
          
            return x[0];
            cout << x[0] << endl;
        }
        else
            i++;
            goto x;
        }
}
