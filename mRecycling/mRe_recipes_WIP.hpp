/*
	Medusa's Exile Recycling Recipes
	- Recycling of Wood-Things, like Wood-Floors, Wood-Walls etc., into WOOD PLANKS
	- Recycling of Sandbag-Things, like Sandbag-Barriers, Sandbag-Bunkers etc., into SAND
	- Recycling of Concrete-Things, like Concrete-Walls, Concrete-Floors etc., into CEMENT
	- Recycling of Wire-Things, like Wire-Fence or Razor-Wire etc., into METAL WIRE
	- Recycling of Electronic-Things, like Flood-Light etc., into METAL POLE, LIGHT BULB, EXTENSION CORD
	- Recycling of Other-Things, like Fortification Upgades etc., into METAL POLE, METAL BOARD
	
	You almost get the half out of an item back - at least one item in return.
	
	You can test this script by adding it to your Recipe-Section in the config.cpp in your mission folder.
	
	class CfgCraftingRecipes {
		
		#include "mRecycling\mRe_recipes_WIP.hpp"
		
		class OTHER RECIPES STARTING HERE {};
	};

*/

/////////////////////////////////////////////////////
// RECYCLING INTO PLANKS
/////////////////////////////////////////////////////
// Exile_Item_WoodDoorKit
class mReWoodDoorKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Door Kit";
	pictureItem = "Exile_Item_WoodDoorKit";
	returnedItems[] = {
		{3,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodDoorKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WoodDoorwayKit
class mReWoodDoorwayKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Doorway Kit";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	returnedItems[] = {
		{3,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodDoorwayKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WoodFloorKit
class mReWoodFloorKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Floor Kit";
	pictureItem = "Exile_Item_WoodFloorKit";
	returnedItems[] = {
		{2,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodFloorKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WoodGateKit
class mReWoodGateKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Gate Kit";
	pictureItem = "Exile_Item_WoodGateKit";
	returnedItems[] = {
		{4,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodGateKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WoodStairsKit
class mReWoodStairsKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Stairs Kit";
	pictureItem = "Exile_Item_WoodStairsKit";
	returnedItems[] = {
		{3,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodStairsKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WoodSupportKit
class mReWoodSupportKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Support Kit";
	pictureItem = "Exile_Item_WoodSupportKit";
	returnedItems[] = {
		{3,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodSupportKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WoodWallHalfKit
class mReWoodHalfWallKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Half Wall Kit";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	returnedItems[] = {
		{1,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodWallHalfKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WoodWallKit
class mReWoodWallKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Wall Kit";
	pictureItem = "Exile_Item_WoodWallKit";
	returnedItems[] = {
		{2,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodWallKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WoodWindowKit
class mReWoodWindowKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wood Window Kit";
	pictureItem = "Exile_Item_WoodWindowKit";
	returnedItems[] = {
		{3,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WoodWindowKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

// Exile_Item_WorkBenchKit
class mReWorkBenchKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Work Bench Kit";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = {
		{2,"Exile_Item_WoodPlank"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WorkBenchKit"}
		};
	tools[] = {
		"Exile_Item_Handsaw"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wood";
};

/////////////////////////////////////////////////////
// RECYCLING INTO SAND
/////////////////////////////////////////////////////
// Exile_Item_SandBagsKit_Long
class mReSandbagsKitLong: Exile_AbstractCraftingRecipe {
	name = "Recycling Sandbags Kit Long";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	returnedItems[] = {
		{3,"Exile_Item_Sand"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_SandBagsKit_Long"}
		};
	tools[] = {
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Sand";
};

// Exile_Item_SandBagsKit_Corner
class mReSandbagsKitCorner: Exile_AbstractCraftingRecipe {
	name = "Recycling Sandbags Kit Corner";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	returnedItems[] = {
		{1,"Exile_Item_Sand"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_SandBagsKit_Corner"}
		};
	tools[] = {
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Sand";
};

// Land_BagBunker_Large_F_Kit
class mReBagBunkerBig: Exile_AbstractCraftingRecipe {
	name = "Recycling Bag Bunker Big";
	pictureItem = "Land_BagBunker_Large_F_Kit";
	returnedItems[] = {
		{6,"Exile_Item_Sand"},
		{2,"Exile_Item_MetalWire"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Land_BagBunker_Large_F_Kit"}
		};
	tools[] = {
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Sand";
};

// Land_Bunker_F_Kit
class mReBagBunkerHuge: Exile_AbstractCraftingRecipe {
	name = "Recycling Bag Bunker Huge";
	pictureItem = "Land_Bunker_F_Kit";
	returnedItems[] = {
		{6,"Exile_Item_Sand"},
		{2,"Exile_Item_MetalWire"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Land_Bunker_F_Kit"}
		};
	tools[] = {
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Sand";
};

// Land_BagBunker_Small_F_Kit
class mReBagBunkerSmall: Exile_AbstractCraftingRecipe {
	name = "Recycling Bag Bunker Small";
	pictureItem = "Land_BagBunker_Small_F_Kit";
	returnedItems[] = {
		{6,"Exile_Item_Sand"},
		{2,"Exile_Item_MetalWire"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Land_BagBunker_Small_F_Kit"}
		};
	tools[] = {
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Sand";
};

// Land_HBarrierTower_F_Kit
class mReSandBagTower: Exile_AbstractCraftingRecipe {
	name = "Recycling Sandbag Tower";
	pictureItem = "Land_HBarrierTower_F_Kit";
	returnedItems[] = {
		{4,"Exile_Item_Sand"},
		{2,"Exile_Item_MetalWire"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Land_HBarrierTower_F_Kit"}
		};
	tools[] = {
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Sand";
};

// Land_BagFence_Long_F_Kit
class mReSandBagFenceLong: Exile_AbstractCraftingRecipe {
	name = "Recycling Sandbag Fence Long";
	pictureItem = "Land_BagFence_Long_F_Kit";
	returnedItems[] = {
		{3,"Exile_Item_Sand"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Land_BagFence_Long_F_Kit"}
		};
	tools[] = {
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Sand";
};

// Land_BagFence_Corner_F_Kit
class mReSandBagFenceCorner: Exile_AbstractCraftingRecipe {
	name = "Recycling Sandbag Fence Corner";
	pictureItem = "Land_BagFence_Corner_F_Kit";
	returnedItems[] = {
		{1,"Exile_Item_Sand"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Land_BagFence_Corner_F_Kit"}
		};
	tools[] = {
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Sand";
};

/////////////////////////////////////////////////////
// RECYCLING INTO CEMENT (Exile_Melee_SledgeHammmer)
/////////////////////////////////////////////////////
// Exile_Item_ConcreteDoorKit
class mReConcreteDoorKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Door Kit";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	returnedItems[] = {
		{1,"Exile_Item_Cement"},
		{1,"Exile_Item_Sand"},
		{1,"Exile_Item_MetalPole"}		
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteDoorKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

// Exile_Item_ConcreteDoorwayKit
class mReConcreteDoorwayKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Doorway Kit";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	returnedItems[] = {
		{1,"Exile_Item_Cement"},
		{1,"Exile_Item_Sand"},
		{1,"Exile_Item_MetalPole"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteDoorwayKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

// Exile_Item_ConcreteFloorKit
class mReConcreteFloorKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Floor Kit";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	returnedItems[] = {
		{1,"Exile_Item_Cement"},
		{1,"Exile_Item_Sand"},
		{1,"Exile_Item_MetalPole"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteFloorKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

// Exile_Item_ConcreteFloorPortKit
class mReConcreteFloorPortKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Floor Port Kit";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	returnedItems[] = {
		{1,"Exile_Item_Cement"},
		{1,"Exile_Item_Sand"},
		{1,"Exile_Item_MetalPole"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteFloorPortKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

// Exile_Item_ConcreteGateKit
class mReConcreteGateKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Gate Kit";
	pictureItem = "Exile_Item_ConcreteGateKit";
	returnedItems[] = {
		{2,"Exile_Item_Cement"},
		{2,"Exile_Item_Sand"},
		{2,"Exile_Item_MetalPole"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteGateKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

// Exile_Item_ConcreteStairsKit
class mReConcreteStairsKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Stairs Kit";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	returnedItems[] = {
		{1,"Exile_Item_Cement"},
		{1,"Exile_Item_Sand"},
		{1,"Exile_Item_MetalPole"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteStairsKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

// Exile_Item_ConcreteSupportKit
class mReConcreteSupportKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Support Kit";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	returnedItems[] = {
		{1,"Exile_Item_Cement"},
		{1,"Exile_Item_Sand"},
		{1,"Exile_Item_MetalPole"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteSupportKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

// Exile_Item_ConcreteWallKit
class mReConcreteWallKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Wall Kit";
	pictureItem = "Exile_Item_ConcreteWallKit";
	returnedItems[] = {
		{1,"Exile_Item_Cement"},
		{1,"Exile_Item_Sand"},
		{1,"Exile_Item_MetalPole"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteWallKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

// Exile_Item_ConcreteWindowKit
class mReConcreteWindowKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Concrete Window Kit";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	returnedItems[] = {
		{1,"Exile_Item_Cement"},
		{1,"Exile_Item_Sand"},
		{1,"Exile_Item_MetalPole"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_ConcreteWindowKit"}
		};
	tools[] = {
		"Exile_Item_Hammer"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Concrete";
};

/////////////////////////////////////////////////////
// RECYCLING INTO OTHER ITEMS
/////////////////////////////////////////////////////
// Exile_Item_FloodLightKit
class mReFloodLightKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Floodlight Kit";
	pictureItem = "Exile_Item_FloodLightKit";
	returnedItems[] = {
		{1,"Exile_Item_MetalPole"},
		{1,"Exile_Item_LightBulb"},
		{1,"Exile_Item_ExtensionCord"},
		{1,"Exile_Item_MetalScrews"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_FloodLightKit"}
		};
	tools[] = {
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Electronics";
};

/////////////////////////////////////////////////////
// RECYCLING INTO METAL WIRE
/////////////////////////////////////////////////////
// Exile_Item_WireFenceKit
class mReWireFenceKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	returnedItems[] = {
		{3,"Exile_Item_MetalWire"},
		{2,"Exile_Item_MetalPole"},
		{1,"Exile_Item_MetalScrews"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_WireFenceKit"}
		};
	tools[] = {
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wire";
};

// Exile_Item_RazorWireKit
class mReRazorWireKit: Exile_AbstractCraftingRecipe {
	name = "Recycling Razor Wire Kit";
	pictureItem = "Exile_Item_RazorWireKit";
	returnedItems[] = {
		{2,"Exile_Item_MetalWire"},
		{3,"Exile_Item_MetalPole"},
		{2,"Exile_Item_MetalScrews"}
		};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = {
		{1, "Exile_Item_RazorWireKit"}
		};
	tools[] = {
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
		};
	requiresConcreteMixer = 0;
	category = "Recycling Wire";
};

