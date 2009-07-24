/*
 *	server/zone/objects/creature/CreatureObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef CREATUREOBJECT_H_
#define CREATUREOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject : public TangibleObject {
public:
	CreatureObject(LuaObject* templateData);

	void sendBaselinesTo(SceneObject* player);

	int getBankCredits();

	int getCashCredits();

	int getBaseHealth(int idx);

	unsigned int getBaseHealthUpdateCounter();

	int getWounds(int idx);

	unsigned int getWoundsUpdateCounter();

	unsigned int getEncumbrancesUpdateCounter();

	unsigned int getHamListUpdateCounter();

	int getHAM(int idx);

	unsigned int getMaxHamListUpdateCounter();

	int getMaxHAM(int idx);

	int getEncumbrance(int idx);

	byte getPosture();

	byte getFactionRank();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	unsigned long long getListenID();

	float getSpeed();

	float getTerrainNegotiation();

	float getAcceleration();

	int getLevel();

	String getPerformanceAnimation();

	String getMoodString();

	unsigned long long getWeaponID();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

	float getHeight();

	unsigned int getMovementCounter();

	void setHeight(float heigh);

protected:
	CreatureObject(DummyConstructorParameter* param);

	virtual ~CreatureObject();

	String _return_getMoodString;
	String _return_getPerformanceAnimation;

	friend class CreatureObjectHelper;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObjectImplementation : public TangibleObjectImplementation {
protected:
	int bankCredits;

	int cashCredits;

	int gender;

	int species;

	Vector<int >* baseHealth;

	unsigned int baseHealthUpdateCounter;

	byte posture;

	byte factionRank;

	unsigned long long creatureLinkID;

	float shockWounds;

	Vector<int >* wounds;

	unsigned int woundsUpdateCounter;

	unsigned long long stateBitmask;

	unsigned int movementCounter;

	Vector<int >* encumbrances;

	unsigned int encumbrancesUpdateCounter;

	float speed;

	float terrainNegotiation;

	float acceleration;

	float height;

	unsigned long long listenToID;

	short level;

	String performanceAnimation;

	String moodString;

	unsigned long long weaponID;

	unsigned long long groupID;

	unsigned long long groupInviterID;

	unsigned long long groupInviteCounter;

	int guildID;

	unsigned long long targetID;

	byte moodID;

	int performanceCounter;

	int instrumentID;

	Vector<int >* hamList;

	unsigned int hamListUpdateCounter;

	Vector<int >* maxHamList;

	unsigned int maxHamListUpdateCounter;

	byte frozen;

	String templateString;

public:
	CreatureObjectImplementation(LuaObject* templateData);

	void sendBaselinesTo(SceneObject* player);

	int getBankCredits();

	int getCashCredits();

	int getBaseHealth(int idx);

	unsigned int getBaseHealthUpdateCounter();

	int getWounds(int idx);

	unsigned int getWoundsUpdateCounter();

	unsigned int getEncumbrancesUpdateCounter();

	unsigned int getHamListUpdateCounter();

	int getHAM(int idx);

	unsigned int getMaxHamListUpdateCounter();

	int getMaxHAM(int idx);

	int getEncumbrance(int idx);

	byte getPosture();

	byte getFactionRank();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	unsigned long long getListenID();

	float getSpeed();

	float getTerrainNegotiation();

	float getAcceleration();

	int getLevel();

	String getPerformanceAnimation();

	String getMoodString();

	unsigned long long getWeaponID();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

	float getHeight();

	unsigned int getMovementCounter();

	void setHeight(float heigh);

	CreatureObject* _this;

	operator const CreatureObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~CreatureObjectImplementation();

	void _setStub(DistributedObjectStub* stub);

	void _serializationHelperMethod();

	friend class CreatureObject;
};

class CreatureObjectAdapter : public TangibleObjectAdapter {
public:
	CreatureObjectAdapter(CreatureObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendBaselinesTo(SceneObject* player);

	int getBankCredits();

	int getCashCredits();

	int getBaseHealth(int idx);

	unsigned int getBaseHealthUpdateCounter();

	int getWounds(int idx);

	unsigned int getWoundsUpdateCounter();

	unsigned int getEncumbrancesUpdateCounter();

	unsigned int getHamListUpdateCounter();

	int getHAM(int idx);

	unsigned int getMaxHamListUpdateCounter();

	int getMaxHAM(int idx);

	int getEncumbrance(int idx);

	byte getPosture();

	byte getFactionRank();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	unsigned long long getListenID();

	float getSpeed();

	float getTerrainNegotiation();

	float getAcceleration();

	int getLevel();

	String getPerformanceAnimation();

	String getMoodString();

	unsigned long long getWeaponID();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

	float getHeight();

	unsigned int getMovementCounter();

	void setHeight(float heigh);

};

class CreatureObjectHelper : public DistributedObjectClassHelper, public Singleton<CreatureObjectHelper> {
	static CreatureObjectHelper* staticInitializer;

public:
	CreatureObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CreatureObjectHelper>;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#endif /*CREATUREOBJECT_H_*/
