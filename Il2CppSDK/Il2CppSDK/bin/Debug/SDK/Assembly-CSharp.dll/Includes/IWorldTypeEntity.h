#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWorldTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWorldTypeEntity"));
	}


	template <typename R = WorldTypeComponent*> R get_worldType() {
		return ((R (*)(IWorldTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasWorldType() {
		return ((R (*)(IWorldTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddWorldType(WorldType* newType) {
		return ((R (*)(IWorldTypeEntity*, WorldType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceWorldType(WorldType* newType) {
		return ((R (*)(IWorldTypeEntity*, WorldType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveWorldType() {
		return ((R (*)(IWorldTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

