#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class CustomTabContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "CustomTabContentView"));
	}


	template <typename R = void> R Show() {
		return ((R (*)(CustomTabContentView*))(Il2CppBase() + 0x163B884))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(CustomTabContentView*))(Il2CppBase() + 0x163B8AC))(this);
	}
	template <typename R = bool> R get_IsShown() {
		return ((R (*)(CustomTabContentView*))(Il2CppBase() + 0x163B8D4))(this);
	}

};

}
