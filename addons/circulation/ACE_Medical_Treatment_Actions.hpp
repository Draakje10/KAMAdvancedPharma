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
        
    }

    class kap_RemoveLUCASDevice : CPR {
        
    }

    class kap_ActivateLUCASDevice : CPR {
        
    }

    class kap_DeactivateLUCASDevice : CPR {
        
    }

    class kap_AttachVehicleVitalsMonitor : AEDXVehicleConnectVitalsMonitor {
        
    }

    class kap_DetachVehicleVitalsMonitor : AEDXDisconnectVitalsMonitor {
        
    }

    class kap_AttachVehicleDefibrillator : AEDXVehiclePlacePads {
        
    }

    class kap_DetachVehicleDefibrillator : DefibrillatorRemovePads {
        
    };

    class kap_viewVehicleMonitor : ViewMonitor {
        
    };

    
};
