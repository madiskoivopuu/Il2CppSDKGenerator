#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InterruptActionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InterruptActionData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Now() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(InterruptActionData*, uintptr_t))(Il2CppBase() + 0x146B0CC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(InterruptActionData*, uintptr_t))(Il2CppBase() + 0x146B120))(this, reader);
	}

};

