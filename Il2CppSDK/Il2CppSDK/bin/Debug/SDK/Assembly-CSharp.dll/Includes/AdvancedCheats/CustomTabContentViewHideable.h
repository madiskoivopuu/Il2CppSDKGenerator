#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../CustomTabContentView.h" 
namespace AdvancedCheats {

class CustomTabContentViewHideable : public CustomTabContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "CustomTabContentViewHideable"));
	}

	template <typename R = uintptr_t> R& cg() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = uintptr_t> R get_CG() {
		return ((R (*)(CustomTabContentViewHideable*))(Il2CppBase() + 0x163B900))(this);
	}
	template <typename R = void> R Show() {
		return ((R (*)(CustomTabContentViewHideable*))(Il2CppBase() + 0x163B9B4))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(CustomTabContentViewHideable*))(Il2CppBase() + 0x163B9CC))(this);
	}
	template <typename R = bool> R get_IsShown() {
		return ((R (*)(CustomTabContentViewHideable*))(Il2CppBase() + 0x163B9E4))(this);
	}

};

}
