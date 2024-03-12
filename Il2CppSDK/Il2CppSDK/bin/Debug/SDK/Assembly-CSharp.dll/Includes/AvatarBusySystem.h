#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AvatarBusySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarBusySystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _busyWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(AvatarBusySystem*))(Il2CppBase() + 0xFB547C))(this);
	}

};

}
