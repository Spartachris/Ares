class Ares_Module_Save_Objects_For_Composition : Ares_SaveLoad_Module_Base
{
	scopeCurator = 2;
	displayName = "Save For Comp.";
	function = "Ares_fnc_SaveObjectsForComposition";
};

class Ares_Module_Save_Objects_For_Paste : Ares_SaveLoad_Module_Base
{
	scopeCurator = 2;
	displayName = "Copy Nearby";
	function = "Ares_fnc_SaveObjectsForPaste";
};

class Ares_Module_Paste_Objects : Ares_SaveLoad_Module_Base
{
	scopeCurator = 2;
	displayName = "Paste Relative";
	function = "Ares_fnc_PasteObjects";
};
