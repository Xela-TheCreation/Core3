/*
 *	server/zone/objects/creature/CreatureObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "CreatureObject.h"

/*
 *	CreatureObjectStub
 */

CreatureObject::CreatureObject(LuaObject* templateData, SceneObject* parent) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new CreatureObjectImplementation(templateData, parent);
	_impl->_setStub(this);
}

CreatureObject::CreatureObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

CreatureObject::~CreatureObject() {
}

void CreatureObject::addSerializableVariables() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((CreatureObjectImplementation*) _impl)->addSerializableVariables();
}

int CreatureObject::getBankCredits() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithSignedIntReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getBankCredits();
}

int CreatureObject::getCashCredits() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithSignedIntReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getCashCredits();
}

int CreatureObject::getBaseHealthUpdateCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithSignedIntReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getBaseHealthUpdateCounter();
}

byte CreatureObject::getPosture() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithByteReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getPosture();
}

byte CreatureObject::getFactionRank() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithByteReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getFactionRank();
}

unsigned long long CreatureObject::getCreatureLinkID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getCreatureLinkID();
}

float CreatureObject::getShockWounds() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithFloatReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getShockWounds();
}

unsigned long long CreatureObject::getStateBitmask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getStateBitmask();
}

unsigned long long CreatureObject::getListenID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getListenID();
}

float CreatureObject::getSpeed() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithFloatReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getSpeed();
}

float CreatureObject::getTerrainNegotiation() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithFloatReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getTerrainNegotiation();
}

float CreatureObject::getAcceleration() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithFloatReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getAcceleration();
}

int CreatureObject::getLevel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithSignedIntReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getLevel();
}

String CreatureObject::getPerformanceAnimation() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		method.executeWithAsciiReturn(_return_getPerformanceAnimation);
		return _return_getPerformanceAnimation;
	} else
		return ((CreatureObjectImplementation*) _impl)->getPerformanceAnimation();
}

String CreatureObject::getMoodString() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		method.executeWithAsciiReturn(_return_getMoodString);
		return _return_getMoodString;
	} else
		return ((CreatureObjectImplementation*) _impl)->getMoodString();
}

unsigned long long CreatureObject::getWeaponID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getWeaponID();
}

unsigned long long CreatureObject::getGroupID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getGroupID();
}

unsigned long long CreatureObject::getGroupInviterID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getGroupInviterID();
}

unsigned long long CreatureObject::getGroupInviteCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getGroupInviteCounter();
}

int CreatureObject::getGuildID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithSignedIntReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getGuildID();
}

unsigned long long CreatureObject::getTargetID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getTargetID();
}

byte CreatureObject::getMoodID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithByteReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getMoodID();
}

int CreatureObject::getPerformanceCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithSignedIntReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getPerformanceCounter();
}

int CreatureObject::getInstrumentID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithSignedIntReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getInstrumentID();
}

byte CreatureObject::getFrozen() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithByteReturn();
	} else
		return ((CreatureObjectImplementation*) _impl)->getFrozen();
}

/*
 *	CreatureObjectImplementation
 */

CreatureObjectImplementation::~CreatureObjectImplementation() {
}

void CreatureObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CreatureObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CreatureObjectImplementation::_getStub() {
	return _this;
}

int CreatureObjectImplementation::getBankCredits() {
	// server/zone/objects/creature/CreatureObject.idl(122):  return this.bankCredits;
	return this->bankCredits;
}

int CreatureObjectImplementation::getCashCredits() {
	// server/zone/objects/creature/CreatureObject.idl(126):  return this.cashCredits;
	return this->cashCredits;
}

int CreatureObjectImplementation::getBaseHealthUpdateCounter() {
	// server/zone/objects/creature/CreatureObject.idl(134):  return baseHealthUpdateCounter;
	return baseHealthUpdateCounter;
}

byte CreatureObjectImplementation::getPosture() {
	// server/zone/objects/creature/CreatureObject.idl(138):  return this.posture;
	return this->posture;
}

byte CreatureObjectImplementation::getFactionRank() {
	// server/zone/objects/creature/CreatureObject.idl(142):  return this.factionRank;
	return this->factionRank;
}

unsigned long long CreatureObjectImplementation::getCreatureLinkID() {
	// server/zone/objects/creature/CreatureObject.idl(146):  return this.creatureLinkID;
	return this->creatureLinkID;
}

float CreatureObjectImplementation::getShockWounds() {
	// server/zone/objects/creature/CreatureObject.idl(150):  return this.shockWounds;
	return this->shockWounds;
}

unsigned long long CreatureObjectImplementation::getStateBitmask() {
	// server/zone/objects/creature/CreatureObject.idl(154):  return this.stateBitmask;
	return this->stateBitmask;
}

unsigned long long CreatureObjectImplementation::getListenID() {
	// server/zone/objects/creature/CreatureObject.idl(158):  return this.listenToID;
	return this->listenToID;
}

float CreatureObjectImplementation::getSpeed() {
	// server/zone/objects/creature/CreatureObject.idl(162):  return this.speed;
	return this->speed;
}

float CreatureObjectImplementation::getTerrainNegotiation() {
	// server/zone/objects/creature/CreatureObject.idl(166):  return this.terrainNegotiation;
	return this->terrainNegotiation;
}

float CreatureObjectImplementation::getAcceleration() {
	// server/zone/objects/creature/CreatureObject.idl(170):  return this.acceleration;
	return this->acceleration;
}

int CreatureObjectImplementation::getLevel() {
	// server/zone/objects/creature/CreatureObject.idl(174):  return this.level;
	return this->level;
}

String CreatureObjectImplementation::getPerformanceAnimation() {
	// server/zone/objects/creature/CreatureObject.idl(178):  return this.performanceAnimation;
	return this->performanceAnimation;
}

String CreatureObjectImplementation::getMoodString() {
	// server/zone/objects/creature/CreatureObject.idl(182):  return this.moodString;
	return this->moodString;
}

unsigned long long CreatureObjectImplementation::getWeaponID() {
	// server/zone/objects/creature/CreatureObject.idl(186):  return this.weaponID;
	return this->weaponID;
}

unsigned long long CreatureObjectImplementation::getGroupID() {
	// server/zone/objects/creature/CreatureObject.idl(190):  return this.groupID;
	return this->groupID;
}

unsigned long long CreatureObjectImplementation::getGroupInviterID() {
	// server/zone/objects/creature/CreatureObject.idl(194):  return this.groupInviterID;
	return this->groupInviterID;
}

unsigned long long CreatureObjectImplementation::getGroupInviteCounter() {
	// server/zone/objects/creature/CreatureObject.idl(198):  return this.groupInviteCounter;
	return this->groupInviteCounter;
}

int CreatureObjectImplementation::getGuildID() {
	// server/zone/objects/creature/CreatureObject.idl(202):  return this.guildID;
	return this->guildID;
}

unsigned long long CreatureObjectImplementation::getTargetID() {
	// server/zone/objects/creature/CreatureObject.idl(206):  return this.targetID;
	return this->targetID;
}

byte CreatureObjectImplementation::getMoodID() {
	// server/zone/objects/creature/CreatureObject.idl(210):  return this.moodID;
	return this->moodID;
}

int CreatureObjectImplementation::getPerformanceCounter() {
	// server/zone/objects/creature/CreatureObject.idl(214):  return this.performanceCounter;
	return this->performanceCounter;
}

int CreatureObjectImplementation::getInstrumentID() {
	// server/zone/objects/creature/CreatureObject.idl(218):  return instrumentID;
	return instrumentID;
}

byte CreatureObjectImplementation::getFrozen() {
	// server/zone/objects/creature/CreatureObject.idl(222):  return this.frozen;
	return this->frozen;
}

/*
 *	CreatureObjectAdapter
 */

CreatureObjectAdapter::CreatureObjectAdapter(CreatureObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* CreatureObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addSerializableVariables();
		break;
	case 7:
		resp->insertSignedInt(getBankCredits());
		break;
	case 8:
		resp->insertSignedInt(getCashCredits());
		break;
	case 9:
		resp->insertSignedInt(getBaseHealthUpdateCounter());
		break;
	case 10:
		resp->insertByte(getPosture());
		break;
	case 11:
		resp->insertByte(getFactionRank());
		break;
	case 12:
		resp->insertLong(getCreatureLinkID());
		break;
	case 13:
		resp->insertFloat(getShockWounds());
		break;
	case 14:
		resp->insertLong(getStateBitmask());
		break;
	case 15:
		resp->insertLong(getListenID());
		break;
	case 16:
		resp->insertFloat(getSpeed());
		break;
	case 17:
		resp->insertFloat(getTerrainNegotiation());
		break;
	case 18:
		resp->insertFloat(getAcceleration());
		break;
	case 19:
		resp->insertSignedInt(getLevel());
		break;
	case 20:
		resp->insertAscii(getPerformanceAnimation());
		break;
	case 21:
		resp->insertAscii(getMoodString());
		break;
	case 22:
		resp->insertLong(getWeaponID());
		break;
	case 23:
		resp->insertLong(getGroupID());
		break;
	case 24:
		resp->insertLong(getGroupInviterID());
		break;
	case 25:
		resp->insertLong(getGroupInviteCounter());
		break;
	case 26:
		resp->insertSignedInt(getGuildID());
		break;
	case 27:
		resp->insertLong(getTargetID());
		break;
	case 28:
		resp->insertByte(getMoodID());
		break;
	case 29:
		resp->insertSignedInt(getPerformanceCounter());
		break;
	case 30:
		resp->insertSignedInt(getInstrumentID());
		break;
	case 31:
		resp->insertByte(getFrozen());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CreatureObjectAdapter::addSerializableVariables() {
	return ((CreatureObjectImplementation*) impl)->addSerializableVariables();
}

int CreatureObjectAdapter::getBankCredits() {
	return ((CreatureObjectImplementation*) impl)->getBankCredits();
}

int CreatureObjectAdapter::getCashCredits() {
	return ((CreatureObjectImplementation*) impl)->getCashCredits();
}

int CreatureObjectAdapter::getBaseHealthUpdateCounter() {
	return ((CreatureObjectImplementation*) impl)->getBaseHealthUpdateCounter();
}

byte CreatureObjectAdapter::getPosture() {
	return ((CreatureObjectImplementation*) impl)->getPosture();
}

byte CreatureObjectAdapter::getFactionRank() {
	return ((CreatureObjectImplementation*) impl)->getFactionRank();
}

unsigned long long CreatureObjectAdapter::getCreatureLinkID() {
	return ((CreatureObjectImplementation*) impl)->getCreatureLinkID();
}

float CreatureObjectAdapter::getShockWounds() {
	return ((CreatureObjectImplementation*) impl)->getShockWounds();
}

unsigned long long CreatureObjectAdapter::getStateBitmask() {
	return ((CreatureObjectImplementation*) impl)->getStateBitmask();
}

unsigned long long CreatureObjectAdapter::getListenID() {
	return ((CreatureObjectImplementation*) impl)->getListenID();
}

float CreatureObjectAdapter::getSpeed() {
	return ((CreatureObjectImplementation*) impl)->getSpeed();
}

float CreatureObjectAdapter::getTerrainNegotiation() {
	return ((CreatureObjectImplementation*) impl)->getTerrainNegotiation();
}

float CreatureObjectAdapter::getAcceleration() {
	return ((CreatureObjectImplementation*) impl)->getAcceleration();
}

int CreatureObjectAdapter::getLevel() {
	return ((CreatureObjectImplementation*) impl)->getLevel();
}

String CreatureObjectAdapter::getPerformanceAnimation() {
	return ((CreatureObjectImplementation*) impl)->getPerformanceAnimation();
}

String CreatureObjectAdapter::getMoodString() {
	return ((CreatureObjectImplementation*) impl)->getMoodString();
}

unsigned long long CreatureObjectAdapter::getWeaponID() {
	return ((CreatureObjectImplementation*) impl)->getWeaponID();
}

unsigned long long CreatureObjectAdapter::getGroupID() {
	return ((CreatureObjectImplementation*) impl)->getGroupID();
}

unsigned long long CreatureObjectAdapter::getGroupInviterID() {
	return ((CreatureObjectImplementation*) impl)->getGroupInviterID();
}

unsigned long long CreatureObjectAdapter::getGroupInviteCounter() {
	return ((CreatureObjectImplementation*) impl)->getGroupInviteCounter();
}

int CreatureObjectAdapter::getGuildID() {
	return ((CreatureObjectImplementation*) impl)->getGuildID();
}

unsigned long long CreatureObjectAdapter::getTargetID() {
	return ((CreatureObjectImplementation*) impl)->getTargetID();
}

byte CreatureObjectAdapter::getMoodID() {
	return ((CreatureObjectImplementation*) impl)->getMoodID();
}

int CreatureObjectAdapter::getPerformanceCounter() {
	return ((CreatureObjectImplementation*) impl)->getPerformanceCounter();
}

int CreatureObjectAdapter::getInstrumentID() {
	return ((CreatureObjectImplementation*) impl)->getInstrumentID();
}

byte CreatureObjectAdapter::getFrozen() {
	return ((CreatureObjectImplementation*) impl)->getFrozen();
}

/*
 *	CreatureObjectHelper
 */

CreatureObjectHelper* CreatureObjectHelper::staticInitializer = CreatureObjectHelper::instance();

CreatureObjectHelper::CreatureObjectHelper() {
	className = "CreatureObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CreatureObjectHelper::finalizeHelper() {
	CreatureObjectHelper::finalize();
}

DistributedObject* CreatureObjectHelper::instantiateObject() {
	return new CreatureObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreatureObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreatureObjectAdapter((CreatureObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

