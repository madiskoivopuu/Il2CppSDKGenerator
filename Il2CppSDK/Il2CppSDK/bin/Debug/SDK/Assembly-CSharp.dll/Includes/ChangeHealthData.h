#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeHealthData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeHealthData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& ActorId() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& SourceId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& Delta() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = float> R& Blocked() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Shielded() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = DamageType*> R& DamageType() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ActionType*> R& ActionType() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChangeHealthData*, uintptr_t))(Il2CppBase() + 0x13EA750))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChangeHealthData*, uintptr_t))(Il2CppBase() + 0x13EA804))(this, reader);
	}

};

