#include "service.h"

service::service()
{
    repo = repository();
}
void service::add(Person p){
    repo.add(p);
}
