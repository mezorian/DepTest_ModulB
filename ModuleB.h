#ifndef ModuleB_H
#define ModuleB_H

#include "mezorian/DepTest_Logging/Logger.h"

namespace submodule_b {

    using Logger = logger10::Logger;

    class ModuleB {
        public:
            ModuleB() {}
            void doSmth(){
                Logger l;
                l.log("ModuleB is doing smth");
            }
    };

}

#endif // ModuleB_H
