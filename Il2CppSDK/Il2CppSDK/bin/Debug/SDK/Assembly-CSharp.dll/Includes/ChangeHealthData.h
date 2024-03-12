#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeHealthData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeHealthData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& SourceId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Delta() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Blocked() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Shielded() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& DamageType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ActionType() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChangeHealthData*, uintptr_t))(Il2CppBase() + 0x13EA750))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChangeHealthData*, uintptr_t))(Il2CppBase() + 0x13EA804))(this, reader);
	}

};

}
