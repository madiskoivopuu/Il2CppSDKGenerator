#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Slot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Slot"));
	}

	 Il2CppList<ListGameObjects*>*& elemetsList() {
		return *(Il2CppList<ListGameObjects*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = ListGameObjects*> R ByIndex(int32_t idx_) {
		return ((R (*)(Slot*, int32_t))(Il2CppBase() + 0x22A2D38))(this, idx_);
	}
	template <typename R = int32_t> R get_Length() {
		return ((R (*)(Slot*))(Il2CppBase() + 0x22A2DAC))(this);
	}

};

