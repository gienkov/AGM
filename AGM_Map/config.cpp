class CfgPatches {
  class AGM_Map {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.60;
    requiredAddons[] = {A3_UI_F, A3_Misc_F};
    version = "0.92";
    versionStr = "0.92";
    versionAr[] = {0,92,0};
    author[] = {"KoffeinFlummi"};
    authorUrl = "https://github.com/KoffeinFlummi/";
  };
};

class CfgFunctions {
  class AGM_Map {
    class AGM_Map {
      file = "AGM_Map\functions";
      class blueForceTracking;
    };
  };
};

class CfgVehicles {
  class Module_F;
  class AGM_ModuleBlueForceTracking: Module_F {
    author = "AGM Team";
    category = "AGM";
    displayName = "Blue Force Tracking";
    function = "AGM_Map_fnc_blueForceTracking";
    scope = 2;
    isGlobal = 1;
    class Arguments {
      class Interval {
        displayName = "Interval";
        description = "How often the markers should be refreshed (in seconds)";
        defaultValue = 1;
      };
    };
  };
};

class RscControlsGroup;
class RscActiveText;
class RscPicture;
class RscText;
class RscObject;

class RscMapControl {
  sizeExGrid = 0.032;
};

// REGULAR MAP
class RscDisplayMainMap {
  // get rid of the "center to player position" - button (as it works even on elite)
  class controls {
    class TopRight: RscControlsGroup {
      class controls {
        class ButtonPlayer: RscActiveText {
          text = "";
          w = 0;
          h = 0;
          sizeEx = 0;
          onButtonClick = "";
        };
        class CA_PlayerName: RscText {
          x = "2 *    ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfilePicture: RscPicture {
          x = "13.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfileBackground: RscText {
          x = "13.3 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class Separator1: RscPicture {
          x = "14.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
      };
    };
  };
  // scale up the compass
  class objects {
    class Compass: RscObject {
      scale = 0.7;
      zoomDuration = 0;
    };
  };
};

// DIARY
class RscDisplayDiary {
  // get rid of the "center to player position" - button (as it works even on elite)
  class controls {
    class TopRight: RscControlsGroup {
      class controls {
        class ButtonPlayer: RscActiveText {
          text = "";
          w = 0;
          h = 0;
          sizeEx = 0;
          onButtonClick = "";
        };
        class CA_PlayerName: RscText {
          x = "2 *    ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfilePicture: RscPicture {
          x = "13.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfileBackground: RscText {
          x = "13.3 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class Separator1: RscPicture {
          x = "14.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
      };
    };
  };
  // scale up the compass
  class objects {
    class Compass: RscObject {
      scale = 0.7;
      zoomDuration = 0;
    };
  };
};

// BRIEFING SCREEN
class RscDisplayGetReady: RscDisplayMainMap {
  // get rid of the "center to player position" - button (as it works even on elite)
  class controls {
    class TopRight: RscControlsGroup {
      class controls {
        class ButtonPlayer: RscActiveText {
          text = "";
          w = 0;
          h = 0;
          sizeEx = 0;
          onButtonClick = "";
        };
        class CA_PlayerName: RscText {
          x = "2 *    ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfilePicture: RscPicture {
          x = "13.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfileBackground: RscText {
          x = "13.3 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class Separator1: RscPicture {
          x = "14.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
      };
    };
  };
  // scale up the compass
  class objects {
    class Compass: RscObject {
      scale = 0.7;
      zoomDuration = 0;
    };
  };
};
class RscDisplayClientGetReady: RscDisplayGetReady {
  // get rid of the "center to player position" - button (as it works even on elite)
  class controls {
    class TopRight: RscControlsGroup {
      class controls {
        class ButtonPlayer: RscActiveText {
          text = "";
          w = 0;
          h = 0;
          sizeEx = 0;
          onButtonClick = "";
        };
        class CA_PlayerName: RscText {
          x = "2 *    ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfilePicture: RscPicture {
          x = "13.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfileBackground: RscText {
          x = "13.3 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class Separator1: RscPicture {
          x = "14.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
      };
    };
  };
  // scale up the compass
  class objects {
    class Compass: RscObject {
      scale = 0.7;
      zoomDuration = 0;
    };
  };
};
class RscDisplayServerGetReady: RscDisplayGetReady {
  // get rid of the "center to player position" - button (as it works even on elite)
  class controls {
    class TopRight: RscControlsGroup {
      class controls {
        class ButtonPlayer: RscActiveText {
          text = "";
          w = 0;
          h = 0;
          sizeEx = 0;
          onButtonClick = "";
        };
        class CA_PlayerName: RscText {
          x = "2 *    ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfilePicture: RscPicture {
          x = "13.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class ProfileBackground: RscText {
          x = "13.3 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class Separator1: RscPicture {
          x = "14.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        };
      };
    };
  };
  // scale up the compass
  class objects {
    class Compass: RscObject {
      scale = 0.7;
      zoomDuration = 0;
    };
  };
};

// MARKERS
class CfgMarkers {
  class Flag;

  class hd_objective: Flag {
    name = "$STR_CFG_MARKERS_dot";
    icon = "\A3\ui_f\data\map\markers\handdrawn\dot_CA.paa";
  };

  class hd_dot: hd_objective {
    name = "$STR_CFG_MARKERS_FLAG";
    icon = "\A3\ui_f\data\map\markers\handdrawn\objective_CA.paa";
  };
};
