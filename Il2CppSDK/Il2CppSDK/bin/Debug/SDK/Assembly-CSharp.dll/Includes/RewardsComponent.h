#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardsComponent"));
	}

	template <typename R = Il2CppArray<Resource>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& ProgressionLevel() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RewardsComponent*, Il2CppObject*))(Il2CppBase() + 0x11A20E0))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RewardsComponent*, uintptr_t))(Il2CppBase() + 0x11A2184))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RewardsComponent*, uintptr_t))(Il2CppBase() + 0x11A2304))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(RewardsComponent*, Il2CppObject*))(Il2CppBase() + 0x11A23B8))(this, blueprintComponent);
	}

};

