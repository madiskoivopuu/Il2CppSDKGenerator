#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotsRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotsRewardsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SlotsRewardsComponent*, uintptr_t))(Il2CppBase() + 0x148445C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SlotsRewardsComponent*, uintptr_t))(Il2CppBase() + 0x1484614))(this, writer);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(SlotsRewardsComponent*, Il2CppObject*))(Il2CppBase() + 0x14846BC))(this, targetObject);
	}

};

