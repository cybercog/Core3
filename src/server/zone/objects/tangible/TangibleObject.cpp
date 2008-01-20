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
 *	server/zone/objects/tangible/TangibleObject.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "../../Zone.h"

#include "TangibleObject.h"

#include "TangibleObjectImplementation.h"

/*
 *	TangibleObjectStub
 */

TangibleObject::TangibleObject() : SceneObject(NULL) {
}

TangibleObject::TangibleObject(ORBObjectServant* obj) : SceneObject(obj) {
}

TangibleObject::TangibleObject(TangibleObject& ref) : SceneObject(ref) {
}

TangibleObject::~TangibleObject() {
}

TangibleObject* TangibleObject::clone() {
	return new TangibleObject(*this);
}


void TangibleObject::insertToZone(Zone* zone) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(zone);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->insertToZone(zone);
}

void TangibleObject::removeFromZone() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->removeFromZone();
}

void TangibleObject::close(Player* player) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->close(player);
}

void TangibleObject::setEquipped(bool eqp) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addBooleanParameter(eqp);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setEquipped(eqp);
}

void TangibleObject::setContainer(SceneObject* cont, unsigned int type) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addObjectParameter(cont);
		invocation.addUnsignedIntParameter(type);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setContainer(cont, type);
}

void TangibleObject::sendTo(Player* player, bool doClose) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addObjectParameter(player);
		invocation.addBooleanParameter(doClose);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->sendTo(player, doClose);
}

void TangibleObject::repairItem(Player* player) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->repairItem(player);
}

void TangibleObject::decay(int decayRate) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);
		invocation.addSignedIntParameter(decayRate);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->decay(decayRate);
}

bool TangibleObject::isPersistent() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isPersistent();
}

bool TangibleObject::isUpdated() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isUpdated();
}

bool TangibleObject::isEquipped() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isEquipped();
}

bool TangibleObject::isWeapon() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isWeapon();
}

bool TangibleObject::isArmor() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isArmor();
}

bool TangibleObject::isResource() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isResource();
}

bool TangibleObject::isTicket() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isTicket();
}

bool TangibleObject::isTicketCollector() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isTicketCollector();
}

bool TangibleObject::isSurveyTool() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 22);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isSurveyTool();
}

void TangibleObject::setPersistent(bool pers) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 23);
		invocation.addBooleanParameter(pers);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setPersistent(pers);
}

void TangibleObject::setUpdated(bool upd) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 24);
		invocation.addBooleanParameter(upd);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setUpdated(upd);
}

void TangibleObject::setConditionDamage(int damage) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 25);
		invocation.addSignedIntParameter(damage);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setConditionDamage(damage);
}

SceneObject* TangibleObject::getContainer() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 26);

		return (SceneObject*) invocation.executeWithObjectReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getContainer();
}

unicode& TangibleObject::getName() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 27);

		invocation.executeWithUnicodeReturn(_return_getName);
		return _return_getName;
	} else
		return ((TangibleObjectImplementation*) _impl)->getName();
}

string& TangibleObject::getTemplateName() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 28);

		invocation.executeWithAsciiReturn(_return_getTemplateName);
		return _return_getTemplateName;
	} else
		return ((TangibleObjectImplementation*) _impl)->getTemplateName();
}

string& TangibleObject::getTemplateTypeName() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 29);

		invocation.executeWithAsciiReturn(_return_getTemplateTypeName);
		return _return_getTemplateTypeName;
	} else
		return ((TangibleObjectImplementation*) _impl)->getTemplateTypeName();
}

string& TangibleObject::getCustomizationString() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 30);

		invocation.executeWithAsciiReturn(_return_getCustomizationString);
		return _return_getCustomizationString;
	} else
		return ((TangibleObjectImplementation*) _impl)->getCustomizationString();
}

int TangibleObject::getObjectSubType() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 31);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getObjectSubType();
}

unsigned int TangibleObject::getTemplateID() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 32);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getTemplateID();
}

int TangibleObject::getObjectCount() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 33);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getObjectCount();
}

int TangibleObject::getConditionDamage() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 34);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getConditionDamage();
}

int TangibleObject::getMaxCondition() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 35);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getMaxCondition();
}

int TangibleObject::getCondition() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 36);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getCondition();
}

/*
 *	TangibleObjectAdapter
 */

TangibleObjectAdapter::TangibleObjectAdapter(TangibleObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* TangibleObjectAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		insertToZone((Zone*) inv->getObjectParameter());
		break;
	case 7:
		removeFromZone();
		break;
	case 8:
		close((Player*) inv->getObjectParameter());
		break;
	case 9:
		setEquipped(inv->getBooleanParameter());
		break;
	case 10:
		setContainer((SceneObject*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 11:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 12:
		repairItem((Player*) inv->getObjectParameter());
		break;
	case 13:
		decay(inv->getSignedIntParameter());
		break;
	case 14:
		resp->insertBoolean(isPersistent());
		break;
	case 15:
		resp->insertBoolean(isUpdated());
		break;
	case 16:
		resp->insertBoolean(isEquipped());
		break;
	case 17:
		resp->insertBoolean(isWeapon());
		break;
	case 18:
		resp->insertBoolean(isArmor());
		break;
	case 19:
		resp->insertBoolean(isResource());
		break;
	case 20:
		resp->insertBoolean(isTicket());
		break;
	case 21:
		resp->insertBoolean(isTicketCollector());
		break;
	case 22:
		resp->insertBoolean(isSurveyTool());
		break;
	case 23:
		setPersistent(inv->getBooleanParameter());
		break;
	case 24:
		setUpdated(inv->getBooleanParameter());
		break;
	case 25:
		setConditionDamage(inv->getSignedIntParameter());
		break;
	case 26:
		resp->insertLong(getContainer()->_getORBObjectID());
		break;
	case 27:
		resp->insertUnicode(getName());
		break;
	case 28:
		resp->insertAscii(getTemplateName());
		break;
	case 29:
		resp->insertAscii(getTemplateTypeName());
		break;
	case 30:
		resp->insertAscii(getCustomizationString());
		break;
	case 31:
		resp->insertSignedInt(getObjectSubType());
		break;
	case 32:
		resp->insertInt(getTemplateID());
		break;
	case 33:
		resp->insertSignedInt(getObjectCount());
		break;
	case 34:
		resp->insertSignedInt(getConditionDamage());
		break;
	case 35:
		resp->insertSignedInt(getMaxCondition());
		break;
	case 36:
		resp->insertSignedInt(getCondition());
		break;
	default:
		return NULL;
	}

	return resp;
}

void TangibleObjectAdapter::insertToZone(Zone* zone) {
	return ((TangibleObjectImplementation*) impl)->insertToZone(zone);
}

void TangibleObjectAdapter::removeFromZone() {
	return ((TangibleObjectImplementation*) impl)->removeFromZone();
}

void TangibleObjectAdapter::close(Player* player) {
	return ((TangibleObjectImplementation*) impl)->close(player);
}

void TangibleObjectAdapter::setEquipped(bool eqp) {
	return ((TangibleObjectImplementation*) impl)->setEquipped(eqp);
}

void TangibleObjectAdapter::setContainer(SceneObject* cont, unsigned int type) {
	return ((TangibleObjectImplementation*) impl)->setContainer(cont, type);
}

void TangibleObjectAdapter::sendTo(Player* player, bool doClose) {
	return ((TangibleObjectImplementation*) impl)->sendTo(player, doClose);
}

void TangibleObjectAdapter::repairItem(Player* player) {
	return ((TangibleObjectImplementation*) impl)->repairItem(player);
}

void TangibleObjectAdapter::decay(int decayRate) {
	return ((TangibleObjectImplementation*) impl)->decay(decayRate);
}

bool TangibleObjectAdapter::isPersistent() {
	return ((TangibleObjectImplementation*) impl)->isPersistent();
}

bool TangibleObjectAdapter::isUpdated() {
	return ((TangibleObjectImplementation*) impl)->isUpdated();
}

bool TangibleObjectAdapter::isEquipped() {
	return ((TangibleObjectImplementation*) impl)->isEquipped();
}

bool TangibleObjectAdapter::isWeapon() {
	return ((TangibleObjectImplementation*) impl)->isWeapon();
}

bool TangibleObjectAdapter::isArmor() {
	return ((TangibleObjectImplementation*) impl)->isArmor();
}

bool TangibleObjectAdapter::isResource() {
	return ((TangibleObjectImplementation*) impl)->isResource();
}

bool TangibleObjectAdapter::isTicket() {
	return ((TangibleObjectImplementation*) impl)->isTicket();
}

bool TangibleObjectAdapter::isTicketCollector() {
	return ((TangibleObjectImplementation*) impl)->isTicketCollector();
}

bool TangibleObjectAdapter::isSurveyTool() {
	return ((TangibleObjectImplementation*) impl)->isSurveyTool();
}

void TangibleObjectAdapter::setPersistent(bool pers) {
	return ((TangibleObjectImplementation*) impl)->setPersistent(pers);
}

void TangibleObjectAdapter::setUpdated(bool upd) {
	return ((TangibleObjectImplementation*) impl)->setUpdated(upd);
}

void TangibleObjectAdapter::setConditionDamage(int damage) {
	return ((TangibleObjectImplementation*) impl)->setConditionDamage(damage);
}

SceneObject* TangibleObjectAdapter::getContainer() {
	return ((TangibleObjectImplementation*) impl)->getContainer();
}

unicode& TangibleObjectAdapter::getName() {
	return ((TangibleObjectImplementation*) impl)->getName();
}

string& TangibleObjectAdapter::getTemplateName() {
	return ((TangibleObjectImplementation*) impl)->getTemplateName();
}

string& TangibleObjectAdapter::getTemplateTypeName() {
	return ((TangibleObjectImplementation*) impl)->getTemplateTypeName();
}

string& TangibleObjectAdapter::getCustomizationString() {
	return ((TangibleObjectImplementation*) impl)->getCustomizationString();
}

int TangibleObjectAdapter::getObjectSubType() {
	return ((TangibleObjectImplementation*) impl)->getObjectSubType();
}

unsigned int TangibleObjectAdapter::getTemplateID() {
	return ((TangibleObjectImplementation*) impl)->getTemplateID();
}

int TangibleObjectAdapter::getObjectCount() {
	return ((TangibleObjectImplementation*) impl)->getObjectCount();
}

int TangibleObjectAdapter::getConditionDamage() {
	return ((TangibleObjectImplementation*) impl)->getConditionDamage();
}

int TangibleObjectAdapter::getMaxCondition() {
	return ((TangibleObjectImplementation*) impl)->getMaxCondition();
}

int TangibleObjectAdapter::getCondition() {
	return ((TangibleObjectImplementation*) impl)->getCondition();
}

/*
 *	TangibleObjectHelper
 */

ORBClassHelper* TangibleObjectHelper::instance = new TangibleObjectHelper();

TangibleObjectHelper::TangibleObjectHelper() {
	className = "TangibleObject";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* TangibleObjectHelper::getInstance() {
	if (instance == NULL)
		return instance = new TangibleObjectHelper();
	else
		return instance;
}

ORBObject* TangibleObjectHelper::instantiateObject() {
	return new TangibleObject();
}

ORBObjectAdapter* TangibleObjectHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new TangibleObjectAdapter((TangibleObjectImplementation*)obj);

	ORBObjectStub* stub = new TangibleObject(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	TangibleObjectServant
 */

TangibleObjectServant::TangibleObjectServant() : SceneObjectImplementation() {
	_classHelper = TangibleObjectHelper::getInstance();
}

TangibleObjectServant::TangibleObjectServant(unsigned long long oid) : SceneObjectImplementation(oid) {
	_classHelper = TangibleObjectHelper::getInstance();
}

TangibleObjectServant::~TangibleObjectServant() {
}

void TangibleObjectServant::_setStub(ORBObjectStub* stub) {
	_this = (TangibleObject*) stub;
	SceneObjectServant::_setStub(stub);
}

ORBObjectStub* TangibleObjectServant::_getStub() {
	return _this;
}

