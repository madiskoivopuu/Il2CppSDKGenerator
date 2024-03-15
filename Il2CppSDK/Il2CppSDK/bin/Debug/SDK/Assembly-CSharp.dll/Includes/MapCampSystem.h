#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapCampSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapCampSystem"));
	}

	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Il2CppDictionary<int64_t, uintptr_t>*& _camps() {
		return *(Il2CppDictionary<int64_t, uintptr_t>**)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _campPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 IGroup1GameEntity*>*& _players() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MapCampSystem*))(Il2CppBase() + 0x1268A90))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MapCampSystem*))(Il2CppBase() + 0x1268C04))(this);
	}

};

