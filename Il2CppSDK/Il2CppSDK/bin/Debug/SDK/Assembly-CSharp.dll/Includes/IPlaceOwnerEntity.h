#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlaceOwnerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlaceOwnerEntity"));
	}


	template <typename T = PlaceOwnerComponent*> T get_placeOwner() {
		return ((T (*)(IPlaceOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPlaceOwner() {
		return ((T (*)(IPlaceOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPlaceOwner(int64_t newId) {
		return ((T (*)(IPlaceOwnerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplacePlaceOwner(int64_t newId) {
		return ((T (*)(IPlaceOwnerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemovePlaceOwner() {
		return ((T (*)(IPlaceOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

