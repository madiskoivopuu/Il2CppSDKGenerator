#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapDestroyLocationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapDestroyLocationSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MapDestroyLocationSystem*))(Il2CppBase() + 0x126C264))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MapDestroyLocationSystem*))(Il2CppBase() + 0x126C268))(this);
	}

};

}
