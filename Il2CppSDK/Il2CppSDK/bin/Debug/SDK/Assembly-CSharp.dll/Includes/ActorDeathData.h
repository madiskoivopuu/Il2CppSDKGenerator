#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActorDeathData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActorDeathData"));
	}

	template <typename R = int32_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& AccountId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& TimeOut() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = DamageStatType> R& DamageStat() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ActorDeathData*, uintptr_t))(Il2CppBase() + 0x18AEDD4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ActorDeathData*, uintptr_t))(Il2CppBase() + 0x18AEE48))(this, reader);
	}

};

