#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWorldStatusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWorldStatusEntity"));
	}


	template <typename R = WorldStatusComponent*> R get_worldStatus() {
		return ((R (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasWorldStatus() {
		return ((R (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddWorldStatus(ProtoModels::WorldStatusType* newType) {
		return ((R (*)(IWorldStatusEntity*, ProtoModels::WorldStatusType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceWorldStatus(ProtoModels::WorldStatusType* newType) {
		return ((R (*)(IWorldStatusEntity*, ProtoModels::WorldStatusType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveWorldStatus() {
		return ((R (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

