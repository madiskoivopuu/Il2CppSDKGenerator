#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AvatarBusySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarBusySystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<bool>*> static R& _busyWindows() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Execute() {
		return ((R (*)(AvatarBusySystem*))(Il2CppBase() + 0xFB547C))(this);
	}

};

