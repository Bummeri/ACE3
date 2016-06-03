#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {"ACE_NVG_Gen1", "ACE_NVG_Gen2", /*"ACE_NVG_Gen3",*/ "ACE_NVG_Gen4", "ACE_NVG_Wide"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"commy2", "KoffeinFlummi", "PabstMirror"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "ACE_Settings.hpp"

class ACE_newEvents {
    firedPlayerVehicle = "ace_firedPlayerVehicle";
    firedPlayer = "ace_firedPlayer";
};
