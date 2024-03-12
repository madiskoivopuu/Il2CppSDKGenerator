#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateAvatarSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateAvatarSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(CreateAvatarSystem*, void*))(Il2CppBase() + 0x134ABC8))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(CreateAvatarSystem*, uintptr_t))(Il2CppBase() + 0x134AC20))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(CreateAvatarSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x134AC3C))(this, entities);
	}
	template <typename T = void> T Executeb__4_1(uintptr_t w) {
		return ((T (*)(CreateAvatarSystem*, uintptr_t))(Il2CppBase() + 0x134BD80))(this, w);
	}
	template <typename T = void> T Executeb__4_2(uintptr_t w) {
		return ((T (*)(CreateAvatarSystem*, uintptr_t))(Il2CppBase() + 0x134BDD0))(this, w);
	}
	template <typename T = void> T Executeb__4_4(uintptr_t w2) {
		return ((T (*)(CreateAvatarSystem*, uintptr_t))(Il2CppBase() + 0x134BF78))(this, w2);
	}

};

}
