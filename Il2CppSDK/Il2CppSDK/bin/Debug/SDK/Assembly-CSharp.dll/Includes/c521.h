#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class c521
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__52`1"));
	}

	 static c521T>*& 9() {
		return *(c521T>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Func2InventorySlotEntity*, int32_t>*& 9__52_0() {
		return *(Func2InventorySlotEntity*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Func2InventorySlotEntity*, int32_t>*& 9__52_1() {
		return *(Func2InventorySlotEntity*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Func2InventorySlotEntity*, int32_t>*& 9__52_2() {
		return *(Func2InventorySlotEntity*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R Sortb__52_0(InventorySlotEntity* i) {
		return ((R (*)(c521*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, i);
	}
	template <typename R = int32_t> R Sortb__52_1(InventorySlotEntity* i) {
		return ((R (*)(c521*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, i);
	}
	template <typename R = int32_t> R Sortb__52_2(InventorySlotEntity* i) {
		return ((R (*)(c521*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, i);
	}

};

