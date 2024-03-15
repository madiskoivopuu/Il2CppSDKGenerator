#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapPingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapPingComponent"));
	}

	template <typename R = float> R& Lifetime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Radius() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MinimapPingComponent*, Il2CppObject*))(Il2CppBase() + 0x12D39F8))(this, targetObject);
	}

};

