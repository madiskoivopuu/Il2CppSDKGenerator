#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../AdvancedCheats/CustomTabContentView.h" 
namespace AdvancedCheats {

class CustomTabContentViewHideable : public CustomTabContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "CustomTabContentViewHideable"));
	}

	template <typename T = uintptr_t> T& cg() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_CG() {
		return ((T (*)(CustomTabContentViewHideable*))(Il2CppBase() + 0x163B900))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(CustomTabContentViewHideable*))(Il2CppBase() + 0x163B9B4))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(CustomTabContentViewHideable*))(Il2CppBase() + 0x163B9CC))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(CustomTabContentViewHideable*))(Il2CppBase() + 0x163B9E4))(this);
	}

};

}
