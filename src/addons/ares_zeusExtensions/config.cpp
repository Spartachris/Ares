class CfgPatches
{
    class Ares
    {
        weapons[] = {};
        requiredVersion = 0.1;
		author[] = { "Anton Struyk" };
		authorUrl = "https://github.com/astruyk/";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
		
		#include "units.hpp"

		requiredAddons[] =
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Modules_F",
			"A3_Modules_F_Curator"
		};
    };
};

class CfgFactionClasses
{
	class Ares // The section the module will show up under in the editor?? Or is this just whatever you want?
	{
		displayname = "Ares";	// Name of the module section.
		priority = 8;
		side = 7;

		addon = "Ares";

		class subCategories
		{
			class Arsenal
			{
				displayName = "Arsenal";
				moduleClass = "Ares_Module_Empty";
				icon = "\ares_zeusExtensions\data\icon_ares.paa";
			};

			class Behaviours
			{
				displayname = "AI Behaviours";
				moduleClass = "Ares_Module_Empty";
				icon = "\ares_zeusExtensions\data\icon_ares.paa";
			};

			class Equipment
			{
				displayname = "Equipment";
				moduleClass = "Ares_Module_Empty";
				icon = "\ares_zeusExtensions\data\icon_ares.paa";
			};
			
			class Reinforcements
			{
				displayName = "Reinforcements";
				moduleClass = "Ares_Module_Empty";
				icon = "\ares_zeusExtensions\data\icon_ares.paa";
			};

			class SaveLoad
			{
				displayname = "Save/Load";
				moduleClass = "Ares_Module_Empty";
				icon = "\ares_zeusExtensions\data\icon_ares.paa";
			};
			
			class Spawn
			{
				displayName = "Spawn";
				moduleClass = "Ares_Module_Empty";
				icon = "\ares_zeusExtensions\data\icon_ares.paa";
			};

			class Teleport
			{
				displayName = "Teleport";
				moduleClass = "Ares_Module_Empty";
				icon = "\ares_zeusExtensions\data\icon_ares.paa";
			};
		};
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};

	class Ares_Module_Base : Module_F
	{
		mapSize = 1;
		author = "Anton Struyk";
		vehicleClass = "Modules";
		category = "Ares";
		subCategory = "Behaviours";
		side = 7;

		scope = 1;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 1;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "Ares Module Base";	// Name displayed in the menu
		icon = "\ares_zeusExtensions\data\icon_default.paa";		// Map icon. Delete this entry to use the default icon
		picture = "\ares_zeusExtensions\data\icon_default.paa";
		portrait = "\ares_zeusExtensions\data\icon_default.paa";

		function = "";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 2;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		// curatorInfoType = "RscDisplayAttributeModuleNuke";	// Menu displayed when the module is placed or double-clicked on by Zeus
		
		class Arguments {};
		class ModuleDescription: ModuleDescription
		{
			description = "Ares Module Base";
		};
	};
	
	class Ares_Arsenal_Module_Base : Ares_Module_base
	{
		subCategory = "Arsenal";
	};

	class Ares_Behaviours_Module_Base : Ares_Module_Base
	{
		subCategory = "Behaviours";
	};
	
	class Ares_Equipment_Module_Base : Ares_Module_Base
	{
		subCategory = "Equipment";
	};
	
	class Ares_Reinforcements_Module_base : Ares_Module_Base
	{
		subCategory = "Reinforcements";
	};
	
	class Ares_SaveLoad_Module_Base : Ares_Module_Base
	{
		subCategory = "SaveLoad";
	};

	class Ares_Spawn_Module_Base : Ares_Module_Base
	{
		subCategory = "Spawn";
	};

	class Ares_Teleport_Module_Base : Ares_Module_Base
	{
		subCategory = "Teleport";
	};

	// Placeholder class that doesn't do anything. Used for generating categories in UI.
	class Ares_Module_Empty : Ares_Module_Base
	{
		category = "Curator";
		subCategory = "";
		
		mapSize = 0;
		displayName = "Ares Module Empty";
		//icon = "";
		function = "Ares_fnc_Empty";
	}

	#include "cfgVehiclesModulesBehaviours.hpp"
	#include "cfgVehiclesModulesEquipment.hpp"
	#include "cfgVehiclesModulesSaveLoad.hpp"
	#include "cfgVehiclesModulesSpawn.hpp"
	#include "cfgVehiclesModulesTeleport.hpp"
	#include "cfgVehiclesModulesArsenal.hpp"
	#include "cfgVehiclesModulesReinforcements.hpp"
};

class CfgFunctions
{
	#include "cfgFunctions.hpp"
};

class CfgGroups
{
	#include "compositions.hpp"
};

#include "ui\baseDialogs.hpp"
#include "ui\copyPasteDialog.hpp"
#include "ui\reinforcementDialog.hpp"
#include "ui\chooseDialog.hpp"
#include "ui\ArtilleryDialog.hpp"
#include "ui\dynamicDialog.hpp"
