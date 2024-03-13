#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass161
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass16_1"));
	}

	template <typename T = uintptr_t> T& onFailReinit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onSuccessReinit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Action2bool, Il2CppString*>*> T& 9__8() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T PurchaseWithIAPg__onClickResult|6(int32_t result) {
		return ((T (*)(cDisplayClass161*, int32_t))(Il2CppBase() + 0x111D754))(this, result);
	}
	template <typename T = void> T PurchaseWithIAPb__7() {
		return ((T (*)(cDisplayClass161*))(Il2CppBase() + 0x111D82C))(this);
	}
	template <typename T = void> T PurchaseWithIAPb__8(bool success, Il2CppString* error) {
		return ((T (*)(cDisplayClass161*, bool, Il2CppString*))(Il2CppBase() + 0x111D964))(this, success, error);
	}

};

