#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResultComponent"));
	}

	template <typename R = bool> R& Win() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& BonusReward() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ResultComponent*, Il2CppObject*))(Il2CppBase() + 0x119D548))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ResultComponent*, uintptr_t))(Il2CppBase() + 0x119D5E4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ResultComponent*, uintptr_t))(Il2CppBase() + 0x119D680))(this, writer);
	}

};

