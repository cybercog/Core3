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
 *	server/zone/objects/waypoint/WaypointObject.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../scene/SceneObject.h"

#include "WaypointObject.h"

#include "WaypointObjectImplementation.h"

/*
 *	WaypointObjectStub
 */

WaypointObject::WaypointObject() : SceneObject(NULL) {
}

WaypointObject::WaypointObject(ORBObjectServant* obj) : SceneObject(obj) {
}

WaypointObject::WaypointObject(WaypointObject& ref) : SceneObject(ref) {
}

WaypointObject::~WaypointObject() {
}

WaypointObject* WaypointObject::clone() {
	return new WaypointObject(*this);
}


void WaypointObject::changeStatus(bool status) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addBooleanParameter(status);

		invocation.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->changeStatus(status);
}

void WaypointObject::setName(const string& Name) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addAsciiParameter(Name);

		invocation.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->setName(Name);
}

void WaypointObject::setPlanetName(const string& planet) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addAsciiParameter(planet);

		invocation.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->setPlanetName(planet);
}

void WaypointObject::switchStatus() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);

		invocation.executeWithVoidReturn();
	} else
		((WaypointObjectImplementation*) _impl)->switchStatus();
}

unsigned int WaypointObject::getPlanetCRC() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((WaypointObjectImplementation*) _impl)->getPlanetCRC();
}

bool WaypointObject::getStatus() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);

		return invocation.executeWithBooleanReturn();
	} else
		return ((WaypointObjectImplementation*) _impl)->getStatus();
}

string& WaypointObject::getName() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);

		invocation.executeWithAsciiReturn(_return_getName);
		return _return_getName;
	} else
		return ((WaypointObjectImplementation*) _impl)->getName();
}

string& WaypointObject::getPlanetName() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		invocation.executeWithAsciiReturn(_return_getPlanetName);
		return _return_getPlanetName;
	} else
		return ((WaypointObjectImplementation*) _impl)->getPlanetName();
}

/*
 *	WaypointObjectAdapter
 */

WaypointObjectAdapter::WaypointObjectAdapter(WaypointObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* WaypointObjectAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		changeStatus(inv->getBooleanParameter());
		break;
	case 7:
		setName(inv->getAsciiParameter(_param0_setName__string_));
		break;
	case 8:
		setPlanetName(inv->getAsciiParameter(_param0_setPlanetName__string_));
		break;
	case 9:
		switchStatus();
		break;
	case 10:
		resp->insertInt(getPlanetCRC());
		break;
	case 11:
		resp->insertBoolean(getStatus());
		break;
	case 12:
		resp->insertAscii(getName());
		break;
	case 13:
		resp->insertAscii(getPlanetName());
		break;
	default:
		return NULL;
	}

	return resp;
}

void WaypointObjectAdapter::changeStatus(bool status) {
	return ((WaypointObjectImplementation*) impl)->changeStatus(status);
}

void WaypointObjectAdapter::setName(const string& Name) {
	return ((WaypointObjectImplementation*) impl)->setName(Name);
}

void WaypointObjectAdapter::setPlanetName(const string& planet) {
	return ((WaypointObjectImplementation*) impl)->setPlanetName(planet);
}

void WaypointObjectAdapter::switchStatus() {
	return ((WaypointObjectImplementation*) impl)->switchStatus();
}

unsigned int WaypointObjectAdapter::getPlanetCRC() {
	return ((WaypointObjectImplementation*) impl)->getPlanetCRC();
}

bool WaypointObjectAdapter::getStatus() {
	return ((WaypointObjectImplementation*) impl)->getStatus();
}

string& WaypointObjectAdapter::getName() {
	return ((WaypointObjectImplementation*) impl)->getName();
}

string& WaypointObjectAdapter::getPlanetName() {
	return ((WaypointObjectImplementation*) impl)->getPlanetName();
}

/*
 *	WaypointObjectHelper
 */

ORBClassHelper* WaypointObjectHelper::instance = new WaypointObjectHelper();

WaypointObjectHelper::WaypointObjectHelper() {
	className = "WaypointObject";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* WaypointObjectHelper::getInstance() {
	if (instance == NULL)
		return instance = new WaypointObjectHelper();
	else
		return instance;
}

ORBObject* WaypointObjectHelper::instantiateObject() {
	return new WaypointObject();
}

ORBObjectAdapter* WaypointObjectHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new WaypointObjectAdapter((WaypointObjectImplementation*)obj);

	ORBObjectStub* stub = new WaypointObject(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	WaypointObjectServant
 */

WaypointObjectServant::WaypointObjectServant(unsigned long long oid) : SceneObjectImplementation(oid) {
	_classHelper = WaypointObjectHelper::getInstance();
}

WaypointObjectServant::~WaypointObjectServant() {
}

void WaypointObjectServant::_setStub(ORBObjectStub* stub) {
	_this = (WaypointObject*) stub;
	SceneObjectServant::_setStub(stub);
}

ORBObjectStub* WaypointObjectServant::_getStub() {
	return _this;
}

