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
 *	server/zone/objects/tangible/resource/ResourceContainer.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../../scene/SceneObject.h"

#include "../../creature/CreatureObject.h"

#include "../../player/Player.h"

#include "../TangibleObject.h"

#include "ResourceContainer.h"

#include "ResourceContainerImplementation.h"

/*
 *	ResourceContainerStub
 */

ResourceContainer::ResourceContainer() : TangibleObject(NULL) {
}

ResourceContainer::ResourceContainer(ORBObjectServant* obj) : TangibleObject(obj) {
}

ResourceContainer::ResourceContainer(ResourceContainer& ref) : TangibleObject(ref) {
}

ResourceContainer::~ResourceContainer() {
}

ResourceContainer* ResourceContainer::clone() {
	return new ResourceContainer(*this);
}


void ResourceContainer::init() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->init();
}

void ResourceContainer::sendTo(Player* player, bool doClose) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addObjectParameter(player);
		invocation.addBooleanParameter(doClose);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->sendTo(player, doClose);
}

void ResourceContainer::sendDeltas(Player* player) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->sendDeltas(player);
}

void ResourceContainer::generateAttributes(SceneObject* obj) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addObjectParameter(obj);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->generateAttributes(obj);
}

void ResourceContainer::splitContainer(Player* player, int newQuantity) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addObjectParameter(player);
		invocation.addSignedIntParameter(newQuantity);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->splitContainer(player, newQuantity);
}

void ResourceContainer::transferContents(Player* player, ResourceContainer* fromRCO) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addObjectParameter(player);
		invocation.addObjectParameter(fromRCO);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->transferContents(player, fromRCO);
}

void ResourceContainer::setContents(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setContents(i);
}

void ResourceContainer::setDecayResistance(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setDecayResistance(i);
}

void ResourceContainer::setQuality(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setQuality(i);
}

void ResourceContainer::setFlavor(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setFlavor(i);
}

void ResourceContainer::setPotentialEnergy(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setPotentialEnergy(i);
}

void ResourceContainer::setMalleability(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setMalleability(i);
}

void ResourceContainer::setToughness(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setToughness(i);
}

void ResourceContainer::setShockResistance(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setShockResistance(i);
}

void ResourceContainer::setColdResistance(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setColdResistance(i);
}

void ResourceContainer::setHeatResistance(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setHeatResistance(i);
}

void ResourceContainer::setConductivity(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 22);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setConductivity(i);
}

void ResourceContainer::setEntangleResistance(int i) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 23);
		invocation.addSignedIntParameter(i);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setEntangleResistance(i);
}

void ResourceContainer::setResourceName(unicode& n) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 24);
		invocation.addUnicodeParameter(n);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setResourceName(n);
}

void ResourceContainer::setContainerFile(string& tempn) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 25);
		invocation.addAsciiParameter(tempn);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setContainerFile(tempn);
}

void ResourceContainer::setObjectCRC(int tempCRC) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 26);
		invocation.addSignedIntParameter(tempCRC);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setObjectCRC(tempCRC);
}

void ResourceContainer::setResourceID(unsigned long long rid) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 27);
		invocation.addUnsignedLongParameter(rid);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setResourceID(rid);
}

void ResourceContainer::setObjectSubType(int subType) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 28);
		invocation.addSignedIntParameter(subType);

		invocation.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setObjectSubType(subType);
}

int ResourceContainer::getContents() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 29);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getContents();
}

int ResourceContainer::getDecayResistance() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 30);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getDecayResistance();
}

int ResourceContainer::getQuality() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 31);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getQuality();
}

int ResourceContainer::getFlavor() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 32);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getFlavor();
}

int ResourceContainer::getPotentialEnergy() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 33);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getPotentialEnergy();
}

int ResourceContainer::getMalleability() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 34);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getMalleability();
}

int ResourceContainer::getToughness() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 35);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getToughness();
}

int ResourceContainer::getShockResistance() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 36);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getShockResistance();
}

int ResourceContainer::getColdResistance() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 37);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getColdResistance();
}

int ResourceContainer::getHeatResistance() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 38);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getHeatResistance();
}

int ResourceContainer::getConductivity() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 39);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getConductivity();
}

int ResourceContainer::getEntangleResistance() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 40);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getEntangleResistance();
}

unsigned long long ResourceContainer::getResourceID() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 41);

		return invocation.executeWithUnsignedLongReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getResourceID();
}

int ResourceContainer::getMaxContents() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 42);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getMaxContents();
}

/*
 *	ResourceContainerAdapter
 */

ResourceContainerAdapter::ResourceContainerAdapter(ResourceContainerImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* ResourceContainerAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 8:
		sendDeltas((Player*) inv->getObjectParameter());
		break;
	case 9:
		generateAttributes((SceneObject*) inv->getObjectParameter());
		break;
	case 10:
		splitContainer((Player*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 11:
		transferContents((Player*) inv->getObjectParameter(), (ResourceContainer*) inv->getObjectParameter());
		break;
	case 12:
		setContents(inv->getSignedIntParameter());
		break;
	case 13:
		setDecayResistance(inv->getSignedIntParameter());
		break;
	case 14:
		setQuality(inv->getSignedIntParameter());
		break;
	case 15:
		setFlavor(inv->getSignedIntParameter());
		break;
	case 16:
		setPotentialEnergy(inv->getSignedIntParameter());
		break;
	case 17:
		setMalleability(inv->getSignedIntParameter());
		break;
	case 18:
		setToughness(inv->getSignedIntParameter());
		break;
	case 19:
		setShockResistance(inv->getSignedIntParameter());
		break;
	case 20:
		setColdResistance(inv->getSignedIntParameter());
		break;
	case 21:
		setHeatResistance(inv->getSignedIntParameter());
		break;
	case 22:
		setConductivity(inv->getSignedIntParameter());
		break;
	case 23:
		setEntangleResistance(inv->getSignedIntParameter());
		break;
	case 24:
		setResourceName(inv->getUnicodeParameter(_param0_setResourceName__unicode_));
		break;
	case 25:
		setContainerFile(inv->getAsciiParameter(_param0_setContainerFile__string_));
		break;
	case 26:
		setObjectCRC(inv->getSignedIntParameter());
		break;
	case 27:
		setResourceID(inv->getUnsignedLongParameter());
		break;
	case 28:
		setObjectSubType(inv->getSignedIntParameter());
		break;
	case 29:
		resp->insertSignedInt(getContents());
		break;
	case 30:
		resp->insertSignedInt(getDecayResistance());
		break;
	case 31:
		resp->insertSignedInt(getQuality());
		break;
	case 32:
		resp->insertSignedInt(getFlavor());
		break;
	case 33:
		resp->insertSignedInt(getPotentialEnergy());
		break;
	case 34:
		resp->insertSignedInt(getMalleability());
		break;
	case 35:
		resp->insertSignedInt(getToughness());
		break;
	case 36:
		resp->insertSignedInt(getShockResistance());
		break;
	case 37:
		resp->insertSignedInt(getColdResistance());
		break;
	case 38:
		resp->insertSignedInt(getHeatResistance());
		break;
	case 39:
		resp->insertSignedInt(getConductivity());
		break;
	case 40:
		resp->insertSignedInt(getEntangleResistance());
		break;
	case 41:
		resp->insertLong(getResourceID());
		break;
	case 42:
		resp->insertSignedInt(getMaxContents());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceContainerAdapter::init() {
	return ((ResourceContainerImplementation*) impl)->init();
}

void ResourceContainerAdapter::sendTo(Player* player, bool doClose) {
	return ((ResourceContainerImplementation*) impl)->sendTo(player, doClose);
}

void ResourceContainerAdapter::sendDeltas(Player* player) {
	return ((ResourceContainerImplementation*) impl)->sendDeltas(player);
}

void ResourceContainerAdapter::generateAttributes(SceneObject* obj) {
	return ((ResourceContainerImplementation*) impl)->generateAttributes(obj);
}

void ResourceContainerAdapter::splitContainer(Player* player, int newQuantity) {
	return ((ResourceContainerImplementation*) impl)->splitContainer(player, newQuantity);
}

void ResourceContainerAdapter::transferContents(Player* player, ResourceContainer* fromRCO) {
	return ((ResourceContainerImplementation*) impl)->transferContents(player, fromRCO);
}

void ResourceContainerAdapter::setContents(int i) {
	return ((ResourceContainerImplementation*) impl)->setContents(i);
}

void ResourceContainerAdapter::setDecayResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setDecayResistance(i);
}

void ResourceContainerAdapter::setQuality(int i) {
	return ((ResourceContainerImplementation*) impl)->setQuality(i);
}

void ResourceContainerAdapter::setFlavor(int i) {
	return ((ResourceContainerImplementation*) impl)->setFlavor(i);
}

void ResourceContainerAdapter::setPotentialEnergy(int i) {
	return ((ResourceContainerImplementation*) impl)->setPotentialEnergy(i);
}

void ResourceContainerAdapter::setMalleability(int i) {
	return ((ResourceContainerImplementation*) impl)->setMalleability(i);
}

void ResourceContainerAdapter::setToughness(int i) {
	return ((ResourceContainerImplementation*) impl)->setToughness(i);
}

void ResourceContainerAdapter::setShockResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setShockResistance(i);
}

void ResourceContainerAdapter::setColdResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setColdResistance(i);
}

void ResourceContainerAdapter::setHeatResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setHeatResistance(i);
}

void ResourceContainerAdapter::setConductivity(int i) {
	return ((ResourceContainerImplementation*) impl)->setConductivity(i);
}

void ResourceContainerAdapter::setEntangleResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setEntangleResistance(i);
}

void ResourceContainerAdapter::setResourceName(unicode& n) {
	return ((ResourceContainerImplementation*) impl)->setResourceName(n);
}

void ResourceContainerAdapter::setContainerFile(string& tempn) {
	return ((ResourceContainerImplementation*) impl)->setContainerFile(tempn);
}

void ResourceContainerAdapter::setObjectCRC(int tempCRC) {
	return ((ResourceContainerImplementation*) impl)->setObjectCRC(tempCRC);
}

void ResourceContainerAdapter::setResourceID(unsigned long long rid) {
	return ((ResourceContainerImplementation*) impl)->setResourceID(rid);
}

void ResourceContainerAdapter::setObjectSubType(int subType) {
	return ((ResourceContainerImplementation*) impl)->setObjectSubType(subType);
}

int ResourceContainerAdapter::getContents() {
	return ((ResourceContainerImplementation*) impl)->getContents();
}

int ResourceContainerAdapter::getDecayResistance() {
	return ((ResourceContainerImplementation*) impl)->getDecayResistance();
}

int ResourceContainerAdapter::getQuality() {
	return ((ResourceContainerImplementation*) impl)->getQuality();
}

int ResourceContainerAdapter::getFlavor() {
	return ((ResourceContainerImplementation*) impl)->getFlavor();
}

int ResourceContainerAdapter::getPotentialEnergy() {
	return ((ResourceContainerImplementation*) impl)->getPotentialEnergy();
}

int ResourceContainerAdapter::getMalleability() {
	return ((ResourceContainerImplementation*) impl)->getMalleability();
}

int ResourceContainerAdapter::getToughness() {
	return ((ResourceContainerImplementation*) impl)->getToughness();
}

int ResourceContainerAdapter::getShockResistance() {
	return ((ResourceContainerImplementation*) impl)->getShockResistance();
}

int ResourceContainerAdapter::getColdResistance() {
	return ((ResourceContainerImplementation*) impl)->getColdResistance();
}

int ResourceContainerAdapter::getHeatResistance() {
	return ((ResourceContainerImplementation*) impl)->getHeatResistance();
}

int ResourceContainerAdapter::getConductivity() {
	return ((ResourceContainerImplementation*) impl)->getConductivity();
}

int ResourceContainerAdapter::getEntangleResistance() {
	return ((ResourceContainerImplementation*) impl)->getEntangleResistance();
}

unsigned long long ResourceContainerAdapter::getResourceID() {
	return ((ResourceContainerImplementation*) impl)->getResourceID();
}

int ResourceContainerAdapter::getMaxContents() {
	return ((ResourceContainerImplementation*) impl)->getMaxContents();
}

/*
 *	ResourceContainerHelper
 */

ORBClassHelper* ResourceContainerHelper::instance = new ResourceContainerHelper();

ResourceContainerHelper::ResourceContainerHelper() {
	className = "ResourceContainer";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* ResourceContainerHelper::getInstance() {
	if (instance == NULL)
		return instance = new ResourceContainerHelper();
	else
		return instance;
}

ORBObject* ResourceContainerHelper::instantiateObject() {
	return new ResourceContainer();
}

ORBObjectAdapter* ResourceContainerHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new ResourceContainerAdapter((ResourceContainerImplementation*)obj);

	ORBObjectStub* stub = new ResourceContainer(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	ResourceContainerServant
 */

ResourceContainerServant::ResourceContainerServant(unsigned long long oid, int tp) : TangibleObjectImplementation(oid, tp) {
	_classHelper = ResourceContainerHelper::getInstance();
}

ResourceContainerServant::ResourceContainerServant(unsigned long long oid, const unicode& n, const string& name, int tempCRC, int tp) : TangibleObjectImplementation(oid, n, name, tempCRC, tp) {
	_classHelper = ResourceContainerHelper::getInstance();
}

ResourceContainerServant::ResourceContainerServant(CreatureObject* creature, const unicode& n, const string& name, int tempCRC, int tp) : TangibleObjectImplementation(creature, n, name, tempCRC, tp) {
	_classHelper = ResourceContainerHelper::getInstance();
}

ResourceContainerServant::~ResourceContainerServant() {
}

void ResourceContainerServant::_setStub(ORBObjectStub* stub) {
	_this = (ResourceContainer*) stub;
	TangibleObjectServant::_setStub(stub);
}

ORBObjectStub* ResourceContainerServant::_getStub() {
	return _this;
}

