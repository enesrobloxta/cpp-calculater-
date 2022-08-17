#include <iostream>
#include <cmath>
#include <cstring>
#include <limits>

using namespace std;

typedef numeric_limits< double > dbl;

double math( double a,double tmp,char x[]){

    if(!strcmp(x,"+")){
        if(tmp == -1234567.1234567)
            cin >> tmp;
        return a+tmp;
    
    }else if(!strcmp(x,"-")){
        if(tmp == -1234567.1234567)
            cin >> tmp;
        return a-tmp;
         
        
    }else if(!strcmp(x,"*")){
        if(tmp == -1234567.1234567)
            cin >> tmp;
         return a*tmp;
        
    }else if(!strcmp(x,"/")){
        if(tmp == -1234567.1234567)
            cin >> tmp;
         return a/tmp;
        
    }else if(!strcmp(x,"q")){
         return sqrt(a);
        
    }else if(!strcmp(x,"p")){
        if(tmp == -1234567.1234567)
            cin >> tmp;
        return pow(a,tmp);

    }else if(!strcmp(x,"a")){
         return abs(a);

    }else if(!strcmp(x,"r")){
        return round(a);

    }else {
        return 0;
    }
    
}
    int main(){

    cout.precision(8);
    double sum=0,num1=0,num2=0;
    char ch[3],ch2[3];
    cout << "Please press enter after every input, for escape type 'end' " <<endl;
    cout << "COMMANDS:" << endl <<
    "multi(*) divid(/) add(+) subtraction(-) "<< endl << 
    "squarroot(q) power(p) abs value(a) round(r)"<< endl;


    cout << "Num1:" << endl;
    cin >> num1;

    

    do{
        cout << "Enter a process if you not gonna enter press 'a' "<<endl;
        cin >> ch;
        // check if the ch is equals to enter
        if(!strcmp(ch,"end"))
            exit(0);
        if(!strcmp(ch,"a") || !strcmp(ch,"A"))
            break;

        num1=math(num1,-1234567.1234567,ch);
        cout << fixed <<num1 << endl;
        
    }while(1);
    
    do{
    
    cout << "Enter a process" << endl;
    cin >> ch2;
    if(!strcmp(ch2,"end"))
        exit(0);

    if(!strcmp(ch2,"a") ||!strcmp(ch2,"q")||!strcmp(ch2,"r")){
        sum=math(num1,0,ch2);
        cout << fixed << sum << endl;
        goto s;
    }


    cout << "Num2:" << endl;
    cin >> num2;
    
    do{
        cout << "Enter a process if you not gonna enter press 'a' "<<endl;
        cin >> ch;
        if(!strcmp(ch,"end"))
            exit(0);
        // check if the ch is equals to enter
        if(!strcmp(ch,"a") || !strcmp(ch,"A"))
            break;

        num2=math(num2,-1234567.1234567,ch);
        cout << fixed <<num2 << endl;
        
    }while(1);

    sum=math(num1,num2,ch2);
    cout << fixed << sum <<  endl <<
    "if you gonna continue press c if not type 'end'" << endl;
    num1=sum;
    s:

    cin >> ch;
    
    if(!strcmp(ch,"end")||!strcmp(ch,"END"))
        break;
    
    }while(1);

    exit(0);

}
