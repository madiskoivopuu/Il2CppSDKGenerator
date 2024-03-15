#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlaceOwnerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlaceOwnerEntity"));
	}


	template <typename R = PlaceOwnerComponent*> R get_placeOwner() {
		return ((R (*)(IPlaceOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPlaceOwner() {
		return ((R (*)(IPlaceOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPlaceOwner(int64_t newId) {
		return ((R (*)(IPlaceOwnerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplacePlaceOwner(int64_t newId) {
		return ((R (*)(IPlaceOwnerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemovePlaceOwner() {
		return ((R (*)(IPlaceOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

