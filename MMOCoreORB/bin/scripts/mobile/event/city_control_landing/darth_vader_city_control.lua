darth_vader_city_control = Creature:new {
	objectName = "@mob/creature_names:darth_vader",
	socialGroup = "imperial",
	faction = "imperial",
	level = 300,
	chanceHit = 30,
	damageMin = 1645,
	damageMax = 3000,
	baseXp = 28549,
	baseHAM = 385000,
	baseHAMmax = 471000,
	armor = 1,
	resists = {0,0,0,0,0,0,0,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = NONE,
	optionsBitmask = AIENABLED + INVULNERABLE,
	diet = HERBIVORE,
	scale = 1.25,

	templates = {"object/mobile/darth_vader.iff"},
	lootGroups = {},
	weapons = {"darth_vader_weapons"},
	conversationTemplate = "",
	attacks = merge(lightsabermaster, forcepowermaster)
}

CreatureTemplates:addCreatureTemplate(darth_vader_city_control, "darth_vader_city_control")