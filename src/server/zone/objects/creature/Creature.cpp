/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/creature/Creature.cpp generated by Engine3 IDL compiler 0.51
 */

#include "CreatureObject.h"

#include "CreatureGroup.h"

#include "../../Zone.h"

#include "../player/Player.h"

#include "../tangible/wearables/Armor.h"

#include "../tangible/lair/LairObject.h"

#include "Creature.h"

#include "CreatureImplementation.h"

/*
 *	CreatureStub
 */

Creature::Creature() : CreatureObject(NULL) {
}

Creature::Creature(ORBObjectServant* obj) : CreatureObject(obj) {
}

Creature::Creature(Creature& ref) : CreatureObject(ref) {
}

Creature::~Creature() {
}

Creature* Creature::clone() {
	return new Creature(*this);
}


void Creature::init() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->init();
}

void Creature::unload() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->unload();
}

void Creature::insertToZone(Zone* zone) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(zone);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->insertToZone(zone);
}

void Creature::updateZone() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->updateZone();
}

void Creature::removeFromZone(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->removeFromZone(doLock);
}

void Creature::loadItems() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->loadItems();
}

bool Creature::activate() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CreatureImplementation*) _impl)->activate();
}

bool Creature::isActive() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CreatureImplementation*) _impl)->isActive();
}

void Creature::removeFromQueue() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->removeFromQueue();
}

bool Creature::doMovement() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CreatureImplementation*) _impl)->doMovement();
}

void Creature::doIncapacitate() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->doIncapacitate();
}

void Creature::doStandUp() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->doStandUp();
}

void Creature::doAttack(CreatureObject* target, int damage) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);
		invocation.addObjectParameter(target);
		invocation.addSignedIntParameter(damage);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->doAttack(target, damage);
}

bool Creature::attack(CreatureObject* target) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);
		invocation.addObjectParameter(target);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CreatureImplementation*) _impl)->attack(target);
}

void Creature::activateRecovery() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->activateRecovery();
}

bool Creature::doRecovery() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CreatureImplementation*) _impl)->doRecovery();
}

void Creature::doStatesRecovery() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 22);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->doStatesRecovery();
}

void Creature::queueRespawn() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 23);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->queueRespawn();
}

void Creature::addPatrolPoint(float x, float y, bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 24);
		invocation.addFloatParameter(x);
		invocation.addFloatParameter(y);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->addPatrolPoint(x, y, doLock);
}

void Creature::resetPatrolPoints(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 25);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->resetPatrolPoints(doLock);
}

int Creature::compareTo(Creature* creature) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 26);
		invocation.addObjectParameter(creature);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((CreatureImplementation*) _impl)->compareTo(creature);
}

void Creature::setLair(LairObject* Lair) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 27);
		invocation.addObjectParameter(Lair);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->setLair(Lair);
}

void Creature::setCreatureGroup(CreatureGroup* group) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 28);
		invocation.addObjectParameter(group);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->setCreatureGroup(group);
}

void Creature::setObjectFileName(string& name) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 29);
		invocation.addAsciiParameter(name);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->setObjectFileName(name);
}

void Creature::setType(int tp) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 30);
		invocation.addSignedIntParameter(tp);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->setType(tp);
}

void Creature::setRespawnTimer(unsigned int seconds) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 31);
		invocation.addUnsignedIntParameter(seconds);

		invocation.executeWithVoidReturn();
	} else
		((CreatureImplementation*) _impl)->setRespawnTimer(seconds);
}

int Creature::getType() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 32);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((CreatureImplementation*) _impl)->getType();
}

bool Creature::isTrainer() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 33);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CreatureImplementation*) _impl)->isTrainer();
}

bool Creature::isRecruiter() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 34);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CreatureImplementation*) _impl)->isRecruiter();
}

bool Creature::isMount() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 35);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CreatureImplementation*) _impl)->isMount();
}

string& Creature::getName() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 36);

		invocation.executeWithAsciiReturn(_return_getName);
		return _return_getName;
	} else
		return ((CreatureImplementation*) _impl)->getName();
}

int Creature::getZoneIndex() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 37);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((CreatureImplementation*) _impl)->getZoneIndex();
}

Zone* Creature::getZone() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 38);

		return (Zone*) invocation.executeWithObjectReturn();
	} else
		return ((CreatureImplementation*) _impl)->getZone();
}

unsigned long long Creature::getNewItemID() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 39);

		return invocation.executeWithUnsignedLongReturn();
	} else
		return ((CreatureImplementation*) _impl)->getNewItemID();
}

unsigned int Creature::getRespawnTimer() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 40);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((CreatureImplementation*) _impl)->getRespawnTimer();
}

LairObject* Creature::getLair() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 41);

		return (LairObject*) invocation.executeWithObjectReturn();
	} else
		return ((CreatureImplementation*) _impl)->getLair();
}

/*
 *	CreatureAdapter
 */

CreatureAdapter::CreatureAdapter(CreatureImplementation* obj) : CreatureObjectAdapter(obj) {
}

Packet* CreatureAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		unload();
		break;
	case 8:
		insertToZone((Zone*) inv->getObjectParameter());
		break;
	case 9:
		updateZone();
		break;
	case 10:
		removeFromZone(inv->getBooleanParameter());
		break;
	case 11:
		loadItems();
		break;
	case 12:
		resp->insertBoolean(activate());
		break;
	case 13:
		resp->insertBoolean(isActive());
		break;
	case 14:
		removeFromQueue();
		break;
	case 15:
		resp->insertBoolean(doMovement());
		break;
	case 16:
		doIncapacitate();
		break;
	case 17:
		doStandUp();
		break;
	case 18:
		doAttack((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 19:
		resp->insertBoolean(attack((CreatureObject*) inv->getObjectParameter()));
		break;
	case 20:
		activateRecovery();
		break;
	case 21:
		resp->insertBoolean(doRecovery());
		break;
	case 22:
		doStatesRecovery();
		break;
	case 23:
		queueRespawn();
		break;
	case 24:
		addPatrolPoint(inv->getFloatParameter(), inv->getFloatParameter(), inv->getBooleanParameter());
		break;
	case 25:
		resetPatrolPoints(inv->getBooleanParameter());
		break;
	case 26:
		resp->insertSignedInt(compareTo((Creature*) inv->getObjectParameter()));
		break;
	case 27:
		setLair((LairObject*) inv->getObjectParameter());
		break;
	case 28:
		setCreatureGroup((CreatureGroup*) inv->getObjectParameter());
		break;
	case 29:
		setObjectFileName(inv->getAsciiParameter(_param0_setObjectFileName__string_));
		break;
	case 30:
		setType(inv->getSignedIntParameter());
		break;
	case 31:
		setRespawnTimer(inv->getUnsignedIntParameter());
		break;
	case 32:
		resp->insertSignedInt(getType());
		break;
	case 33:
		resp->insertBoolean(isTrainer());
		break;
	case 34:
		resp->insertBoolean(isRecruiter());
		break;
	case 35:
		resp->insertBoolean(isMount());
		break;
	case 36:
		resp->insertAscii(getName());
		break;
	case 37:
		resp->insertSignedInt(getZoneIndex());
		break;
	case 38:
		resp->insertLong(getZone()->_getORBObjectID());
		break;
	case 39:
		resp->insertLong(getNewItemID());
		break;
	case 40:
		resp->insertInt(getRespawnTimer());
		break;
	case 41:
		resp->insertLong(getLair()->_getORBObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CreatureAdapter::init() {
	return ((CreatureImplementation*) impl)->init();
}

void CreatureAdapter::unload() {
	return ((CreatureImplementation*) impl)->unload();
}

void CreatureAdapter::insertToZone(Zone* zone) {
	return ((CreatureImplementation*) impl)->insertToZone(zone);
}

void CreatureAdapter::updateZone() {
	return ((CreatureImplementation*) impl)->updateZone();
}

void CreatureAdapter::removeFromZone(bool doLock) {
	return ((CreatureImplementation*) impl)->removeFromZone(doLock);
}

void CreatureAdapter::loadItems() {
	return ((CreatureImplementation*) impl)->loadItems();
}

bool CreatureAdapter::activate() {
	return ((CreatureImplementation*) impl)->activate();
}

bool CreatureAdapter::isActive() {
	return ((CreatureImplementation*) impl)->isActive();
}

void CreatureAdapter::removeFromQueue() {
	return ((CreatureImplementation*) impl)->removeFromQueue();
}

bool CreatureAdapter::doMovement() {
	return ((CreatureImplementation*) impl)->doMovement();
}

void CreatureAdapter::doIncapacitate() {
	return ((CreatureImplementation*) impl)->doIncapacitate();
}

void CreatureAdapter::doStandUp() {
	return ((CreatureImplementation*) impl)->doStandUp();
}

void CreatureAdapter::doAttack(CreatureObject* target, int damage) {
	return ((CreatureImplementation*) impl)->doAttack(target, damage);
}

bool CreatureAdapter::attack(CreatureObject* target) {
	return ((CreatureImplementation*) impl)->attack(target);
}

void CreatureAdapter::activateRecovery() {
	return ((CreatureImplementation*) impl)->activateRecovery();
}

bool CreatureAdapter::doRecovery() {
	return ((CreatureImplementation*) impl)->doRecovery();
}

void CreatureAdapter::doStatesRecovery() {
	return ((CreatureImplementation*) impl)->doStatesRecovery();
}

void CreatureAdapter::queueRespawn() {
	return ((CreatureImplementation*) impl)->queueRespawn();
}

void CreatureAdapter::addPatrolPoint(float x, float y, bool doLock) {
	return ((CreatureImplementation*) impl)->addPatrolPoint(x, y, doLock);
}

void CreatureAdapter::resetPatrolPoints(bool doLock) {
	return ((CreatureImplementation*) impl)->resetPatrolPoints(doLock);
}

int CreatureAdapter::compareTo(Creature* creature) {
	return ((CreatureImplementation*) impl)->compareTo(creature);
}

void CreatureAdapter::setLair(LairObject* Lair) {
	return ((CreatureImplementation*) impl)->setLair(Lair);
}

void CreatureAdapter::setCreatureGroup(CreatureGroup* group) {
	return ((CreatureImplementation*) impl)->setCreatureGroup(group);
}

void CreatureAdapter::setObjectFileName(string& name) {
	return ((CreatureImplementation*) impl)->setObjectFileName(name);
}

void CreatureAdapter::setType(int tp) {
	return ((CreatureImplementation*) impl)->setType(tp);
}

void CreatureAdapter::setRespawnTimer(unsigned int seconds) {
	return ((CreatureImplementation*) impl)->setRespawnTimer(seconds);
}

int CreatureAdapter::getType() {
	return ((CreatureImplementation*) impl)->getType();
}

bool CreatureAdapter::isTrainer() {
	return ((CreatureImplementation*) impl)->isTrainer();
}

bool CreatureAdapter::isRecruiter() {
	return ((CreatureImplementation*) impl)->isRecruiter();
}

bool CreatureAdapter::isMount() {
	return ((CreatureImplementation*) impl)->isMount();
}

string& CreatureAdapter::getName() {
	return ((CreatureImplementation*) impl)->getName();
}

int CreatureAdapter::getZoneIndex() {
	return ((CreatureImplementation*) impl)->getZoneIndex();
}

Zone* CreatureAdapter::getZone() {
	return ((CreatureImplementation*) impl)->getZone();
}

unsigned long long CreatureAdapter::getNewItemID() {
	return ((CreatureImplementation*) impl)->getNewItemID();
}

unsigned int CreatureAdapter::getRespawnTimer() {
	return ((CreatureImplementation*) impl)->getRespawnTimer();
}

LairObject* CreatureAdapter::getLair() {
	return ((CreatureImplementation*) impl)->getLair();
}

/*
 *	CreatureHelper
 */

ORBClassHelper* CreatureHelper::instance = new CreatureHelper();

CreatureHelper::CreatureHelper() {
	className = "Creature";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* CreatureHelper::getInstance() {
	if (instance == NULL)
		return instance = new CreatureHelper();
	else
		return instance;
}

ORBObject* CreatureHelper::instantiateObject() {
	return new Creature();
}

ORBObjectAdapter* CreatureHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new CreatureAdapter((CreatureImplementation*)obj);

	ORBObjectStub* stub = new Creature(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	CreatureServant
 */

CreatureServant::CreatureServant(unsigned long long oid) : CreatureObjectImplementation(oid) {
	_classHelper = CreatureHelper::getInstance();
}

CreatureServant::~CreatureServant() {
}

void CreatureServant::_setStub(ORBObjectStub* stub) {
	_this = (Creature*) stub;
	CreatureObjectServant::_setStub(stub);
}

ORBObjectStub* CreatureServant::_getStub() {
	return _this;
}

