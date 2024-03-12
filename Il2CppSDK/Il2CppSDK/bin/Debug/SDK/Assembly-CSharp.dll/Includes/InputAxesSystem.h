#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputAxesSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputAxesSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> static T& HISTORY_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _koef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _inputs() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(InputAxesSystem*))(Il2CppBase() + 0x1E40130))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(InputAxesSystem*))(Il2CppBase() + 0x1E401AC))(this);
	}

};

}
