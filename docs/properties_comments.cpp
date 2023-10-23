class CfgVehicles
{
	// scope: Determines visibility/accessibility in game and editor.
	scope[] = 1;

	// displayName: Name displayed in-game.
	displayName[] = "$STR_CfgVehicles_PoliceVest0";

	// descriptionShort: Short description of the item.
	descriptionShort[] = "$STR_CfgVehicles_JoggingShoes_ColorBase1";

	// model: Path to the 3D model.
	model[] = "\dz\characters\heads\f_Keiko.p3d";

	// rotationFlags: Controls rotation behavior or permissions.
	rotationFlags[] = 1;

	// weight: Weight of the item.
	weight[] = 300;

	// varWetMax: Maximum wetness value.
	varWetMax[] = 1;

	// heatIsolation: Insulation against cold.
	heatIsolation[] = 0.60000002;

	// visibilityModifier: Affects visibility to players/NPCs.
	visibilityModifier[] = 1;

	// simulation: Type of simulation (physics/behavior).
	simulation[] = "head";

	// vehicleClass: Categorization of the item.
	vehicleClass[] = "Clothing";

	// weightPerQuantityUnit: Weight per unit.
	weightPerQuantityUnit[] = 0.2;

	// noHelmet: If it can be worn with a helmet.
	noHelmet[] = 1;

	// noEyewear: If it can be worn with eyewear.
	noEyewear[] = 1;

	// varQuantityInit: Initial quantity.
	varQuantityInit[] = 225;

	// varQuantityMin: Minimum quantity.
	varQuantityMin[] = 0;

	// varQuantityMax: Maximum quantity.
	varQuantityMax[] = 225;

	// quantityBar: Shows a quantity bar in UI.
	quantityBar[] = 1;

	// stackedUnit: Unit of measurement for stacking.
	stackedUnit[] = "ml";

	// varQuantityDestroyOnMin: Destroy item at min quantity.
	varQuantityDestroyOnMin[] = 0;

	// requiredVersion: Game or mod version requirement.
	requiredVersion[] = 0.1;

	// debug_ItemCategory: Debugging category.
	debug_ItemCategory[] = 9;

	// soundAttType: Type of sound attenuation.
	soundAttType[] = "Outdoor";

	// randomQuantity: Randomized quantity on spawn.
	randomQuantity[] = 3;

	// male: Model for male variant.
	male[] = "\DZ\characters\backpacks\taloon_m.p3d";

	// female: Model for female variant.
	female[] = "\DZ\characters\backpacks\taloon_f.p3d";

	// hitpoints: Durability or health of the item.
	hitpoints[] = 80;

	// transferToAttachmentsCoef: Transfer properties to attachments.
	transferToAttachmentsCoef[] = 0.5;

	// soundSet: Associated sounds.
	soundSet[] = "pickUpBackPack_Plastic_Light_SoundSet";

	// id: Unique identifier.
	id[] = 796;

	// soundset: Another sound setting (different event/action).
	soundset[] = "taloonbag_drop_SoundSet";

	// canBeDigged: If the item can be buried/dug up.
	canBeDigged[] = 1;

	// lootCategory: Loot spawn category.
	lootCategory[] = "Crafted";

	// color: Color or variant of the item.
	color[] = "Natural";
};
