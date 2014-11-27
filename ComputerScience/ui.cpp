#include "ui.h"
using namespace std;

ui::ui()
{
    service = service();
}

void ui::start() {
    string inp
    cout << "Welcome \nEnter command:\nThe commands are: \t add" << endl;
    cin >> inp ;

    if (inp == "add"){
            Person p = Person();
            cin >> p.name >> p.sex >> p.dob >> p.dot;
            service.add(c);
    }


}
