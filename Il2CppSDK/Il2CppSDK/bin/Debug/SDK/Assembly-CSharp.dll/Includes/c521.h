#pragma once
#include <Il2Cpp/Il2Cpp.h>

class c521
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__52`1"));
	}

	template <typename T = c521uintptr_t>*> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Func2InventorySlotEntity*, int32_t>*> static T& 9__52_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Func2InventorySlotEntity*, int32_t>*> static T& 9__52_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Func2InventorySlotEntity*, int32_t>*> static T& 9__52_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T Sortb__52_0(InventorySlotEntity* i) {
		return ((T (*)(c521*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, i);
	}
	template <typename T = int32_t> T Sortb__52_1(InventorySlotEntity* i) {
		return ((T (*)(c521*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, i);
	}
	template <typename T = int32_t> T Sortb__52_2(InventorySlotEntity* i) {
		return ((T (*)(c521*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, i);
	}

};

