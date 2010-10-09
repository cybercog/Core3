mawgax_raptor = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:mawgax_raptor",
	socialGroup = "Mawgax",
	pvpFaction = "",
	faction = "",
	level = 30,
	chanceHit = 0.390000,
	damageMin = 240,
	damageMax = 250,
	range = 0,
	baseXp = 3005,
	baseHAM = 9200,
	armor = 0,
	resists = {20,20,0,-1,0,0,30,-1,-1},
	meatType = "meat_domesticated",
	meatAmount = 90,
	hideType = "hide_leathery",
	hideAmount = 70,
	boneType = "bone_avian",
	boneAmount = 55,
	milk = 0.000000,
	tamingChance = 0.050000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = PACK + HERD,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"intimidationattack","intimidationChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(mawgax_raptor, "mawgax_raptor")
