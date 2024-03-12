#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDamage"));
	}

	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxTargetPlayerHealthCoef() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IgnoreDamageCoef() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Depend() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& MaxValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = float> T GetDependValue(uintptr_t world, uintptr_t actor, uintptr_t target, uintptr_t magic, uintptr_t eventEntity) {
		return ((T (*)(ApplyDamage*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x189370C))(this, world, actor, target, magic, eventEntity);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyDamage*, uintptr_t))(Il2CppBase() + 0x1893E60))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ApplyDamage*, uintptr_t))(Il2CppBase() + 0x1893F24))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ApplyDamage*, uintptr_t))(Il2CppBase() + 0x1894050))(this, writer);
	}

};

}
