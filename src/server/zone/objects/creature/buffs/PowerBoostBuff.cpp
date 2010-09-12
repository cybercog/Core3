/*
 *	server/zone/objects/creature/buffs/PowerBoostBuff.cpp generated by engine3 IDL compiler 0.60
 */

#include "PowerBoostBuff.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/buffs/PowerBoostBuffDurationEvent.h"

/*
 *	PowerBoostBuffStub
 */

PowerBoostBuff::PowerBoostBuff(CreatureObject* creo, const String& name, unsigned int buffCRC, int value, int duration) : Buff(DummyConstructorParameter::instance()) {
	_impl = new PowerBoostBuffImplementation(creo, name, buffCRC, value, duration);
	_impl->_setStub(this);
}

PowerBoostBuff::PowerBoostBuff(DummyConstructorParameter* param) : Buff(param) {
}

PowerBoostBuff::~PowerBoostBuff() {
}


void PowerBoostBuff::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((PowerBoostBuffImplementation*) _impl)->initializeTransientMembers();
}

void PowerBoostBuff::activate(bool applyModifiers) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(applyModifiers);

		method.executeWithVoidReturn();
	} else
		((PowerBoostBuffImplementation*) _impl)->activate(applyModifiers);
}

void PowerBoostBuff::deactivate(bool removeModifiers) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addBooleanParameter(removeModifiers);

		method.executeWithVoidReturn();
	} else
		((PowerBoostBuffImplementation*) _impl)->deactivate(removeModifiers);
}

void PowerBoostBuff::doHealthAndActionTick(bool up) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addBooleanParameter(up);

		method.executeWithVoidReturn();
	} else
		((PowerBoostBuffImplementation*) _impl)->doHealthAndActionTick(up);
}

void PowerBoostBuff::doMindTick(bool up) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addBooleanParameter(up);

		method.executeWithVoidReturn();
	} else
		((PowerBoostBuffImplementation*) _impl)->doMindTick(up);
}

void PowerBoostBuff::clearBuffEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((PowerBoostBuffImplementation*) _impl)->clearBuffEvent();
}

/*
 *	PowerBoostBuffImplementation
 */

PowerBoostBuffImplementation::PowerBoostBuffImplementation(DummyConstructorParameter* param) : BuffImplementation(param) {
	_initializeImplementation();
}


PowerBoostBuffImplementation::~PowerBoostBuffImplementation() {
}


void PowerBoostBuffImplementation::finalize() {
}

void PowerBoostBuffImplementation::_initializeImplementation() {
	_setClassHelper(PowerBoostBuffHelper::instance());

	_serializationHelperMethod();
}

void PowerBoostBuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PowerBoostBuff*) stub;
	BuffImplementation::_setStub(stub);
}

DistributedObjectStub* PowerBoostBuffImplementation::_getStub() {
	return _this;
}

PowerBoostBuffImplementation::operator const PowerBoostBuff*() {
	return _this;
}

void PowerBoostBuffImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PowerBoostBuffImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PowerBoostBuffImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PowerBoostBuffImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PowerBoostBuffImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PowerBoostBuffImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PowerBoostBuffImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PowerBoostBuffImplementation::_serializationHelperMethod() {
	BuffImplementation::_serializationHelperMethod();

	_setClassName("PowerBoostBuff");

	addSerializableVariable("pbBonus", &pbBonus);
	addSerializableVariable("time", &time);
	addSerializableVariable("counter", &counter);
	addSerializableVariable("nextTickTime", &nextTickTime);
}

PowerBoostBuffImplementation::PowerBoostBuffImplementation(CreatureObject* creo, const String& name, unsigned int buffCRC, int value, int duration) : BuffImplementation(creo, buffCRC, duration, BuffType::SKILL) {
	_initializeImplementation();
	// server/zone/objects/creature/buffs/PowerBoostBuff.idl(76):  		super.buffName = name;
	BuffImplementation::buffName = name;
	// server/zone/objects/creature/buffs/PowerBoostBuff.idl(77):  		pbBonus = value;
	pbBonus = value;
	// server/zone/objects/creature/buffs/PowerBoostBuff.idl(78):  		time = duration * 1000;
	time = duration * 1000;
	// server/zone/objects/creature/buffs/PowerBoostBuff.idl(79):  		counter = 0;
	counter = 0;
}

/*
 *	PowerBoostBuffAdapter
 */

PowerBoostBuffAdapter::PowerBoostBuffAdapter(PowerBoostBuffImplementation* obj) : BuffAdapter(obj) {
}

Packet* PowerBoostBuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		activate(inv->getBooleanParameter());
		break;
	case 8:
		deactivate(inv->getBooleanParameter());
		break;
	case 9:
		doHealthAndActionTick(inv->getBooleanParameter());
		break;
	case 10:
		doMindTick(inv->getBooleanParameter());
		break;
	case 11:
		clearBuffEvent();
		break;
	default:
		return NULL;
	}

	return resp;
}

void PowerBoostBuffAdapter::initializeTransientMembers() {
	((PowerBoostBuffImplementation*) impl)->initializeTransientMembers();
}

void PowerBoostBuffAdapter::activate(bool applyModifiers) {
	((PowerBoostBuffImplementation*) impl)->activate(applyModifiers);
}

void PowerBoostBuffAdapter::deactivate(bool removeModifiers) {
	((PowerBoostBuffImplementation*) impl)->deactivate(removeModifiers);
}

void PowerBoostBuffAdapter::doHealthAndActionTick(bool up) {
	((PowerBoostBuffImplementation*) impl)->doHealthAndActionTick(up);
}

void PowerBoostBuffAdapter::doMindTick(bool up) {
	((PowerBoostBuffImplementation*) impl)->doMindTick(up);
}

void PowerBoostBuffAdapter::clearBuffEvent() {
	((PowerBoostBuffImplementation*) impl)->clearBuffEvent();
}

/*
 *	PowerBoostBuffHelper
 */

PowerBoostBuffHelper* PowerBoostBuffHelper::staticInitializer = PowerBoostBuffHelper::instance();

PowerBoostBuffHelper::PowerBoostBuffHelper() {
	className = "PowerBoostBuff";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PowerBoostBuffHelper::finalizeHelper() {
	PowerBoostBuffHelper::finalize();
}

DistributedObject* PowerBoostBuffHelper::instantiateObject() {
	return new PowerBoostBuff(DummyConstructorParameter::instance());
}

DistributedObjectServant* PowerBoostBuffHelper::instantiateServant() {
	return new PowerBoostBuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PowerBoostBuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PowerBoostBuffAdapter((PowerBoostBuffImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

