#include "Foreign.h"

void main() {
    Person* wp=new Person("John");
    Person* wf = new Foreigner("elintoo");
    Person* wc = new ChianaForeigner("chailyn");

    cout << "Prints the name: " << endl;
    wp->Print(); 
    wf->Print(); 
    wc->Print();
    wc->Person::Print();

    wp = wf; 
    wp->Print(); 

    wp = wc;
    wp->Print();   

    wf->Print("Sera"); 
    wc->Print("Sera");

    wp = new Foreigner("Mario");
    cout << endl;
    cout << "Re=prints the name of the man after the new assignment: " << endl;
    wp->Print(); //

}
//주석1 제거 결과
/*
Prints the name:
        Person.Print(): name is John
        Foreigner.virtual_Print():name = elintoo
        ChinaForeigner.Print() : name- chailyn
        Person.Print(): name is chailyn

        Foreigner.virtual_Print():name = elintoo
        ChinaForeigner.Print() : name- chailyn
        Foreigner.Print() : name = Sera
        Foreigner.Print() : name = Sera

Re=prints the name of the man after the new assignment:
        Foreigner.virtual_Print():name = Mario
*/

//주석2 제거 결과
/*
Prints the name:
        Person.Print(): name is John
        Person.Print(): name is elintoo
        ChinaForeigner.Print() : name- chailyn
        Person.Print(): name is chailyn

        Person.Print(): name is elintoo
        ChinaForeigner.Print() : name- chailyn
        Foreigner.Print() : name = Sera
        Foreigner.Print() : name = Sera

Re=prints the name of the man after the new assignment:
        Person.Print(): name is Mario
 */


