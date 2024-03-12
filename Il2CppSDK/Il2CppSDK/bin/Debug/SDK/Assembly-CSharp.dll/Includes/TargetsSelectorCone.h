#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsSelectorCone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsSelectorCone"));
	}

	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TargetsSelectorCone*, uintptr_t))(Il2CppBase() + 0x16A6C88))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TargetsSelectorCone*, uintptr_t))(Il2CppBase() + 0x16A6D24))(this, writer);
	}

};

}
