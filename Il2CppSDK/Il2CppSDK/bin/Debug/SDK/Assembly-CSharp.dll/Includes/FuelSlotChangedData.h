#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelSlotChangedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelSlotChangedData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ResourceCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& BurnTimeLeft() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FuelSlotChangedData*, uintptr_t))(Il2CppBase() + 0x15FEEEC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FuelSlotChangedData*, uintptr_t))(Il2CppBase() + 0x15FEF60))(this, reader);
	}

};

