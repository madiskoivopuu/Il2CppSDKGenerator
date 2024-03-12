#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ProgressionLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(RewardsComponent*, uintptr_t))(Il2CppBase() + 0x11A20E0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RewardsComponent*, uintptr_t))(Il2CppBase() + 0x11A2184))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RewardsComponent*, uintptr_t))(Il2CppBase() + 0x11A2304))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(RewardsComponent*, uintptr_t))(Il2CppBase() + 0x11A23B8))(this, blueprintComponent);
	}

};

}
