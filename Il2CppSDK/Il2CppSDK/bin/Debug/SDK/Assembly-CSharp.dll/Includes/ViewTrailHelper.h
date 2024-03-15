#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HideHelperListener.h" 

class ViewTrailHelper : public HideHelperListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewTrailHelper"));
	}

	template <typename R = uintptr_t> R& _trail() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _end() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& _socketName() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Execute(GameEntity* entity, float deltaTime) {
		return ((R (*)(ViewTrailHelper*, GameEntity*, float))(Il2CppBase() + 0x15CD5AC))(this, entity, deltaTime);
	}

};

