#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InterruptActionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InterruptActionData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& Now() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(InterruptActionData*, uintptr_t))(Il2CppBase() + 0x146B0CC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(InterruptActionData*, uintptr_t))(Il2CppBase() + 0x146B120))(this, reader);
	}

};

