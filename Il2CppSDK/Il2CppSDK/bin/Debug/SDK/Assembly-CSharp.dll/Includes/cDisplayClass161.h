#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass161
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass16_1"));
	}

	template <typename R = uintptr_t> R& onFailReinit() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& onSuccessReinit() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action2bool, Il2CppString*>*& 9__8() {
		return *(Action2bool, Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R PurchaseWithIAPg__onClickResult|6(int32_t result) {
		return ((R (*)(cDisplayClass161*, int32_t))(Il2CppBase() + 0x111D754))(this, result);
	}
	template <typename R = void> R PurchaseWithIAPb__7() {
		return ((R (*)(cDisplayClass161*))(Il2CppBase() + 0x111D82C))(this);
	}
	template <typename R = void> R PurchaseWithIAPb__8(bool success, Il2CppString* error) {
		return ((R (*)(cDisplayClass161*, bool, Il2CppString*))(Il2CppBase() + 0x111D964))(this, success, error);
	}

};

