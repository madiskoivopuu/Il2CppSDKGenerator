#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapCampSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapCampSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<int64_t, uintptr_t>*> T& _camps() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _campPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _players() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MapCampSystem*))(Il2CppBase() + 0x1268A90))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MapCampSystem*))(Il2CppBase() + 0x1268C04))(this);
	}

};

}
