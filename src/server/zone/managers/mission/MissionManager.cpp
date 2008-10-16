/*
 *	server/zone/managers/mission/MissionManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "MissionManager.h"

#include "MissionManagerImplementation.h"

#include "../../objects/player/Player.h"

#include "../../objects/mission/MissionObject.h"

#include "../../objects/tangible/TangibleObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	MissionManagerStub
 */

MissionManager::MissionManager(ZoneServer* zs, ZoneProcessServerImplementation* ps) {
	_impl = new MissionManagerImplementation(zs, ps);
	_impl->_setStub(this);
}

MissionManager::MissionManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

MissionManager::~MissionManager() {
}

void MissionManager::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->init();
}

void MissionManager::unloadManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->unloadManager();
}

void MissionManager::removeMissions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->removeMissions();
}

MissionObject* MissionManager::poolMission(string& dbKey, int termMask, const string& typeStr, unsigned int descKey, unsigned int titleKey, unsigned int diffLv, float destX, float destY, unsigned int destPlanetCrc, const string& creatorName, unsigned int rewardAmount, float targetX, float targetY, unsigned int targetPlanetCrc, unsigned int depictedObjCrc, const string& descriptionStf, const string& titleStf, unsigned int typeCrc, TangibleObject* deliverItem, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(dbKey);
		method.addSignedIntParameter(termMask);
		method.addAsciiParameter(typeStr);
		method.addUnsignedIntParameter(descKey);
		method.addUnsignedIntParameter(titleKey);
		method.addUnsignedIntParameter(diffLv);
		method.addFloatParameter(destX);
		method.addFloatParameter(destY);
		method.addUnsignedIntParameter(destPlanetCrc);
		method.addAsciiParameter(creatorName);
		method.addUnsignedIntParameter(rewardAmount);
		method.addFloatParameter(targetX);
		method.addFloatParameter(targetY);
		method.addUnsignedIntParameter(targetPlanetCrc);
		method.addUnsignedIntParameter(depictedObjCrc);
		method.addAsciiParameter(descriptionStf);
		method.addAsciiParameter(titleStf);
		method.addUnsignedIntParameter(typeCrc);
		method.addObjectParameter(deliverItem);
		method.addBooleanParameter(doLock);

		return (MissionObject*) method.executeWithObjectReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->poolMission(dbKey, termMask, typeStr, descKey, titleKey, diffLv, destX, destY, destPlanetCrc, creatorName, rewardAmount, targetX, targetY, targetPlanetCrc, depictedObjCrc, descriptionStf, titleStf, typeCrc, deliverItem, doLock);
}

void MissionManager::setupHardcodeMissions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->setupHardcodeMissions();
}

void MissionManager::sendTerminalData(Player* player, int termBitmask, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);
		method.addSignedIntParameter(termBitmask);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->sendTerminalData(player, termBitmask, doLock);
}

void MissionManager::sendMission(Player* player, string& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->sendMission(player, tKey, doLock);
}

void MissionManager::doMissionAccept(Player* player, unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAccept(player, oid, doLock);
}

void MissionManager::doMissionComplete(Player* player, string& tKey) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionComplete(player, tKey);
}

void MissionManager::doMissionAbort(Player* player, unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAbort(player, oid, doLock);
}

void MissionManager::doMissionAbort(Player* player, string& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAbort(player, tKey, doLock);
}

void MissionManager::removeMisoFromPool(MissionObject* miso, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(miso);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->removeMisoFromPool(miso, doLock);
}

unsigned int MissionManager::getMissionItemCrc(string& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->getMissionItemCrc(tKey, doLock);
}

void MissionManager::loadMissionScripts() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->loadMissionScripts();
}

void MissionManager::registerFunctions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->registerFunctions();
}

void MissionManager::registerGlobals() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->registerGlobals();
}

/*
 *	MissionManagerAdapter
 */

MissionManagerAdapter::MissionManagerAdapter(MissionManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* MissionManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		unloadManager();
		break;
	case 8:
		removeMissions();
		break;
	case 9:
		resp->insertLong(poolMission(inv->getAsciiParameter(_param0_poolMission__string_int_string_int_int_int_float_float_int_string_int_float_float_int_int_string_string_int_TangibleObject_bool_), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_poolMission__string_int_string_int_int_int_float_float_int_string_int_float_float_int_int_string_string_int_TangibleObject_bool_), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param9_poolMission__string_int_string_int_int_int_float_float_int_string_int_float_float_int_int_string_string_int_TangibleObject_bool_), inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param15_poolMission__string_int_string_int_int_int_float_float_int_string_int_float_float_int_int_string_string_int_TangibleObject_bool_), inv->getAsciiParameter(_param16_poolMission__string_int_string_int_int_int_float_float_int_string_int_float_float_int_int_string_string_int_TangibleObject_bool_), inv->getUnsignedIntParameter(), (TangibleObject*) inv->getObjectParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 10:
		setupHardcodeMissions();
		break;
	case 11:
		sendTerminalData((Player*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 12:
		sendMission((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendMission__Player_string_bool_), inv->getBooleanParameter());
		break;
	case 13:
		doMissionAccept((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter());
		break;
	case 14:
		doMissionComplete((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionComplete__Player_string_));
		break;
	case 15:
		doMissionAbort((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter());
		break;
	case 16:
		doMissionAbort((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionAbort__Player_string_bool_), inv->getBooleanParameter());
		break;
	case 17:
		removeMisoFromPool((MissionObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 18:
		resp->insertInt(getMissionItemCrc(inv->getAsciiParameter(_param0_getMissionItemCrc__string_bool_), inv->getBooleanParameter()));
		break;
	case 19:
		loadMissionScripts();
		break;
	case 20:
		registerFunctions();
		break;
	case 21:
		registerGlobals();
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionManagerAdapter::init() {
	return ((MissionManagerImplementation*) impl)->init();
}

void MissionManagerAdapter::unloadManager() {
	return ((MissionManagerImplementation*) impl)->unloadManager();
}

void MissionManagerAdapter::removeMissions() {
	return ((MissionManagerImplementation*) impl)->removeMissions();
}

MissionObject* MissionManagerAdapter::poolMission(string& dbKey, int termMask, const string& typeStr, unsigned int descKey, unsigned int titleKey, unsigned int diffLv, float destX, float destY, unsigned int destPlanetCrc, const string& creatorName, unsigned int rewardAmount, float targetX, float targetY, unsigned int targetPlanetCrc, unsigned int depictedObjCrc, const string& descriptionStf, const string& titleStf, unsigned int typeCrc, TangibleObject* deliverItem, bool doLock) {
	return ((MissionManagerImplementation*) impl)->poolMission(dbKey, termMask, typeStr, descKey, titleKey, diffLv, destX, destY, destPlanetCrc, creatorName, rewardAmount, targetX, targetY, targetPlanetCrc, depictedObjCrc, descriptionStf, titleStf, typeCrc, deliverItem, doLock);
}

void MissionManagerAdapter::setupHardcodeMissions() {
	return ((MissionManagerImplementation*) impl)->setupHardcodeMissions();
}

void MissionManagerAdapter::sendTerminalData(Player* player, int termBitmask, bool doLock) {
	return ((MissionManagerImplementation*) impl)->sendTerminalData(player, termBitmask, doLock);
}

void MissionManagerAdapter::sendMission(Player* player, string& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->sendMission(player, tKey, doLock);
}

void MissionManagerAdapter::doMissionAccept(Player* player, unsigned long long oid, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAccept(player, oid, doLock);
}

void MissionManagerAdapter::doMissionComplete(Player* player, string& tKey) {
	return ((MissionManagerImplementation*) impl)->doMissionComplete(player, tKey);
}

void MissionManagerAdapter::doMissionAbort(Player* player, unsigned long long oid, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAbort(player, oid, doLock);
}

void MissionManagerAdapter::doMissionAbort(Player* player, string& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAbort(player, tKey, doLock);
}

void MissionManagerAdapter::removeMisoFromPool(MissionObject* miso, bool doLock) {
	return ((MissionManagerImplementation*) impl)->removeMisoFromPool(miso, doLock);
}

unsigned int MissionManagerAdapter::getMissionItemCrc(string& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->getMissionItemCrc(tKey, doLock);
}

void MissionManagerAdapter::loadMissionScripts() {
	return ((MissionManagerImplementation*) impl)->loadMissionScripts();
}

void MissionManagerAdapter::registerFunctions() {
	return ((MissionManagerImplementation*) impl)->registerFunctions();
}

void MissionManagerAdapter::registerGlobals() {
	return ((MissionManagerImplementation*) impl)->registerGlobals();
}

/*
 *	MissionManagerHelper
 */

MissionManagerHelper* MissionManagerHelper::staticInitializer = MissionManagerHelper::instance();

MissionManagerHelper::MissionManagerHelper() {
	className = "MissionManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionManagerHelper::finalizeHelper() {
	MissionManagerHelper::finalize();
}

DistributedObject* MissionManagerHelper::instantiateObject() {
	return new MissionManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionManagerAdapter((MissionManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	MissionManagerServant
 */

MissionManagerServant::MissionManagerServant() {
	_classHelper = MissionManagerHelper::instance();
}

MissionManagerServant::~MissionManagerServant() {
}

void MissionManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (MissionManager*) stub;
}

DistributedObjectStub* MissionManagerServant::_getStub() {
	return _this;
}

