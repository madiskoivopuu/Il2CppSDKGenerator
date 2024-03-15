#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapDestroyLocationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapDestroyLocationSystem"));
	}

	template <typename R = IMapWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MapDestroyLocationSystem*))(Il2CppBase() + 0x126C264))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MapDestroyLocationSystem*))(Il2CppBase() + 0x126C268))(this);
	}

};

