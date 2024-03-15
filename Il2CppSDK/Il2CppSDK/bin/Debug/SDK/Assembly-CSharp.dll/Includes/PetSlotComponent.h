#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetSlotComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSlotComponent"));
	}

	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PetSlotComponent*, Il2CppObject*))(Il2CppBase() + 0x16EE264))(this, target);
	}

};

