/*
 *	server/zone/objects/resource/ResourceSpawn.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceSpawn.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/resource/ResourceContainer.h"

/*
 *	ResourceSpawnStub
 */

ResourceSpawn::ResourceSpawn() : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceSpawnImplementation();
	_impl->_setStub(this);
}

ResourceSpawn::ResourceSpawn(DummyConstructorParameter* param) : SceneObject(param) {
}

ResourceSpawn::~ResourceSpawn() {
}


void ResourceSpawn::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->initializeTransientMembers();
}

void ResourceSpawn::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ResourceSpawnImplementation*) _impl)->fillAttributeList(msg, object);
}

void ResourceSpawn::decreaseContainerReferenceCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->decreaseContainerReferenceCount();
}

void ResourceSpawn::setName(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setName(name);
}

void ResourceSpawn::setType(const String& type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(type);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setType(type);
}

void ResourceSpawn::setSpawnPool(int pool) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addSignedIntParameter(pool);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setSpawnPool(pool);
}

void ResourceSpawn::setZoneRestriction(int zone) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addSignedIntParameter(zone);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setZoneRestriction(zone);
}

void ResourceSpawn::addClass(const String& newclass) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addAsciiParameter(newclass);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->addClass(newclass);
}

void ResourceSpawn::addStfClass(const String& newclass) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(newclass);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->addStfClass(newclass);
}

void ResourceSpawn::addAttribute(const String& attribute, int value, int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(attribute);
		method.addSignedIntParameter(value);
		method.addSignedIntParameter(index);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->addAttribute(attribute, value, index);
}

bool ResourceSpawn::isType(const String& type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(type);

		return method.executeWithBooleanReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->isType(type);
}

void ResourceSpawn::setSurveyToolType(int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setSurveyToolType(type);
}

void ResourceSpawn::setIsEnergy(bool val) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setIsEnergy(val);
}

String ResourceSpawn::getName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		method.executeWithAsciiReturn(_return_getName);
		return _return_getName;
	} else
		return ((ResourceSpawnImplementation*) _impl)->getName();
}

String ResourceSpawn::getType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithAsciiReturn(_return_getType);
		return _return_getType;
	} else
		return ((ResourceSpawnImplementation*) _impl)->getType();
}

String ResourceSpawn::getClass(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addSignedIntParameter(index);

		method.executeWithAsciiReturn(_return_getClass);
		return _return_getClass;
	} else
		return ((ResourceSpawnImplementation*) _impl)->getClass(index);
}

String ResourceSpawn::getFinalClass() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		method.executeWithAsciiReturn(_return_getFinalClass);
		return _return_getFinalClass;
	} else
		return ((ResourceSpawnImplementation*) _impl)->getFinalClass();
}

String ResourceSpawn::getFamilyName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithAsciiReturn(_return_getFamilyName);
		return _return_getFamilyName;
	} else
		return ((ResourceSpawnImplementation*) _impl)->getFamilyName();
}

void ResourceSpawn::setSpawned(unsigned long long t) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addUnsignedLongParameter(t);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setSpawned(t);
}

void ResourceSpawn::setDespawned(unsigned long long t) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addUnsignedLongParameter(t);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setDespawned(t);
}

unsigned long long ResourceSpawn::getDespawned() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getDespawned();
}

void ResourceSpawn::setContainerCRC(unsigned int crc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addUnsignedIntParameter(crc);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->setContainerCRC(crc);
}

unsigned int ResourceSpawn::getContainerCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getContainerCRC();
}

int ResourceSpawn::getSpawnPool() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getSpawnPool();
}

bool ResourceSpawn::isEnergy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->isEnergy();
}

int ResourceSpawn::getZoneRestriction() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getZoneRestriction();
}

int ResourceSpawn::getSurveyToolType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getSurveyToolType();
}

int ResourceSpawn::getSpawnMapSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getSpawnMapSize();
}

void ResourceSpawn::extractResource(int zoneid, int units) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addSignedIntParameter(zoneid);
		method.addSignedIntParameter(units);

		method.executeWithVoidReturn();
	} else
		((ResourceSpawnImplementation*) _impl)->extractResource(zoneid, units);
}

ResourceContainer* ResourceSpawn::createResource(int units) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addSignedIntParameter(units);

		return (ResourceContainer*) method.executeWithObjectReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->createResource(units);
}

int ResourceSpawn::getSpawnMapZone(int i) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ResourceSpawnImplementation*) _impl)->getSpawnMapZone(i);
}

bool ResourceSpawn::isUnknownType() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ResourceSpawnImplementation*) _impl)->isUnknownType();
}

void ResourceSpawn::createSpawnMaps(bool jtl, int minpool, int maxpool, int zonerestriction, Vector<unsigned int>& activeZones) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ResourceSpawnImplementation*) _impl)->createSpawnMaps(jtl, minpool, maxpool, zonerestriction, activeZones);
}

unsigned int ResourceSpawn::getPlanetCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getPlanetCRC();
}

float ResourceSpawn::getDensityAt(int zoneid, float x, float y) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ResourceSpawnImplementation*) _impl)->getDensityAt(zoneid, x, y);
}

bool ResourceSpawn::inShift() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ResourceSpawnImplementation*) _impl)->inShift();
}

int ResourceSpawn::getAttributeAndValue(String& attribute, int index) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ResourceSpawnImplementation*) _impl)->getAttributeAndValue(attribute, index);
}

int ResourceSpawn::getAttributeValue(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addSignedIntParameter(index);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getAttributeValue(index);
}

int ResourceSpawn::getValueOf(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);
		method.addSignedIntParameter(index);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceSpawnImplementation*) _impl)->getValueOf(index);
}

void ResourceSpawn::print() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ResourceSpawnImplementation*) _impl)->print();
}

/*
 *	ResourceSpawnImplementation
 */

ResourceSpawnImplementation::ResourceSpawnImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}


ResourceSpawnImplementation::~ResourceSpawnImplementation() {
	ResourceSpawnImplementation::finalize();
}


void ResourceSpawnImplementation::_initializeImplementation() {
	_setClassHelper(ResourceSpawnHelper::instance());

	_serializationHelperMethod();
}

void ResourceSpawnImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceSpawn*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceSpawnImplementation::_getStub() {
	return _this;
}

ResourceSpawnImplementation::operator const ResourceSpawn*() {
	return _this;
}

void ResourceSpawnImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceSpawnImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceSpawnImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceSpawnImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceSpawnImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceSpawnImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceSpawnImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceSpawnImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("ResourceSpawn");

	addSerializableVariable("spawnType", &spawnType);
	addSerializableVariable("spawnName", &spawnName);
	addSerializableVariable("spawnClasses", &spawnClasses);
	addSerializableVariable("stfSpawnClasses", &stfSpawnClasses);
	addSerializableVariable("spawnAttributes", &spawnAttributes);
	addSerializableVariable("spawnPool", &spawnPool);
	addSerializableVariable("zoneRestriction", &zoneRestriction);
	addSerializableVariable("surveyToolType", &surveyToolType);
	addSerializableVariable("containerCRC", &containerCRC);
	addSerializableVariable("spawned", &spawned);
	addSerializableVariable("despawned", &despawned);
	addSerializableVariable("spawnMaps", &spawnMaps);
	addSerializableVariable("maxUnitsSpawned", &maxUnitsSpawned);
	addSerializableVariable("unitsInCirculation", &unitsInCirculation);
	addSerializableVariable("containerReferenceCount", &containerReferenceCount);
	addSerializableVariable("dbDestroyed", &dbDestroyed);
	addSerializableVariable("energy", &energy);
	addSerializableVariable("indexedStats", &indexedStats);
}

ResourceSpawnImplementation::ResourceSpawnImplementation() {
	_initializeImplementation();
	// server/zone/objects/resource/ResourceSpawn.idl(96):   	spawnType = "";
	spawnType = "";
	// server/zone/objects/resource/ResourceSpawn.idl(97):   	spawnPool = 0;
	spawnPool = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(98):   	spawnAttributes.setNoDuplicateInsertPlan();
	(&spawnAttributes)->setNoDuplicateInsertPlan();
	// server/zone/objects/resource/ResourceSpawn.idl(100):   	containerReferenceCount = 0;
	containerReferenceCount = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(101):   	unitsInCirculation = 0;
	unitsInCirculation = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(102):   	maxUnitsSpawned = 0;
	maxUnitsSpawned = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(103):   	containerCRC = 0;
	containerCRC = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(104):   	spawned = 0;
	spawned = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(105):   	despawned = 0;
	despawned = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(106):   	surveyToolType = 0;
	surveyToolType = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(107):   	zoneRestriction = 0;
	zoneRestriction = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(108):   	spawnPool = 0;
	spawnPool = 0;
	// server/zone/objects/resource/ResourceSpawn.idl(109):   	dbDestroyed = false;
	dbDestroyed = false;
	// server/zone/objects/resource/ResourceSpawn.idl(110):   	energy = false;
	energy = false;
	// server/zone/objects/resource/ResourceSpawn.idl(112):   	setLoggingName("ResourceSpawn");
	setLoggingName("ResourceSpawn");
}

void ResourceSpawnImplementation::finalize() {
	// server/zone/objects/resource/ResourceSpawn.idl(116):   	Logger.info("trying to delete ResourceSpawn: " + spawnName);
	Logger::info("trying to delete ResourceSpawn: " + spawnName);
}

void ResourceSpawnImplementation::setName(const String& name) {
	// server/zone/objects/resource/ResourceSpawn.idl(142):   	spawnName = name;
	spawnName = name;
}

void ResourceSpawnImplementation::setType(const String& type) {
	// server/zone/objects/resource/ResourceSpawn.idl(146):   	spawnType = type;
	spawnType = type;
}

void ResourceSpawnImplementation::setSpawnPool(int pool) {
	// server/zone/objects/resource/ResourceSpawn.idl(150):   	spawnPool = pool;
	spawnPool = pool;
	// server/zone/objects/resource/ResourceSpawn.idl(151):   }
	if (spawnPool == 0){
	// server/zone/objects/resource/ResourceSpawn.idl(152):   		spawnMaps.removeAll();
	(&spawnMaps)->removeAll();
}
}

void ResourceSpawnImplementation::setZoneRestriction(int zone) {
	// server/zone/objects/resource/ResourceSpawn.idl(157):   	zoneRestriction = zone;
	zoneRestriction = zone;
}

void ResourceSpawnImplementation::addClass(const String& newclass) {
	// server/zone/objects/resource/ResourceSpawn.idl(167):   	spawnClasses.add(newclass);
	(&spawnClasses)->add(newclass);
}

void ResourceSpawnImplementation::addStfClass(const String& newclass) {
	// server/zone/objects/resource/ResourceSpawn.idl(171):   	stfSpawnClasses.add(newclass);
	(&stfSpawnClasses)->add(newclass);
}

bool ResourceSpawnImplementation::isType(const String& type) {
	// server/zone/objects/resource/ResourceSpawn.idl(177):  
	for (	// server/zone/objects/resource/ResourceSpawn.idl(177):  		for(int i = 0;
	int i = 0;
	i < (&stfSpawnClasses)->size();
 ++i) {
	// server/zone/objects/resource/ResourceSpawn.idl(178):  		}
	if ((&stfSpawnClasses)->get(i) == type)	// server/zone/objects/resource/ResourceSpawn.idl(179):  				return true;
	return true;
}
	// server/zone/objects/resource/ResourceSpawn.idl(181):  
	for (	// server/zone/objects/resource/ResourceSpawn.idl(181):  		for(int i = 0;
	int i = 0;
	i < (&spawnClasses)->size();
 ++i) {
	// server/zone/objects/resource/ResourceSpawn.idl(182):  		}
	if ((&spawnClasses)->get(i) == type)	// server/zone/objects/resource/ResourceSpawn.idl(183):  				return true;
	return true;
}
	// server/zone/objects/resource/ResourceSpawn.idl(185):  		return false;
	return false;
}

void ResourceSpawnImplementation::setSurveyToolType(int type) {
	// server/zone/objects/resource/ResourceSpawn.idl(189):  		surveyToolType = type;
	surveyToolType = type;
}

void ResourceSpawnImplementation::setIsEnergy(bool val) {
	// server/zone/objects/resource/ResourceSpawn.idl(193):  		energy = val;
	energy = val;
}

String ResourceSpawnImplementation::getName() {
	// server/zone/objects/resource/ResourceSpawn.idl(198):  		return spawnName;
	return spawnName;
}

String ResourceSpawnImplementation::getType() {
	// server/zone/objects/resource/ResourceSpawn.idl(202):   	return spawnType;
	return spawnType;
}

String ResourceSpawnImplementation::getClass(int index) {
	// server/zone/objects/resource/ResourceSpawn.idl(206):  
	if (index < (&spawnClasses)->size()){
	// server/zone/objects/resource/ResourceSpawn.idl(207):   		return spawnClasses.get(index);
	return (&spawnClasses)->get(index);
}

	else {
	// server/zone/objects/resource/ResourceSpawn.idl(209):   		return "";
	return "";
}
}

String ResourceSpawnImplementation::getFinalClass() {
	// server/zone/objects/resource/ResourceSpawn.idl(214):  
	if ((&spawnClasses)->size() > 1)	// server/zone/objects/resource/ResourceSpawn.idl(215):   		return spawnClasses.get(spawnClasses.size() - 1);
	return (&spawnClasses)->get((&spawnClasses)->size() - 1);

	else 	// server/zone/objects/resource/ResourceSpawn.idl(217):   		return "";
	return "";
}

void ResourceSpawnImplementation::setSpawned(unsigned long long t) {
	// server/zone/objects/resource/ResourceSpawn.idl(223):   	spawned = t;
	spawned = t;
}

void ResourceSpawnImplementation::setDespawned(unsigned long long t) {
	// server/zone/objects/resource/ResourceSpawn.idl(227):   	despawned = t;
	despawned = t;
}

unsigned long long ResourceSpawnImplementation::getDespawned() {
	// server/zone/objects/resource/ResourceSpawn.idl(231):   	return despawned;
	return despawned;
}

void ResourceSpawnImplementation::setContainerCRC(unsigned int crc) {
	// server/zone/objects/resource/ResourceSpawn.idl(235):   	containerCRC = crc;
	containerCRC = crc;
}

unsigned int ResourceSpawnImplementation::getContainerCRC() {
	// server/zone/objects/resource/ResourceSpawn.idl(239):   	return containerCRC;
	return containerCRC;
}

int ResourceSpawnImplementation::getSpawnPool() {
	// server/zone/objects/resource/ResourceSpawn.idl(243):   	return spawnPool;
	return spawnPool;
}

bool ResourceSpawnImplementation::isEnergy() {
	// server/zone/objects/resource/ResourceSpawn.idl(247):   	return energy;
	return energy;
}

int ResourceSpawnImplementation::getZoneRestriction() {
	// server/zone/objects/resource/ResourceSpawn.idl(251):   	return zoneRestriction;
	return zoneRestriction;
}

int ResourceSpawnImplementation::getSurveyToolType() {
	// server/zone/objects/resource/ResourceSpawn.idl(255):   	return surveyToolType;
	return surveyToolType;
}

int ResourceSpawnImplementation::getSpawnMapSize() {
	// server/zone/objects/resource/ResourceSpawn.idl(259):   	return spawnMaps.size();
	return (&spawnMaps)->size();
}

int ResourceSpawnImplementation::getAttributeValue(int index) {
	// server/zone/objects/resource/ResourceSpawn.idl(294):   	return spawnAttributes.get(index);
	return (&spawnAttributes)->get(index);
}

int ResourceSpawnImplementation::getValueOf(int index) {
	// server/zone/objects/resource/ResourceSpawn.idl(298):   	return indexedStats.get(index);
	return (&indexedStats)->get(index);
}

/*
 *	ResourceSpawnAdapter
 */

ResourceSpawnAdapter::ResourceSpawnAdapter(ResourceSpawnImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* ResourceSpawnAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		finalize();
		break;
	case 7:
		initializeTransientMembers();
		break;
	case 8:
		decreaseContainerReferenceCount();
		break;
	case 9:
		setName(inv->getAsciiParameter(_param0_setName__String_));
		break;
	case 10:
		setType(inv->getAsciiParameter(_param0_setType__String_));
		break;
	case 11:
		setSpawnPool(inv->getSignedIntParameter());
		break;
	case 12:
		setZoneRestriction(inv->getSignedIntParameter());
		break;
	case 13:
		addClass(inv->getAsciiParameter(_param0_addClass__String_));
		break;
	case 14:
		addStfClass(inv->getAsciiParameter(_param0_addStfClass__String_));
		break;
	case 15:
		addAttribute(inv->getAsciiParameter(_param0_addAttribute__String_int_int_), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 16:
		resp->insertBoolean(isType(inv->getAsciiParameter(_param0_isType__String_)));
		break;
	case 17:
		setSurveyToolType(inv->getSignedIntParameter());
		break;
	case 18:
		setIsEnergy(inv->getBooleanParameter());
		break;
	case 19:
		resp->insertAscii(getName());
		break;
	case 20:
		resp->insertAscii(getType());
		break;
	case 21:
		resp->insertAscii(getClass(inv->getSignedIntParameter()));
		break;
	case 22:
		resp->insertAscii(getFinalClass());
		break;
	case 23:
		resp->insertAscii(getFamilyName());
		break;
	case 24:
		setSpawned(inv->getUnsignedLongParameter());
		break;
	case 25:
		setDespawned(inv->getUnsignedLongParameter());
		break;
	case 26:
		resp->insertLong(getDespawned());
		break;
	case 27:
		setContainerCRC(inv->getUnsignedIntParameter());
		break;
	case 28:
		resp->insertInt(getContainerCRC());
		break;
	case 29:
		resp->insertSignedInt(getSpawnPool());
		break;
	case 30:
		resp->insertBoolean(isEnergy());
		break;
	case 31:
		resp->insertSignedInt(getZoneRestriction());
		break;
	case 32:
		resp->insertSignedInt(getSurveyToolType());
		break;
	case 33:
		resp->insertSignedInt(getSpawnMapSize());
		break;
	case 34:
		extractResource(inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 35:
		resp->insertLong(createResource(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 36:
		resp->insertInt(getPlanetCRC());
		break;
	case 37:
		resp->insertSignedInt(getAttributeValue(inv->getSignedIntParameter()));
		break;
	case 38:
		resp->insertSignedInt(getValueOf(inv->getSignedIntParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceSpawnAdapter::finalize() {
	((ResourceSpawnImplementation*) impl)->finalize();
}

void ResourceSpawnAdapter::initializeTransientMembers() {
	((ResourceSpawnImplementation*) impl)->initializeTransientMembers();
}

void ResourceSpawnAdapter::decreaseContainerReferenceCount() {
	((ResourceSpawnImplementation*) impl)->decreaseContainerReferenceCount();
}

void ResourceSpawnAdapter::setName(const String& name) {
	((ResourceSpawnImplementation*) impl)->setName(name);
}

void ResourceSpawnAdapter::setType(const String& type) {
	((ResourceSpawnImplementation*) impl)->setType(type);
}

void ResourceSpawnAdapter::setSpawnPool(int pool) {
	((ResourceSpawnImplementation*) impl)->setSpawnPool(pool);
}

void ResourceSpawnAdapter::setZoneRestriction(int zone) {
	((ResourceSpawnImplementation*) impl)->setZoneRestriction(zone);
}

void ResourceSpawnAdapter::addClass(const String& newclass) {
	((ResourceSpawnImplementation*) impl)->addClass(newclass);
}

void ResourceSpawnAdapter::addStfClass(const String& newclass) {
	((ResourceSpawnImplementation*) impl)->addStfClass(newclass);
}

void ResourceSpawnAdapter::addAttribute(const String& attribute, int value, int index) {
	((ResourceSpawnImplementation*) impl)->addAttribute(attribute, value, index);
}

bool ResourceSpawnAdapter::isType(const String& type) {
	return ((ResourceSpawnImplementation*) impl)->isType(type);
}

void ResourceSpawnAdapter::setSurveyToolType(int type) {
	((ResourceSpawnImplementation*) impl)->setSurveyToolType(type);
}

void ResourceSpawnAdapter::setIsEnergy(bool val) {
	((ResourceSpawnImplementation*) impl)->setIsEnergy(val);
}

String ResourceSpawnAdapter::getName() {
	return ((ResourceSpawnImplementation*) impl)->getName();
}

String ResourceSpawnAdapter::getType() {
	return ((ResourceSpawnImplementation*) impl)->getType();
}

String ResourceSpawnAdapter::getClass(int index) {
	return ((ResourceSpawnImplementation*) impl)->getClass(index);
}

String ResourceSpawnAdapter::getFinalClass() {
	return ((ResourceSpawnImplementation*) impl)->getFinalClass();
}

String ResourceSpawnAdapter::getFamilyName() {
	return ((ResourceSpawnImplementation*) impl)->getFamilyName();
}

void ResourceSpawnAdapter::setSpawned(unsigned long long t) {
	((ResourceSpawnImplementation*) impl)->setSpawned(t);
}

void ResourceSpawnAdapter::setDespawned(unsigned long long t) {
	((ResourceSpawnImplementation*) impl)->setDespawned(t);
}

unsigned long long ResourceSpawnAdapter::getDespawned() {
	return ((ResourceSpawnImplementation*) impl)->getDespawned();
}

void ResourceSpawnAdapter::setContainerCRC(unsigned int crc) {
	((ResourceSpawnImplementation*) impl)->setContainerCRC(crc);
}

unsigned int ResourceSpawnAdapter::getContainerCRC() {
	return ((ResourceSpawnImplementation*) impl)->getContainerCRC();
}

int ResourceSpawnAdapter::getSpawnPool() {
	return ((ResourceSpawnImplementation*) impl)->getSpawnPool();
}

bool ResourceSpawnAdapter::isEnergy() {
	return ((ResourceSpawnImplementation*) impl)->isEnergy();
}

int ResourceSpawnAdapter::getZoneRestriction() {
	return ((ResourceSpawnImplementation*) impl)->getZoneRestriction();
}

int ResourceSpawnAdapter::getSurveyToolType() {
	return ((ResourceSpawnImplementation*) impl)->getSurveyToolType();
}

int ResourceSpawnAdapter::getSpawnMapSize() {
	return ((ResourceSpawnImplementation*) impl)->getSpawnMapSize();
}

void ResourceSpawnAdapter::extractResource(int zoneid, int units) {
	((ResourceSpawnImplementation*) impl)->extractResource(zoneid, units);
}

ResourceContainer* ResourceSpawnAdapter::createResource(int units) {
	return ((ResourceSpawnImplementation*) impl)->createResource(units);
}

unsigned int ResourceSpawnAdapter::getPlanetCRC() {
	return ((ResourceSpawnImplementation*) impl)->getPlanetCRC();
}

int ResourceSpawnAdapter::getAttributeValue(int index) {
	return ((ResourceSpawnImplementation*) impl)->getAttributeValue(index);
}

int ResourceSpawnAdapter::getValueOf(int index) {
	return ((ResourceSpawnImplementation*) impl)->getValueOf(index);
}

/*
 *	ResourceSpawnHelper
 */

ResourceSpawnHelper* ResourceSpawnHelper::staticInitializer = ResourceSpawnHelper::instance();

ResourceSpawnHelper::ResourceSpawnHelper() {
	className = "ResourceSpawn";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceSpawnHelper::finalizeHelper() {
	ResourceSpawnHelper::finalize();
}

DistributedObject* ResourceSpawnHelper::instantiateObject() {
	return new ResourceSpawn(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceSpawnHelper::instantiateServant() {
	return new ResourceSpawnImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceSpawnHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceSpawnAdapter((ResourceSpawnImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

