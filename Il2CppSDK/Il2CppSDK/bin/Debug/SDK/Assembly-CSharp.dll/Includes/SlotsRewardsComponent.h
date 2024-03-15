#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotsRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotsRewardsComponent"));
	}

	template <typename R = Il2CppArray<Resource*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SlotsRewardsComponent*, uintptr_t))(Il2CppBase() + 0x148445C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SlotsRewardsComponent*, uintptr_t))(Il2CppBase() + 0x1484614))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SlotsRewardsComponent*, Il2CppObject*))(Il2CppBase() + 0x14846BC))(this, targetObject);
	}

};

