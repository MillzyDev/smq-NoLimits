#pragma once
#include "main.hpp"

#include "beatsaber-hook/shared/utils/hooking.hpp"

namespace NoLimits {
    class Hooks {
    private:
        inline static std::vector<void (*)(Logger &logger)> installFuncs;
    public:
        static void AddInstallFunc(void (*installFunc)(Logger &logger)) {
            installFuncs.push_back(installFunc);
        }

        static void InstallHooks(Logger &logger) {
            for (auto installFunc : installFuncs) {
                installFunc(logger);
            }
        }
    };
}
#define ADD_INSTALL_FUNC(func) \
struct __Register##func { \
    __Register##func() { \
        NoLimits::Hooks::AddInstallFunc(func); \
    } \
}; \
static __Register##func __RegisterInstance##func;