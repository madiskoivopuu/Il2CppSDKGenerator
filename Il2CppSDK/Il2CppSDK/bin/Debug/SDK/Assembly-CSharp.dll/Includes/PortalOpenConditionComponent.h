#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalOpenConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalOpenConditionComponent"));
	}

	template <typename R = LobbyType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IsOpen() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PortalOpenConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15770EC))(this, target);
	}

};

