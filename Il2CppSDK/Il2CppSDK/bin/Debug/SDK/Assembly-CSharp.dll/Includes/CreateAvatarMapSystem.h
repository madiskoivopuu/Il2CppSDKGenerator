#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateAvatarMapSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateAvatarMapSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(CreateAvatarMapSystem*, void*))(Il2CppBase() + 0x134AA38))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(CreateAvatarMapSystem*, uintptr_t))(Il2CppBase() + 0x134AA90))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(CreateAvatarMapSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x134AAAC))(this, entities);
	}

};

}
