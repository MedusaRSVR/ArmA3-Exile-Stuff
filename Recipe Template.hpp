/*
##########################################################################################################################
# Recipe Template for ArmA 3 Exile Mod ###################################################################################
##########################################################################################################################

							class INDIVIDUAL_RECIPE_NAME: Exile_AbstractCraftingRecipe {
								name = "NAME IN CRAFTING";
								pictureItem = "CLASSNAME";
								requiresConcreteMixer = 1;
								requiresFire = 0;
								requiredInteractionModelGroup = "WorkBench";
								components[] = {
									{3, "CLASSNAME"},
									{5, "CLASSNAME"},
									{2, "CLASSNAME"}
								};
								tools[] = {
									"CLASSNAME"
								};
								returnedItems[] = {
									{1,"CLASSNAME"},
									{1, "CLASSNAME"}
								};
								category = "CATEGORY NAME IN BRAMA COOKBOOK";
							};
							
##########################################################################################################################
# INDIVIDUAL_RECIPE_NAME						-	Add a unique recipe variable.
# name = "NAME IN CRAFTING";					-	Add a name for the recipe. It will be shown in Brama.
# pictureItem = "CLASSNAME";					-	The picture to use. It's the classname in fact.
# requiresConcreteMixer = 1;					-	Does the recipe requires a concrete mixer?
# requiresFire = 0;								-	Does the recipe needs a inflamed object eg. a fire place or furnace?
# requiredInteractionModelGroup = "WorkBench";	-	Interaction model to use. You have to be within 5m to that object.
													Possible options Exile:		"WorkBench"
																				"CleanWaterSource"
																				"WaterSource"
																				"FuelSource"
																				
													Options for RwG Addon: 		"WorkBench_Metal"
																				"Anvil"
																				"Furnace"
# components[] = {								-	Components to use for the recipe.
		{X, "CLASSNAME"},							{X=AMOUNT, "OF CLASSNAME"} eg. {2, "Exile_Item_Sand"}
		{X, "CLASSNAME"},
		{X, "CLASSNAME"}
	};
# tools[] = {									-	The tools to use for the finished product.
		"CLASSNAME"									Add a classname here eg. "Exile_Item_Wrench", "Exile_Item_Hammer"
	};
# returnedItems[] = {							-	THE product to return from the recipe.
		{X,"CLASSNAME"},							{X=AMOUNT, "OF CLASSNAME"} eg. {1, "Exile_Item_CampFireKit"}
		{X, "CLASSNAME"}							If you had to add fuel or water into the recipe eg.
	};												"Exile_Item_FuelCanisterFull" or "Exile_Item_WaterCanisterDirtyWater"
													you have to add the empty counterpart to the returned items eg.
													"Exile_Item_FuelCanisterEmpty" or "Exile_Item_WaterCanisterEmpty"
# category = "CATEGORY NAME IN BRAMA COOKBOOK";	-	The individual category name for Brama's Cookbook.
													Can be everything eg. "Buildings" or "Food" or "Electronics"

##########################################################################################################################

							class CraftWaterBarrel: Exile_AbstractCraftingRecipe {
								name = "Craft Water Barrel";
								pictureItem = "Exile_Item_WaterBarrelKit";								
								requiresConcreteMixer = 0;
								requiresFire = 1;
								requiredInteractionModelGroup = "WorkBench";
								components[] = {
									{20, "Exile_Item_PlasticBottleEmpty"}
								};
								tools[] = {};
								returnedItems[] = {
									{1, "Exile_Item_WaterBarrelKit"}
								};
								category = "Building General";
							};
							
##########################################################################################################################
*/