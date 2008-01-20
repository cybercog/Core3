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
 *	server/chat/room/ChatRoom.h generated by Engine3 IDL compiler 0.51
 */

#ifndef CHATROOM_H_
#define CHATROOM_H_

#include "engine/orb/ObjectRequestBroker.h"

#include "engine/service/proto/BaseMessage.h"

class ZoneServer;

class Player;

class ChatRoom : public ORBObjectStub {
public:
	ChatRoom();
	ChatRoom(ORBObjectServant* obj);
	ChatRoom(ChatRoom& ref);

	ChatRoom* clone();

	virtual ~ChatRoom();

	void sendTo(Player* player);

	void sendDestroyTo(Player* player);

	void addSubRoom(ChatRoom* channel);

	void removeSubRoom(ChatRoom* channel);

	ChatRoom* getSubRoom(int i);

	ChatRoom* getSubRoom(const string& name);

	void addPlayer(Player* player, bool doLock = true);

	void removePlayer(Player* player, bool doLock = true);

	void removePlayer(const string& player);

	void broadcastMessage(BaseMessage* msg);

	bool hasPlayer(Player* player);

	bool hasPlayer(const string& name);

	void removeAllPlayers();

	void setPrivate();

	void setPublic();

	bool isPublic();

	bool isPrivate();

	Player* getPlayer(int idx);

	int getPlayerSize();

	void setName(const string& Name);

	string& getName();

	string& getFullPath();

	string& getOwner();

	string& getCreator();

	unicode& getTitle();

	string& getServerName();

	void setOwner(const string& Owner);

	void setCreator(const string& Creator);

	void setTitle(const string& Title);

	unsigned int getRoomID();

	int getSubRoomsSize();

	ChatRoom* getParent();

	int compareTo(ChatRoom* obj);

protected:
	string _return_getCreator;

	string _return_getFullPath;

	string _return_getName;

	string _return_getOwner;

	string _return_getServerName;

	unicode _return_getTitle;

};

class ChatRoomImplementation;

class ChatRoomAdapter : public ORBObjectAdapter {
public:
	ChatRoomAdapter(ChatRoomImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, ORBMethodInvocation* inv);

	void sendTo(Player* player);

	void sendDestroyTo(Player* player);

	void addSubRoom(ChatRoom* channel);

	void removeSubRoom(ChatRoom* channel);

	ChatRoom* getSubRoom(int i);

	ChatRoom* getSubRoom(const string& name);

	void addPlayer(Player* player, bool doLock);

	void removePlayer(Player* player, bool doLock);

	void removePlayer(const string& player);

	void broadcastMessage(BaseMessage* msg);

	bool hasPlayer(Player* player);

	bool hasPlayer(const string& name);

	void removeAllPlayers();

	void setPrivate();

	void setPublic();

	bool isPublic();

	bool isPrivate();

	Player* getPlayer(int idx);

	int getPlayerSize();

	void setName(const string& Name);

	string& getName();

	string& getFullPath();

	string& getOwner();

	string& getCreator();

	unicode& getTitle();

	string& getServerName();

	void setOwner(const string& Owner);

	void setCreator(const string& Creator);

	void setTitle(const string& Title);

	unsigned int getRoomID();

	int getSubRoomsSize();

	ChatRoom* getParent();

	int compareTo(ChatRoom* obj);

protected:
	string _param0_getSubRoom__string_;
	string _param0_removePlayer__string_;
	string _param0_hasPlayer__string_;
	string _param0_setName__string_;
	string _param0_setOwner__string_;
	string _param0_setCreator__string_;
	string _param0_setTitle__string_;
};

class ChatRoomHelper : public ORBClassHelper {
	static ORBClassHelper* instance;

public:
	ChatRoomHelper();

	static ORBClassHelper* getInstance();

	ORBObject* instantiateObject();

	ORBObjectAdapter* createAdapter(ORBObjectServant* obj);

};

class ChatRoomServant : public ORBObjectServant {
public:
	ChatRoom* _this;

public:
	ChatRoomServant();
	virtual ~ChatRoomServant();

	void _setStub(ORBObjectStub* stub);
	ORBObjectStub* _getStub();

};

#endif /*CHATROOM_H_*/
