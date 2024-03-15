#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelUseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CancelUseData"));
	}

	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CancelUseData*, uintptr_t))(Il2CppBase() + 0x15B62F0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CancelUseData*, uintptr_t))(Il2CppBase() + 0x15B632C))(this, reader);
	}

};

