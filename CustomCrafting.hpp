	// [CiC]red_ned 2017 - custom crafting - RwG Exile Addon

	// ##############################
	// FULL WOOD CONSTRUCTION SECTION
	// ##############################

	// WOODEN BEAMS RECIPE
	class Wooden_Beams_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wooden Beams";
		pictureItem = "RwG_Item_Wooden_Beams"; 
		tools[] = {
			"Exile_Item_Handsaw"
		};
		components[] = {
			{3, "Exile_Item_WoodLog"}
		};
		returnedItems[] = {
			{1, "RwG_Item_Wooden_Beams"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Full Wood";
	};
	// WOOD DOOR NO LOCK NO WINDOW KIT RECIPE
	class Wood_Door_nLock_nWin_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Door (No Lock & No Window)";
		pictureItem = "RwG_Wood_Door_nLock_nWin_Kit"; 
		components[] = {
			{1, "RwG_Wood_Doorway_Kit"},
			{3, "Exile_Item_WoodPlank"},
			{1, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Door_nLock_nWin_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Full Wood";
	};
	// WOOD DOOR NO LOCK WITH WINDOW KIT RECIPE
	class Wood_Door_nLock_Win_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Door (No Lock w/ Window)";
		pictureItem = "RwG_Wood_Door_nLock_Win_Kit"; 
		components[] = {
			{1, "RwG_Wood_Doorway_Kit"},
			{3, "Exile_Item_WoodPlank"},
			{2, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Door_nLock_Win_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Full Wood";
	};
	// WOOD DOOR WITH LOCK NO WINDOW KIT RECIPE
	class Wood_Door_Lock_nWin_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Door (Locked, w/o Window)";
		pictureItem = "RwG_Wood_Door_Lock_nWin_Kit"; 
		components[] = {
			{1, "RwG_Wood_Doorway_Kit"},
			{3, "Exile_Item_WoodPlank"},
			{2, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Door_Lock_nWin_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Full Wood";
	};
	// WOOD DOOR WITH LOCK AND WINDOW KIT RECIPE
	class Wood_Wood_Door_Lock_Win_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Door (Locked & Window)";
		pictureItem = "RwG_Wood_Door_Lock_Win_Kit"; 
		components[] = {
			{1, "RwG_Wood_Doorway_Kit"},
			{3, "Exile_Item_WoodPlank"},
			{3, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Door_Lock_Win_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Full Wood";
	};
	// WOOD WINDOW TIP UP KIT RECIPE
	class Wood_Window_TipUp_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Window Kit";
		pictureItem = "RwG_Wood_Window_TipUp_Kit"; 
		components[] = {
			{2, "Exile_Item_WoodPlank"},
			{1, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_Window_TipUp_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Full Wood";
	};
	// WOOD FLOOR KIT
	class Wood_Floor_Kit_Recipe:  Exile_AbstractCraftingRecipe {
		name = "Wood-Floor Kit";
		pictureItem = "RwG_Wood_Floor_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_Floor_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Full Wood";
	};
	
	// ###############################
	// WOOD FRAME CONSTRUCTION SECTION
	// ###############################
	
	// WOOD WALL FRAME KIT RECIPE
	class Wood_Wall_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Wall (Frame) Kit";
		pictureItem = "RwG_Wood_Wall_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Wall_Frame_Kit"}
		}; 
		tools[] = {
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw"
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD DOORWAY FRAME KIT RECIPE
	class Wood_DoorWay_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-DoorWay (Frame) Kit";
		pictureItem = "RwG_Wood_Doorway_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Doorway_Frame_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD WINDOW FRAME KIT RECIPE
	class Wood_Window_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Window (Frame) Kit";
		pictureItem = "RwG_Wood_Window_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Window_Frame_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD GATE FRAME KIT RECIPE
	class Wood_Gate_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Gate (Frame) Kit";
		pictureItem = "RwG_Wood_Gate_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Gate_Frame_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD GATE FRAME SWING KIT RECIPE
	class Wood_Gate_Frame_Swing_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Gate (Frame) Kit";
		pictureItem = "RwG_Wood_Gate_Frame_Swing_Kit"; 
		components[] = {
			{1, "RwG_Wood_Gate_Frame_Kit"},
			{4, "RwG_Item_Wooden_Beams"},
			{1, "Exile_Item_JunkMetal"},
			{2, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Gate_Frame_Swing_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD DOUBLE GATE FRAME KIT RECIPE
	class Wood_DoubleGate_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-DoubleGate (Frame) Kit";
		pictureItem = "RwG_Wood_DoubleGate_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{2, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_DoubleGate_Frame_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD DOUBLE GATE FRAME SWING KIT RECIPE
	class Wood_DoubleGate_Frame_Swing_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-DoubleGate (Frame/Swing) Kit";
		pictureItem = "RwG_Wood_DoubleGate_Frame_Swing_Kit"; 
		components[] = {
			{2, "RwG_Wood_Gate_Frame_Kit"},
			{8, "RwG_Item_Wooden_Beams"},
			{1, "Exile_Item_JunkMetal"},
			{2, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_DoubleGate_Frame_Swing_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD FLOOR FRAME KIT RECIPE
	class Wood_Floor_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Floor (Frame) Kit";
		pictureItem = "RwG_Wood_Floor_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_Floor_Frame_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD FLOOR PORT FRAME KIT RECIPE
	class Wood_FloorPort_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-FloorPort (Frame) Kit";
		pictureItem = "RwG_Wood_FloorPort_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_Wood_FloorPort_Frame_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD GRID WALL FRAME KIT RECIPE
	class WoodGrid_Wall_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "WoodGrid-Wall (Frame) Kit";
		pictureItem = "RwG_WoodGrid_Wall_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_WoodGrid_Wall_Frame_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};
	// WOOD GRID DOORWAY FRAME KIT RECIPE
	class WoodGrid_Doorway_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe {
		name = "WoodGrid-Doorway (Frame) Kit";
		pictureItem = "RwG_WoodGrid_Doorway_Frame_Kit"; 
		components[] = {
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = {
			{1, "RwG_WoodGrid_Doorway_Frame_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Wood";
	};

	// ##########################
	// WOOD FRAME UPGRADE SECTION
	// ##########################

	// WOODPLANKS UPGRADE RECIPE
	class Woodplanks_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood Planks Upgrade-Kit";
		pictureItem = "RwG_Item_WoodPlanks_Upgrade"; 
		components[] = {
			{1, "RwG_Item_Box_Of_Nails"},
			{4, "Exile_Item_WoodPlank"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		requiredInteractionModelGroup = "WorkBench";		
		category = "RwG Addon - Frame Upgrade";
	};
	// WOOD WALL FRAME KIT UPGRADE RECIPE 
	class Wood_Wall_Frame_Kit_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Wall Frame Kit Upgrade";
		pictureItem = "RwG_Wood_Wall_Kit"; 
		components[] = {
			{1, "RwG_Wood_Wall_Frame_Kit"},
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_Wall_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Upgrade";
	};	
	// WOOD DOORWAY FRAME KIT UPGRADE RECIPE
	class Wood_DoorWay_Frame_Kit_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-DoorWay Frame Kit Upgrade";
		pictureItem = "RwG_Wood_Doorway_Kit"; 
		components[] = {
			{1, "RwG_Wood_Doorway_Frame_Kit"},
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_Doorway_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Upgrade";
	};
	
	
	/*
	
	PLACEHOLDER
	- Door w/o Window w/ Lock
	- Door w/ Window w/o Lock
	- Door w/o Window w/o Lock
	- Door w/ Window w/ Lock
	
	*/


	// WOOD WINDOW FRAME KIT UPGRADE RECIPE
	class Wood_Window_Frame_Kit_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Window Frame Kit Upgrade";
		pictureItem = "RwG_Wood_Window_Kit"; 
		components[] = {
			{1, "RwG_Wood_Window_Frame_Kit"},
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_Window_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Upgrade";
	};
	// WOOD WINDOW TIPUP FRAME KIT UPGRADE RECIPE
	class Wood_Window_Frame_TipUp_Kit_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Window Frame TipUp Kit Upgrade";
		pictureItem = "RwG_Wood_Window_TipUp_Kit"; 
		components[] = {
			{1, "RwG_Wood_Window_Frame_Kit"},
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_Window_TipUp_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Upgrade";
	};
	// WOOD GATE FRAME SWING KIT UPGRADE RECIPE
	class Wood_Gate_Frame_Swing_Kit_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Gate Frame Swing Kit Upgrade";
		pictureItem = "RwG_Wood_Gate_Swing_Kit"; 
		components[] = {
			{1, "RwG_Wood_Gate_Frame_Swing_Kit"},
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_Gate_Swing_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Upgrade";
	};
	// WOOD GATE FRAME DOUBLE SWING KIT UPGRADE RECIPE
	class Wood_Gate_Frame_Double_Swing_Kit_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Gate Frame Double Swing Kit Upgrade";
		pictureItem = "RwG_Wood_DoubleGate_Swing_Kit"; 
		components[] = {
			{1, "RwG_Wood_DoubleGate_Frame_Swing_Kit"},
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_DoubleGate_Swing_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Upgrade";
	};
	// WOOD FLOOR FRAME KIT UPGRADE RECIPE
	class Wood_Floor_Frame_Kit_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Floor Frame Kit Upgrade";
		pictureItem = "RwG_Wood_Floor_Kit"; 
		components[] = {
			{1, "RwG_Wood_Floor_Frame_Kit"},
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_Floor_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Upgrade";
	};
	// WOOD FLOOR PORT FRAME KIT UPGRADE RECIPE
	class Wood_Floor_Port_Frame_Kit_Upgrade_Recipe: Exile_AbstractCraftingRecipe {
		name = "Wood-Floor Port Frame Kit Upgrade";
		pictureItem = "RwG_Wood_FloorPort_Kit"; 
		components[] = {
			{1, "RwG_Wood_FloorPort_Frame_Kit"},
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		};
		tools[] = {
			"Exile_Item_Hammer"
		};
		returnedItems[] = {
			{1, "RwG_Wood_FloorPort_Kit"}
		};
		requiredInteractionModelGroup = "WorkBench";
		category = "RwG Addon - Frame Upgrade";
	};

	// ###############################
	// BUILDING / TOOLS SECTION
	// ###############################

	// ELEVATOR RECIPE
	class Elevator_Recipe: Exile_AbstractCraftingRecipe {
		name = "Elevator Kit";
		pictureItem = "RwG_Elevator_Kit"; 
		returnedItems[] = {
			{1, "RwG_Elevator_Kit"}
		};
		components[] = {
			{4, "RwG_Item_Electric_Engine"},
			{4, "Exile_Item_Rope"},
			{4, "Exile_Item_MetalBoard"},
			{6, "Exile_Item_JunkMetal"}
		}; 
		tools[] = {
			"Exile_Item_Foolbox",
			"Exile_Item_Grinder"
		};
		requiredInteractionModelGroup = "WorkBench_Metal";
		category = "RwG Addon - Tools";
	};
	// FURNACE REDIPE
	class Furnace_Recipe: Exile_AbstractCraftingRecipe {
		name = "Furnace Kit";
		pictureItem = "RwG_Furnace_Kit"; 
		returnedItems[] = {
			{1, "RwG_Furnace_Kit"},
			{2, "Exile_Item_WaterCanisterEmpty"}
		};
		components[] = {
				{3, "Exile_Item_Sand"},
				{3, "Exile_Item_Cement"},
				{2, "Exile_Item_MetalPole"},
				{2, "Exile_Item_WaterCanisterDirtyWater"},
				{2, "Exile_Item_JunkMetal"}
		}; 
		tools[] = {
			"Exile_Item_Foolbox",
			"Exile_Item_Grinder",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "WorkBench";
		requiresConcreteMixer = true;
		category = "RwG Addon - Tools";
	};
	// BENCH VISE RECIPE
	class Bench_Vise_Recipe: Exile_AbstractCraftingRecipe {
		name = "Bench Vise";
		pictureItem = "RwG_Item_Bench_Vise"; 
		returnedItems[] = {
			{1, "RwG_Item_Bench_Vise"}
		};
		components[] = {
				{1, "Exile_Item_MetalPole"},
				{6, "Exile_Item_JunkMetal"}
		}; 
		tools[] = {
			"Exile_Item_Foolbox",
			"Exile_Item_Grinder",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "Anvil";
		requiresFire = 1;
		requiresConcreteMixer = false;
		category = "RwG Addon - Tools";
	};	
	// WORKBENCH METAL RECIPE	
	class WorkBench_Metal_Recipe: Exile_AbstractCraftingRecipe {
		name = "Workbench (Metal) Kit";
		pictureItem = "RwG_Workbench_Kit"; 
		returnedItems[] = {
			{1, "RwG_Workbench_Kit"}
		};
		components[] = {
			{1, "RwG_Item_Bench_Vise"},
			{2, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"}
		}; 
		tools[] = {
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "Anvil";
		category = "RwG Addon - Tools";
	};
	// ANVIL RECIPE
	class Anvil_Recipe: Exile_AbstractCraftingRecipe {
		name = "Anvil Kit";
		pictureItem = "RwG_Anvil_Kit"; 
		returnedItems[] = {
			{1, "RwG_Anvil_Kit"}
		};
		components[] = {
			{6, "Exile_Item_JunkMetal"},
			{1, "Exile_Item_WoodLog"}
		}; 
		tools[] = {
			"Exile_Item_Foolbox",
			"Exile_Item_CookingPot"
		};
		requiredInteractionModelGroup = "Furnace";
		requiresFire = 1; // inflamed object nearby
		category = "RwG Addon - Tools";
	};
	// BOX OF NAILS RECIPE
	class Box_Of_Nails_Recipe: Exile_AbstractCraftingRecipe {
		name = "Box Of Nails";
		pictureItem = "RwG_Item_Box_Of_Nails"; 
		returnedItems[] = {
			{4, "RwG_Item_Box_Of_Nails"}
		};
		components[] = {
			{1, "Exile_Item_JunkMetal"}
		}; 
		tools[] = {
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "Anvil";
		category = "RwG Addon - Tools";
	};
	// OVERHEAD LIGHT RECIPE
	class Overhead_Light_Recipe: Exile_AbstractCraftingRecipe {
		name = "Overhead Light Kit";
		pictureItem = "RwG_Overhead_Light_Kit"; 
		components[] = {
			{1, "Exile_Item_LightBulb"},
			{1, "Exile_Item_MetalBoard"}
		};
		returnedItems[] = {
			{1, "RwG_Overhead_Light_Kit"}
		}; 
		requiredInteractionModelGroup = "WorkBench_Metal";
		category = "RwG Addon - Light";
	};
