#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDamage"));
	}

	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& MaxTargetPlayerHealthCoef() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& IgnoreDamageCoef() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = DamageDependType> R& Depend() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& MaxValue() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = float> R GetDependValue(ICommonContexts* world, GameEntity* actor, GameEntity* target, MagicEntity* magic, EventEntity* eventEntity) {
		return ((R (*)(ApplyDamage*, ICommonContexts*, GameEntity*, GameEntity*, MagicEntity*, EventEntity*))(Il2CppBase() + 0x189370C))(this, world, actor, target, magic, eventEntity);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyDamage*, Il2CppObject*))(Il2CppBase() + 0x1893E60))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ApplyDamage*, uintptr_t))(Il2CppBase() + 0x1893F24))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ApplyDamage*, uintptr_t))(Il2CppBase() + 0x1894050))(this, writer);
	}

};

