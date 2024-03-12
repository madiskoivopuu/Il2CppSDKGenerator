#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActorDeathData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActorDeathData"));
	}

	template <typename T = int32_t> T& EntityId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& AccountId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& TimeOut() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DamageStat() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ActorDeathData*, uintptr_t))(Il2CppBase() + 0x18AEDD4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ActorDeathData*, uintptr_t))(Il2CppBase() + 0x18AEE48))(this, reader);
	}

};

}
