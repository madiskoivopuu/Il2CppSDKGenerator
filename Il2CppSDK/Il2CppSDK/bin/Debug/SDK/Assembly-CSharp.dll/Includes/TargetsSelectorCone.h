#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsSelectorCone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsSelectorCone"));
	}

	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Rotation() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TargetsSelectorCone*, uintptr_t))(Il2CppBase() + 0x16A6C88))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TargetsSelectorCone*, uintptr_t))(Il2CppBase() + 0x16A6D24))(this, writer);
	}

};

