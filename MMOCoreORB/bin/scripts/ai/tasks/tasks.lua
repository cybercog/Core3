includeAiFile("tasks/compositebase.lua")

Composite = createClass(CompositeBase, Interrupt)
CompositeDefault = createClass(CompositeBase, DefaultInterrupt)
CompositePack = createClass(CompositeBase, PackInterrupt)
CompositeCreaturePet = createClass(CompositeBase, CreaturePetInterrupt)
CompositeDroidPet = createClass(CompositeBase, DroidPetInterrupt)
CompositeFactionPet = createClass(CompositeBase, FactionPetInterrupt)
CompositeVillageRaider = createClass(CompositeBase, VillageRaiderInterrupt)
CompositeEnclaveSentinel = createClass(CompositeBase, EnclaveSentinelInterrupt)
CompositeDeathWatchDefender = createClass(CompositeBase, DeathWatchDefenderInterrupt)
CompositeCityPatrol = createClass(CompositeBase, CityPatrolInterrupt)
CompositeCombatPatrol = createClass(CompositeBase, CombatPatrolInterrupt)
