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
 *	server/zone/ZoneClient.cpp generated by Engine3 IDL compiler 0.51
 */

#include "objects/player/Player.h"

#include "ZoneClient.h"

#include "ZoneClientImplementation.h"

/*
 *	ZoneClientStub
 */

ZoneClient::ZoneClient() : ORBObjectStub(NULL) {
}

ZoneClient::ZoneClient(ORBObjectServant* obj) : ORBObjectStub(obj) {
}

ZoneClient::ZoneClient(ZoneClient& ref) : ORBObjectStub(ref) {
}

ZoneClient::~ZoneClient() {
}

ZoneClient* ZoneClient::clone() {
	return new ZoneClient(*this);
}


void ZoneClient::disconnect(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((ZoneClientImplementation*) _impl)->disconnect(doLock);
}

void ZoneClient::closeConnection(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((ZoneClientImplementation*) _impl)->closeConnection(doLock);
}

void ZoneClient::sendMessage(BaseMessage* msg) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(msg);

		invocation.executeWithVoidReturn();
	} else
		((ZoneClientImplementation*) _impl)->sendMessage(msg);
}

void ZoneClient::sendMessage(StandaloneBaseMessage* msg) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addObjectParameter(msg);

		invocation.executeWithVoidReturn();
	} else
		((ZoneClientImplementation*) _impl)->sendMessage(msg);
}

void ZoneClient::resetPacketCheckupTime() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);

		invocation.executeWithVoidReturn();
	} else
		((ZoneClientImplementation*) _impl)->resetPacketCheckupTime();
}

void ZoneClient::balancePacketCheckupTime() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);

		invocation.executeWithVoidReturn();
	} else
		((ZoneClientImplementation*) _impl)->balancePacketCheckupTime();
}

void ZoneClient::setPlayer(Player* player) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((ZoneClientImplementation*) _impl)->setPlayer(player);
}

Player* ZoneClient::getPlayer() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		return (Player*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneClientImplementation*) _impl)->getPlayer();
}

bool ZoneClient::isAvailable() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);

		return invocation.executeWithBooleanReturn();
	} else
		return ((ZoneClientImplementation*) _impl)->isAvailable();
}

string& ZoneClient::getAddress() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		invocation.executeWithAsciiReturn(_return_getAddress);
		return _return_getAddress;
	} else
		return ((ZoneClientImplementation*) _impl)->getAddress();
}

unsigned int ZoneClient::getSessionKey() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((ZoneClientImplementation*) _impl)->getSessionKey();
}

/*
 *	ZoneClientAdapter
 */

ZoneClientAdapter::ZoneClientAdapter(ZoneClientImplementation* obj) : ORBObjectAdapter((ORBObjectServant*) obj) {
}

Packet* ZoneClientAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		disconnect(inv->getBooleanParameter());
		break;
	case 7:
		closeConnection(inv->getBooleanParameter());
		break;
	case 8:
		sendMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 9:
		sendMessage((StandaloneBaseMessage*) inv->getObjectParameter());
		break;
	case 10:
		resetPacketCheckupTime();
		break;
	case 11:
		balancePacketCheckupTime();
		break;
	case 12:
		setPlayer((Player*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertLong(getPlayer()->_getORBObjectID());
		break;
	case 14:
		resp->insertBoolean(isAvailable());
		break;
	case 15:
		resp->insertAscii(getAddress());
		break;
	case 16:
		resp->insertInt(getSessionKey());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneClientAdapter::disconnect(bool doLock) {
	return ((ZoneClientImplementation*) impl)->disconnect(doLock);
}

void ZoneClientAdapter::closeConnection(bool doLock) {
	return ((ZoneClientImplementation*) impl)->closeConnection(doLock);
}

void ZoneClientAdapter::sendMessage(BaseMessage* msg) {
	return ((ZoneClientImplementation*) impl)->sendMessage(msg);
}

void ZoneClientAdapter::sendMessage(StandaloneBaseMessage* msg) {
	return ((ZoneClientImplementation*) impl)->sendMessage(msg);
}

void ZoneClientAdapter::resetPacketCheckupTime() {
	return ((ZoneClientImplementation*) impl)->resetPacketCheckupTime();
}

void ZoneClientAdapter::balancePacketCheckupTime() {
	return ((ZoneClientImplementation*) impl)->balancePacketCheckupTime();
}

void ZoneClientAdapter::setPlayer(Player* player) {
	return ((ZoneClientImplementation*) impl)->setPlayer(player);
}

Player* ZoneClientAdapter::getPlayer() {
	return ((ZoneClientImplementation*) impl)->getPlayer();
}

bool ZoneClientAdapter::isAvailable() {
	return ((ZoneClientImplementation*) impl)->isAvailable();
}

string& ZoneClientAdapter::getAddress() {
	return ((ZoneClientImplementation*) impl)->getAddress();
}

unsigned int ZoneClientAdapter::getSessionKey() {
	return ((ZoneClientImplementation*) impl)->getSessionKey();
}

/*
 *	ZoneClientHelper
 */

ORBClassHelper* ZoneClientHelper::instance = new ZoneClientHelper();

ZoneClientHelper::ZoneClientHelper() {
	className = "ZoneClient";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* ZoneClientHelper::getInstance() {
	if (instance == NULL)
		return instance = new ZoneClientHelper();
	else
		return instance;
}

ORBObject* ZoneClientHelper::instantiateObject() {
	return new ZoneClient();
}

ORBObjectAdapter* ZoneClientHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new ZoneClientAdapter((ZoneClientImplementation*)obj);

	ORBObjectStub* stub = new ZoneClient(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	ZoneClientServant
 */

ZoneClientServant::ZoneClientServant() {
	_classHelper = ZoneClientHelper::getInstance();
}

ZoneClientServant::~ZoneClientServant() {
}

void ZoneClientServant::_setStub(ORBObjectStub* stub) {
	_this = (ZoneClient*) stub;
}

ORBObjectStub* ZoneClientServant::_getStub() {
	return _this;
}

