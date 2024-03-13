#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockPremiumComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockPremiumComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Season() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Cycle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(UnlockPremiumComponent*, Il2CppObject*))(Il2CppBase() + 0x153AD48))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UnlockPremiumComponent*, uintptr_t))(Il2CppBase() + 0x153ADF4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UnlockPremiumComponent*, uintptr_t))(Il2CppBase() + 0x153AEBC))(this, writer);
	}

};

