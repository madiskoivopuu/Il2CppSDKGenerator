#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResultComponent"));
	}

	template <typename T = bool> T& Win() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& BonusReward() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ResultComponent*, uintptr_t))(Il2CppBase() + 0x119D548))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ResultComponent*, uintptr_t))(Il2CppBase() + 0x119D5E4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ResultComponent*, uintptr_t))(Il2CppBase() + 0x119D680))(this, writer);
	}

};

}
