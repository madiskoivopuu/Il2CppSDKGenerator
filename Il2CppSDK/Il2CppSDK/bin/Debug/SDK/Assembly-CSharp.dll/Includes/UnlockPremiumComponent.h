#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockPremiumComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockPremiumComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Season() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Cycle() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(UnlockPremiumComponent*, Il2CppObject*))(Il2CppBase() + 0x153AD48))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UnlockPremiumComponent*, uintptr_t))(Il2CppBase() + 0x153ADF4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UnlockPremiumComponent*, uintptr_t))(Il2CppBase() + 0x153AEBC))(this, writer);
	}

};

