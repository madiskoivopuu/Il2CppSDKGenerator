#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeMarkerSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1GameEntity*>*& _entities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(TimeMarkerSystem*))(Il2CppBase() + 0x14F09C8))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(TimeMarkerSystem*))(Il2CppBase() + 0x14F0B0C))(this);
	}

};

