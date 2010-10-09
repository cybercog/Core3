forest_murra = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:forest_murra",
	socialGroup = "self",
	pvpFaction = "",
	faction = "",
	level = 12,
	chanceHit = 0.290000,
	damageMin = 120,
	damageMax = 130,
	range = 0,
	baseXp = 430,
	baseHAM = 1300,
	armor = 0,
	resists = {0,0,10,0,0,0,0,-1,-1},
	meatType = "meat_herbivore",
	meatAmount = 75,
	hideType = "hide_bristley",
	hideAmount = 35,
	boneType = "bone_mammal",
	boneAmount = 30,
	milk = 0.000000,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = HERD,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"intimidationattack","intimidationChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(forest_murra, "forest_murra")
