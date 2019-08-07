#ifndef MODULEB_H
#define MODULEB_H

#include "Logger.h"


class ModuleB {
    public:
        ModuleB() {}
        void doSmth(){
            Logger l;
            l.log("ModuleB is doing smth");
        }
};

#endif // MODULEB_H
