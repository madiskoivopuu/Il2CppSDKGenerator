#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Set() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Tags() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CooldownData*, uintptr_t))(Il2CppBase() + 0x1337964))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CooldownData*, uintptr_t))(Il2CppBase() + 0x13379F8))(this, reader);
	}

};

