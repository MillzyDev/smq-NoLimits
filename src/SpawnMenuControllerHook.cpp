#include "Hooks.hpp"

#define UNLIMITED_LIMIT 999

#define UNLIMIT_SPAWNABLE(name)                                                     \
auto name = CRASH_UNLESS(il2cpp_utils::GetFieldValue<Il2CppObject *>(self, #name)); \
il2cpp_utils::SetFieldValue(name, "maxAmount", UNLIMITED_LIMIT);

MAKE_HOOK_FIND_CLASS_UNSAFE_INSTANCE(SpawnMenuController_Start, "GlobalNamespace", "SpawnMenuController", "Start", void,
    Il2CppObject *self
) {
    UNLIMIT_SPAWNABLE(eder22)
    UNLIMIT_SPAWNABLE(mk18)
    UNLIMIT_SPAWNABLE(_590A1)
    UNLIMIT_SPAWNABLE(c1911)
    UNLIMIT_SPAWNABLE(mp5)
    UNLIMIT_SPAWNABLE(mp5K)
    UNLIMIT_SPAWNABLE(crowbar)
    UNLIMIT_SPAWNABLE(katana)
    UNLIMIT_SPAWNABLE(kunai)
    UNLIMIT_SPAWNABLE(sledgehammer)
    UNLIMIT_SPAWNABLE(baseballbat)
    UNLIMIT_SPAWNABLE(stunBaton)
    UNLIMIT_SPAWNABLE(assassinsBlade)
    UNLIMIT_SPAWNABLE(claws)
    UNLIMIT_SPAWNABLE(brassKnuckles)
    UNLIMIT_SPAWNABLE(npcRagdoll)
    UNLIMIT_SPAWNABLE(npcDummy)
    UNLIMIT_SPAWNABLE(npcMelee)
    UNLIMIT_SPAWNABLE(npcShooter)
    UNLIMIT_SPAWNABLE(largeBox)
    UNLIMIT_SPAWNABLE(bridge)
    UNLIMIT_SPAWNABLE(woodenCrate)
    UNLIMIT_SPAWNABLE(explosiveBarrel)
    UNLIMIT_SPAWNABLE(woodenTable)
    UNLIMIT_SPAWNABLE(gunTarget)
    UNLIMIT_SPAWNABLE(glassBottle)
    UNLIMIT_SPAWNABLE(shoppingCart)
    UNLIMIT_SPAWNABLE(largeBall)
    UNLIMIT_SPAWNABLE(baloon)
    UNLIMIT_SPAWNABLE(thruster)
    UNLIMIT_SPAWNABLE(thrusterRemote)
    UNLIMIT_SPAWNABLE(health)

    SpawnMenuController_Start(self);
}

void SpawnMenuControllerHook(Logger &logger) {
    INSTALL_HOOK(logger, SpawnMenuController_Start)
}

ADD_INSTALL_FUNC(SpawnMenuControllerHook);