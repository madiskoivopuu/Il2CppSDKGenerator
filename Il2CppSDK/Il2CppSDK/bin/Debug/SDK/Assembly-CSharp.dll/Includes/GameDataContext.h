#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class GameDataContext : public DataContext1<GameDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDataContext"));
	}

	template <typename T = Il2CppString*> static T& BACK_POINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityIndex2GameDataEntity*, Il2CppString*>*> T& _fogIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = EntityIndex2GameDataEntity*, PositionPlace*>*> T& _positionPlaceIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = EntityIndex2GameDataEntity*, Il2CppString*>*> T& _tagIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = EntityIndex2GameDataEntity*, WorldType*>*> T& _worldTypeIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = EntityIndex2GameDataEntity*, Il2CppString*>*> T& _personalGeneratorIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = IGroup1GameDataEntity*>*> T& _fogGroup() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = IGroup1GameDataEntity*>*> T& _builderGroup() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x1052EFC))(this);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((T (*)(GameDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x1053610))(this, blueprints);
	}
	template <typename T = HashSet1GameDataEntity*>*> T GetEntitiesWithFog(Il2CppString* name) {
		return ((T (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053904))(this, name);
	}
	template <typename T = HashSet1GameDataEntity*>*> T GetEntitiesWithPersonalGeneratorKey(Il2CppString* key) {
		return ((T (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053968))(this, key);
	}
	template <typename T = HashSet1GameDataEntity*>*> T GetEntitiesWithPositionPlace(PositionPlace* place) {
		return ((T (*)(GameDataContext*, PositionPlace*))(Il2CppBase() + 0x10539CC))(this, place);
	}
	template <typename T = HashSet1GameDataEntity*>*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053A30))(this, tag);
	}
	template <typename T = HashSet1GameDataEntity*>*> T GetEntitiesWithWorldType(WorldType* worldType) {
		return ((T (*)(GameDataContext*, WorldType*))(Il2CppBase() + 0x1053A94))(this, worldType);
	}
	template <typename T = GameDataEntity*> T GetEntityWithPlaceDistrict(PositionPlace* place) {
		return ((T (*)(GameDataContext*, PositionPlace*))(Il2CppBase() + 0x1053AF8))(this, place);
	}
	template <typename T = GameDataEntity*> T GetEntityWithPlaceHome(PositionPlace* place) {
		return ((T (*)(GameDataContext*, PositionPlace*))(Il2CppBase() + 0x1053C94))(this, place);
	}
	template <typename T = GameDataEntity*> T GetEntityWithPlaceAndQuad(PositionPlace* place, uint8_t quadId) {
		return ((T (*)(GameDataContext*, PositionPlace*, uint8_t))(Il2CppBase() + 0x1053E18))(this, place, quadId);
	}
	template <typename T = IGroup1GameDataEntity*>*> T GetFogGroup() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x1054040))(this);
	}
	template <typename T = IGroup1GameDataEntity*>*> T GetBuilderGroup() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x10540B8))(this);
	}
	template <typename T = GameDataEntity*> T get_avatarEntity() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x1054130))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x105420C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(GameDataContext*, bool))(Il2CppBase() + 0x1054228))(this, value);
	}
	template <typename T = GameDataEntity*> T get_draggedEntity() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x10543EC))(this);
	}
	template <typename T = bool> T get_isDragged() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x10544C8))(this);
	}
	template <typename T = void> T set_isDragged(bool value) {
		return ((T (*)(GameDataContext*, bool))(Il2CppBase() + 0x10544E4))(this, value);
	}

};

