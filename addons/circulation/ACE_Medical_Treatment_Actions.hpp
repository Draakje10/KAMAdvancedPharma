#include "script_component.hpp"


class ACE_Medical_Treatment_Actions 
{
    class CPR;
    class AEDXVehicleConnectVitalsMonitor;
    class AEDXDisconnectVitalsMonitor;
    class AEDXVehiclePlacePads;
    class DefibrillatorRemovePads;
    class ViewMonitor;

    class kap_PlaceLUCASDevice : CPR {
        displayName = "Place LUCAS Device";
        displayNameProgress = "Placing LUCAS Device";
        condition = "kap_circulation_enable_lucas_device";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_PlaceLUCASDevice";
        treatmentTime = "kap_circulation_treatment_time_place_lucas_device";
        medicRequired = "kap_circulation_treatment_level_place_lucas_device";
    };

    class kap_RemoveLUCASDevice : CPR {
        displayName = "Remove LUCAS Device";
        displayNameProgress = "Removing LUCAS Device";
        condition = "kap_circulation_enable_lucas_device";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_RemoveLUCASDevice";
        treatmentTime = "kap_circulation_treatment_time_remove_lucas_device";
        medicRequired = "kap_circulation_treatment_level_remove_lucas_device";
    };

    class kap_ActivateLUCASDevice : CPR {
        displayName = "Activate LUCAS Device";
        displayNameProgress = "Activating LUCAS Device";
        condition = "kap_circulation_enable_lucas_device";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_ActivateLUCASDevice";
        treatmentTime = "kap_circulation_treatment_time_activate_lucas_device";
        medicRequired = "kap_circulation_treatment_level_activate_lucas_device";
        
    };

    class kap_DeactivateLUCASDevice : CPR {
        displayName = "Deactivate LUCAS Device";
        displayNameProgress = "Deactivating LUCAS Device";
        condition = "kap_circulation_enable_lucas_device";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_DeactivateLUCASDevice";
        treatmentTime = "kap_circulation_treatment_time_deactivate_lucas_device";
        medicRequired = "kap_circulation_treatment_level_deactivate_lucas_device";
    };

    class kap_AttachVehicleVitalsMonitor : AEDXVehicleConnectVitalsMonitor {
        displayName = "Attach Vehicle Vitals Monitor";
        displayNameProgress = "Attaching Vehicle Vitals Monitor";
        condition = "kap_circulation_enable_vehicle_vitals_monitor";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_AttachVehicleVitalsMonitor";
        treatmentTime = "kap_circulation_treatment_time_attach_vehicle_vitals_monitor";
        medicRequired = "kap_circulation_treatment_level_attach_vehicle_vitals_monitor";
    };

    class kap_DetachVehicleVitalsMonitor : AEDXDisconnectVitalsMonitor {
        displayName = "Detach Vehicle Vitals Monitor";
        displayNameProgress = "Detaching Vehicle Vitals Monitor";
        condition = "kap_circulation_enable_vehicle_vitals_monitor";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_DetachVehicleVitalsMonitor";
        treatmentTime = "kap_circulation_treatment_time_detach_vehicle_vitals_monitor";
        medicRequired = "kap_circulation_treatment_level_detach_vehicle_vitals_monitor";
    };

    class kap_AttachVehicleDefibrillator : AEDXVehiclePlacePads {
        displayName = "Attach Vehicle Defibrillator Pads";
        displayNameProgress = "Attaching Vehicle Defibrillator Pads";
        condition = "kap_circulation_enable_vehicle_defibrillator";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_AttachVehicleDefibrillator";
        treatmentTime = "kap_circulation_treatment_time_attach_vehicle_defibrillator";
        medicRequired = "kap_circulation_treatment_level_attach_vehicle_defibrillator";
    };

    class kap_DetachVehicleDefibrillator : DefibrillatorRemovePads {
        displayName = "Detach Vehicle Defibrillator Pads";
        displayNameProgress = "Detaching Vehicle Defibrillator Pads";
        condition = "kap_circulation_enable_vehicle_defibrillator";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_DetachVehicleDefibrillator";
        treatmentTime = "kap_circulation_treatment_time_detach_vehicle_defibrillator";
        medicRequired = "kap_circulation_treatment_level_detach_vehicle_defibrillator";
    };

    class kap_viewVehicleMonitor : ViewMonitor {
        displayName = "View Vehicle Vitals Monitor";
        condition = "kap_circulation_enable_vehicle_vitals_monitor";
        items[] = {"kap_VehicleMountedDevice"};
        callbackSuccess = "circulation_fnc_kap_viewVehicleMonitor";
        treatmentTime = "kap_circulation_treatment_time_vieuw_monitor";
        medicRequired = "kap_circulation_treatment_level_view_monitor";
    };

    
};
