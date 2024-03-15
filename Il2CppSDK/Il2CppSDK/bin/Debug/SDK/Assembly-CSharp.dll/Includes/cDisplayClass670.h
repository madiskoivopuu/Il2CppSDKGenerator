#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass670
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass67_0"));
	}

	template <typename R = GameEntity*> R& avatar() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ICommonUnityWorld*> R& world() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& playerId() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = bool> R OnShowb__0(ItemEntity* c) {
		return ((R (*)(cDisplayClass670*, ItemEntity*))(Il2CppBase() + 0x10B2A30))(this, c);
	}
	template <typename R = bool> R OnShowb__1(ItemEntity* c) {
		return ((R (*)(cDisplayClass670*, ItemEntity*))(Il2CppBase() + 0x10B2AAC))(this, c);
	}

};

