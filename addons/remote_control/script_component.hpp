#define COMPONENT remote_control
#define COMPONENT_BEAUTIFIED Remote Control
#include "\x\zen\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_REMOTE_CONTROL
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_REMOTE_CONTROL
    #define DEBUG_SETTINGS DEBUG_SETTINGS_REMOTE_CONTROL
#endif

#include "\x\zen\addons\main\script_macros.hpp"

#include "\a3\ui_f_curator\ui\defineResinclDesign.inc"

#define VAR_UNIT  "bis_fnc_moduleRemoteControl_unit"
#define VAR_OWNER "bis_fnc_moduleRemoteControl_owner"
