#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetSlotComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSlotComponent"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PetSlotComponent*, Il2CppObject*))(Il2CppBase() + 0x16EE264))(this, target);
	}

};

