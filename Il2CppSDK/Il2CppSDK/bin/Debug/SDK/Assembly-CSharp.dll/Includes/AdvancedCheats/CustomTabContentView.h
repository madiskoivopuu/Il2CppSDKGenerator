#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class CustomTabContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "CustomTabContentView"));
	}


	template <typename T = void> T Show() {
		return ((T (*)(CustomTabContentView*))(Il2CppBase() + 0x163B884))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(CustomTabContentView*))(Il2CppBase() + 0x163B8AC))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(CustomTabContentView*))(Il2CppBase() + 0x163B8D4))(this);
	}

};

}
