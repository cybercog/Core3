kai_tok_bloodreaver = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:kai_tok_bloodreaver",
	socialGroup = "Kai Tok",
	pvpFaction = "",
	faction = "",
	level = 35,
	chanceHit = 0.420000,
	damageMin = 260,
	damageMax = 270,
	range = 0,
	baseXp = 3460,
	baseHAM = 10100,
	armor = 0,
	resists = {35,30,0,0,0,-1,-1,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 0,
	hideType = "hide_leathery",
	hideAmount = 41,
	boneType = "bone_avian",
	boneAmount = 46,
	milk = 0.000000,
	tamingChance = 0.050000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = STALKER + PACK,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"dizzyattack","dizzyChance=50"},
		{"stunattack","stunChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(kai_tok_bloodreaver, "kai_tok_bloodreaver")
