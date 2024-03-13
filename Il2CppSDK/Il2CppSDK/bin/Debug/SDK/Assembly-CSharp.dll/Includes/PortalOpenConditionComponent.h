#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalOpenConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalOpenConditionComponent"));
	}

	template <typename T = LobbyType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsOpen() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PortalOpenConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15770EC))(this, target);
	}

};

