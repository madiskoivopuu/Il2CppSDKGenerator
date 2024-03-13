#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelUseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CancelUseData"));
	}

	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CancelUseData*, uintptr_t))(Il2CppBase() + 0x15B62F0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CancelUseData*, uintptr_t))(Il2CppBase() + 0x15B632C))(this, reader);
	}

};

