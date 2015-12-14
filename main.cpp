//
//  Lab XI Part I
//
//  Created by Edgar Esparza on 7/15/15.
//

#include <iostream>
#include <cmath>
using namespace std;

struct worker
{   int idNumber;
    int hoursWorked;
    double hourlyRate;
    double earned;
};             //<---NOTICE ";" after {BLOCK }

double income(worker Edgar);


int main() {
    
    worker Edgar;
    Edgar.idNumber=0;
    Edgar.hoursWorked=0;
    Edgar.hourlyRate=0;
    
    cout<<"Please enter the worker's ID number: ";
    cin >>Edgar.idNumber;
    cout<<"How many hours did the worker work: ";
    cin >>Edgar.hoursWorked;
    cout<<"How much does the worker make an hour: ";
    cin >>Edgar.hourlyRate;
    
    
    cout<<"Worker ID: "<<Edgar.idNumber<<endl;
    cout<<"Hours worked: "<<Edgar.hoursWorked<<endl;
    cout<<"Hourly Rate: "<<Edgar.hourlyRate<<endl;
    cout<<"Worker income: "<<income(Edgar);
    return 0;
}

double income(worker Edgar){
    if(Edgar.hoursWorked<=40){
        Edgar.earned=Edgar.hourlyRate*Edgar.hoursWorked;
        return Edgar.earned;
    }else{
        Edgar.earned=(Edgar.hourlyRate*40+(Edgar.hourlyRate*1.5*(Edgar.hoursWorked-40)));
        return Edgar.earned;
    }
    
}
