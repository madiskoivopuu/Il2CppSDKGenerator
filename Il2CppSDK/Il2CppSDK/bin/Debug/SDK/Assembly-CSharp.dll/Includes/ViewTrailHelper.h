#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HideHelperListener" 

class ViewTrailHelper: HideHelperListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewTrailHelper"));
	}

	template <typename T = uintptr_t> T& _trail() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _end() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _socketName() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Execute(uintptr_t entity, float deltaTime) {
		return ((T (*)(ViewTrailHelper*, uintptr_t, float))(Il2CppBase() + 0x15CD5AC))(this, entity, deltaTime);
	}

};

}
