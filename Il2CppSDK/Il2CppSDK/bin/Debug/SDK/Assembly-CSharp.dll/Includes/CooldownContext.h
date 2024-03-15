#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class CooldownContext : public Context1<CooldownEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownContext"));
	}

	template <typename R = Il2CppString*> static R& SneakItem() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& SneakCooldown() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 PrimaryEntityIndex2CooldownEntity*, IntString*>*& _targetNameIndex() {
		return *(PrimaryEntityIndex2CooldownEntity*, IntString*>**)((uintptr_t)this + 0xD0);
	}
	 EntityIndex2CooldownEntity*, int32_t>*& _targetIndex() {
		return *(EntityIndex2CooldownEntity*, int32_t>**)((uintptr_t)this + 0xD8);
	}
	template <typename R = ITimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0xE0);
	}

	template <typename R = CooldownEntity*> R GetActiveCooldown(int32_t targetId, Il2CppString* name) {
		return ((R (*)(CooldownContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x13367E4))(this, targetId, name);
	}
	template <typename R = CooldownEntity*> R GetActiveCooldown_1(int32_t targetId, Il2CppArray<NameFloat*>* values) {
		return ((R (*)(CooldownContext*, int32_t, Il2CppArray<NameFloat*>*))(Il2CppBase() + 0x133691C))(this, targetId, values);
	}
	 HashSet1CooldownEntity*>* GetEntitiesForTarget(int32_t targetId) {
		return ((HashSet1CooldownEntity*>* (*)(CooldownContext*, int32_t))(Il2CppBase() + 0x1335D30))(this, targetId);
	}
	template <typename R = CooldownEntity*> R SetCooldown(int32_t targetId, Il2CppString* name, float duration, Il2CppArray<Il2CppString*>* tags, int64_t startTime) {
		return ((R (*)(CooldownContext*, int32_t, Il2CppString*, float, Il2CppArray<Il2CppString*>*, int64_t))(Il2CppBase() + 0x1336A10))(this, targetId, name, duration, tags, startTime);
	}
	template <typename R = CooldownEntity*> R StartCooldown(int32_t targetId, Il2CppString* name, float duration, Il2CppArray<Il2CppString*>* tags, int64_t startTime) {
		return ((R (*)(CooldownContext*, int32_t, Il2CppString*, float, Il2CppArray<Il2CppString*>*, int64_t))(Il2CppBase() + 0x133710C))(this, targetId, name, duration, tags, startTime);
	}
	template <typename R = void> R RemoveAllFromTarget(int32_t targetId) {
		return ((R (*)(CooldownContext*, int32_t))(Il2CppBase() + 0x1337300))(this, targetId);
	}
	template <typename R = void> R Remove(HashSet1CooldownEntity*>* cooldowns) {
		return ((R (*)(CooldownContext*, HashSet1CooldownEntity*>*))(Il2CppBase() + 0x1337318))(this, cooldowns);
	}

};

