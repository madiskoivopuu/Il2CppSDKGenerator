#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "GameDataEntity.h" 

class GameDataContext : public DataContext1<GameDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDataContext"));
	}

	template <typename R = Il2CppString*> static R& BACK_POINT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 EntityIndex2GameDataEntity*, Il2CppString*>*& _fogIndex() {
		return *(EntityIndex2GameDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x110);
	}
	 EntityIndex2GameDataEntity*, PositionPlace*>*& _positionPlaceIndex() {
		return *(EntityIndex2GameDataEntity*, PositionPlace*>**)((uintptr_t)this + 0x118);
	}
	 EntityIndex2GameDataEntity*, Il2CppString*>*& _tagIndex() {
		return *(EntityIndex2GameDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2GameDataEntity*, WorldType*>*& _worldTypeIndex() {
		return *(EntityIndex2GameDataEntity*, WorldType*>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2GameDataEntity*, Il2CppString*>*& _personalGeneratorIndex() {
		return *(EntityIndex2GameDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x130);
	}
	 IGroup1GameDataEntity*>*& _fogGroup() {
		return *(IGroup1GameDataEntity*>**)((uintptr_t)this + 0x138);
	}
	 IGroup1GameDataEntity*>*& _builderGroup() {
		return *(IGroup1GameDataEntity*>**)((uintptr_t)this + 0x140);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(GameDataContext*))(Il2CppBase() + 0x1052EFC))(this);
	}
	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(GameDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x1053610))(this, blueprints);
	}
	 HashSet1GameDataEntity*>* GetEntitiesWithFog(Il2CppString* name) {
		return ((HashSet1GameDataEntity*>* (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053904))(this, name);
	}
	 HashSet1GameDataEntity*>* GetEntitiesWithPersonalGeneratorKey(Il2CppString* key) {
		return ((HashSet1GameDataEntity*>* (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053968))(this, key);
	}
	 HashSet1GameDataEntity*>* GetEntitiesWithPositionPlace(PositionPlace* place) {
		return ((HashSet1GameDataEntity*>* (*)(GameDataContext*, PositionPlace*))(Il2CppBase() + 0x10539CC))(this, place);
	}
	 HashSet1GameDataEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1GameDataEntity*>* (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053A30))(this, tag);
	}
	 HashSet1GameDataEntity*>* GetEntitiesWithWorldType(WorldType* worldType) {
		return ((HashSet1GameDataEntity*>* (*)(GameDataContext*, WorldType*))(Il2CppBase() + 0x1053A94))(this, worldType);
	}
	template <typename R = GameDataEntity*> R GetEntityWithPlaceDistrict(PositionPlace* place) {
		return ((R (*)(GameDataContext*, PositionPlace*))(Il2CppBase() + 0x1053AF8))(this, place);
	}
	template <typename R = GameDataEntity*> R GetEntityWithPlaceHome(PositionPlace* place) {
		return ((R (*)(GameDataContext*, PositionPlace*))(Il2CppBase() + 0x1053C94))(this, place);
	}
	template <typename R = GameDataEntity*> R GetEntityWithPlaceAndQuad(PositionPlace* place, uint8_t quadId) {
		return ((R (*)(GameDataContext*, PositionPlace*, uint8_t))(Il2CppBase() + 0x1053E18))(this, place, quadId);
	}
	 IGroup1GameDataEntity*>* GetFogGroup() {
		return ((IGroup1GameDataEntity*>* (*)(GameDataContext*))(Il2CppBase() + 0x1054040))(this);
	}
	 IGroup1GameDataEntity*>* GetBuilderGroup() {
		return ((IGroup1GameDataEntity*>* (*)(GameDataContext*))(Il2CppBase() + 0x10540B8))(this);
	}
	template <typename R = GameDataEntity*> R get_avatarEntity() {
		return ((R (*)(GameDataContext*))(Il2CppBase() + 0x1054130))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(GameDataContext*))(Il2CppBase() + 0x105420C))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(GameDataContext*, bool))(Il2CppBase() + 0x1054228))(this, value);
	}
	template <typename R = GameDataEntity*> R get_draggedEntity() {
		return ((R (*)(GameDataContext*))(Il2CppBase() + 0x10543EC))(this);
	}
	template <typename R = bool> R get_isDragged() {
		return ((R (*)(GameDataContext*))(Il2CppBase() + 0x10544C8))(this);
	}
	template <typename R = void> R set_isDragged(bool value) {
		return ((R (*)(GameDataContext*, bool))(Il2CppBase() + 0x10544E4))(this, value);
	}

};

