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
	template <typename T = DamageDependType*> T& Depend() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& MaxValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = float> T GetDependValue(ICommonContexts* world, GameEntity* actor, GameEntity* target, MagicEntity* magic, EventEntity* eventEntity) {
		return ((T (*)(ApplyDamage*, ICommonContexts*, GameEntity*, GameEntity*, MagicEntity*, EventEntity*))(Il2CppBase() + 0x189370C))(this, world, actor, target, magic, eventEntity);
	}
	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyDamage*, Il2CppObject*))(Il2CppBase() + 0x1893E60))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ApplyDamage*, uintptr_t))(Il2CppBase() + 0x1893F24))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ApplyDamage*, uintptr_t))(Il2CppBase() + 0x1894050))(this, writer);
	}

};

