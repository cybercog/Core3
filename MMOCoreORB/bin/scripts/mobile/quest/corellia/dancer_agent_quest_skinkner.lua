dancer_agent_quest_skinkner = Creature:new {
	objectName = "@mob/creature_names:entertainer",
	socialGroup = "townsperson",
	faction = "townsperson",
	level = 4,
	chanceHit = 0.24,
	damageMin = 40,
	damageMax = 45,
	baseXp = 62,
	baseHAM = 113,
	baseHAMmax = 138,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
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
	creatureBitmask = HERD,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_entertainer_trainer_twk_female_01.iff",},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = merge(brawlermaster, teraskasinovice)
}

CreatureTemplates:addCreatureTemplate(dancer_agent_quest_skinkner, "dancer_agent_quest_skinkner")
