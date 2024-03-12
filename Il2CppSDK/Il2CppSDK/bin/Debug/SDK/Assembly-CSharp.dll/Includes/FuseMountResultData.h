#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuseMountResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuseMountResultData"));
	}

	template <typename T = uintptr_t> T& Result() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SlotId() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FuseMountResultData*, uintptr_t))(Il2CppBase() + 0x1601D80))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FuseMountResultData*, uintptr_t))(Il2CppBase() + 0x1601DD4))(this, reader);
	}

};

}
