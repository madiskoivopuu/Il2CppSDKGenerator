#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LastDamagerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LastDamagerComponent"));
	}

	template <typename R = DamageStatType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& Tick() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LastDamagerComponent*, Il2CppObject*))(Il2CppBase() + 0x1429548))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LastDamagerComponent*, uintptr_t))(Il2CppBase() + 0x14295F8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LastDamagerComponent*, uintptr_t))(Il2CppBase() + 0x14296F8))(this, writer);
	}

};

