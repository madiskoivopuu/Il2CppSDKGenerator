#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingRunesData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingRunesData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ArmingRunesData*, uintptr_t))(Il2CppBase() + 0x1A5772C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ArmingRunesData*, uintptr_t))(Il2CppBase() + 0x1A57780))(this, reader);
	}

};

