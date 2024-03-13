#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class CooldownContext : public Context1<CooldownEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownContext"));
	}

	template <typename T = Il2CppString*> static T& SneakItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SneakCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PrimaryEntityIndex2CooldownEntity*, IntString*>*> T& _targetNameIndex() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = EntityIndex2CooldownEntity*, int32_t>*> T& _targetIndex() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = ITimeManager*> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = CooldownEntity*> T GetActiveCooldown(int32_t targetId, Il2CppString* name) {
		return ((T (*)(CooldownContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x13367E4))(this, targetId, name);
	}
	template <typename T = CooldownEntity*> T GetActiveCooldown_1(int32_t targetId, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(CooldownContext*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x133691C))(this, targetId, values);
	}
	template <typename T = HashSet1CooldownEntity*>*> T GetEntitiesForTarget(int32_t targetId) {
		return ((T (*)(CooldownContext*, int32_t))(Il2CppBase() + 0x1335D30))(this, targetId);
	}
	template <typename T = CooldownEntity*> T SetCooldown(int32_t targetId, Il2CppString* name, float duration, Il2CppArray<uintptr_t>* tags, int64_t startTime) {
		return ((T (*)(CooldownContext*, int32_t, Il2CppString*, float, Il2CppArray<uintptr_t>*, int64_t))(Il2CppBase() + 0x1336A10))(this, targetId, name, duration, tags, startTime);
	}
	template <typename T = CooldownEntity*> T StartCooldown(int32_t targetId, Il2CppString* name, float duration, Il2CppArray<uintptr_t>* tags, int64_t startTime) {
		return ((T (*)(CooldownContext*, int32_t, Il2CppString*, float, Il2CppArray<uintptr_t>*, int64_t))(Il2CppBase() + 0x133710C))(this, targetId, name, duration, tags, startTime);
	}
	template <typename T = void> T RemoveAllFromTarget(int32_t targetId) {
		return ((T (*)(CooldownContext*, int32_t))(Il2CppBase() + 0x1337300))(this, targetId);
	}
	template <typename T = void> T Remove(HashSet1CooldownEntity*>* cooldowns) {
		return ((T (*)(CooldownContext*, HashSet1CooldownEntity*>*))(Il2CppBase() + 0x1337318))(this, cooldowns);
	}

};

