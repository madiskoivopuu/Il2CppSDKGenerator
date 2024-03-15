#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelSlotChangedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelSlotChangedData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ResourceCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& BurnTimeLeft() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FuelSlotChangedData*, uintptr_t))(Il2CppBase() + 0x15FEEEC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FuelSlotChangedData*, uintptr_t))(Il2CppBase() + 0x15FEF60))(this, reader);
	}

};

