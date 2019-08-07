#ifndef MODULEB_H
#define MODULEB_H

#include "mezorian/DepTest_Logging/Logger.h"

using Logger = logger7::Logger;

class ModuleB {
    public:
        ModuleB() {}
        void doSmth(){
            Logger l;
            l.log("ModuleB is doing smth");
        }
};

#endif // MODULEB_H
