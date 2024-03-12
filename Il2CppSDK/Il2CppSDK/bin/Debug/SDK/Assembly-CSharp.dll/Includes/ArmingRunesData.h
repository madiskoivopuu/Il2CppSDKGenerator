#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingRunesData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingRunesData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ArmingRunesData*, uintptr_t))(Il2CppBase() + 0x1A5772C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ArmingRunesData*, uintptr_t))(Il2CppBase() + 0x1A57780))(this, reader);
	}

};

}
