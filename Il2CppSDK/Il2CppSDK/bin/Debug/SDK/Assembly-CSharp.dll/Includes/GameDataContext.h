#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class GameDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDataContext"));
	}

	template <typename T = Il2CppString*> static T& BACK_POINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _fogIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& _positionPlaceIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _tagIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> T& _worldTypeIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> T& _personalGeneratorIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> T& _fogGroup() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = void*> T& _builderGroup() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x1052EFC))(this);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, uintptr_t>* blueprints) {
		return ((T (*)(GameDataContext*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1053610))(this, blueprints);
	}
	template <typename T = void*> T GetEntitiesWithFog(Il2CppString* name) {
		return ((T (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053904))(this, name);
	}
	template <typename T = void*> T GetEntitiesWithPersonalGeneratorKey(Il2CppString* key) {
		return ((T (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053968))(this, key);
	}
	template <typename T = void*> T GetEntitiesWithPositionPlace(uintptr_t place) {
		return ((T (*)(GameDataContext*, uintptr_t))(Il2CppBase() + 0x10539CC))(this, place);
	}
	template <typename T = void*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(GameDataContext*, Il2CppString*))(Il2CppBase() + 0x1053A30))(this, tag);
	}
	template <typename T = void*> T GetEntitiesWithWorldType(uintptr_t worldType) {
		return ((T (*)(GameDataContext*, uintptr_t))(Il2CppBase() + 0x1053A94))(this, worldType);
	}
	template <typename T = uintptr_t> T GetEntityWithPlaceDistrict(uintptr_t place) {
		return ((T (*)(GameDataContext*, uintptr_t))(Il2CppBase() + 0x1053AF8))(this, place);
	}
	template <typename T = uintptr_t> T GetEntityWithPlaceHome(uintptr_t place) {
		return ((T (*)(GameDataContext*, uintptr_t))(Il2CppBase() + 0x1053C94))(this, place);
	}
	template <typename T = uintptr_t> T GetEntityWithPlaceAndQuad(uintptr_t place, unsigned char quadId) {
		return ((T (*)(GameDataContext*, uintptr_t, unsigned char))(Il2CppBase() + 0x1053E18))(this, place, quadId);
	}
	template <typename T = void*> T GetFogGroup() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x1054040))(this);
	}
	template <typename T = void*> T GetBuilderGroup() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x10540B8))(this);
	}
	template <typename T = uintptr_t> T get_avatarEntity() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x1054130))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x105420C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(GameDataContext*, bool))(Il2CppBase() + 0x1054228))(this, value);
	}
	template <typename T = uintptr_t> T get_draggedEntity() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x10543EC))(this);
	}
	template <typename T = bool> T get_isDragged() {
		return ((T (*)(GameDataContext*))(Il2CppBase() + 0x10544C8))(this);
	}
	template <typename T = void> T set_isDragged(bool value) {
		return ((T (*)(GameDataContext*, bool))(Il2CppBase() + 0x10544E4))(this, value);
	}

};

}
