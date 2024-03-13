#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWorldStatusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWorldStatusEntity"));
	}


	template <typename T = WorldStatusComponent*> T get_worldStatus() {
		return ((T (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWorldStatus() {
		return ((T (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWorldStatus(WorldStatusType* newType) {
		return ((T (*)(IWorldStatusEntity*, WorldStatusType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceWorldStatus(WorldStatusType* newType) {
		return ((T (*)(IWorldStatusEntity*, WorldStatusType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveWorldStatus() {
		return ((T (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

