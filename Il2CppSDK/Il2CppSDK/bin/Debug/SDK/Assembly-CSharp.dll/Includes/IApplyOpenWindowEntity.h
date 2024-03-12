#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyOpenWindowEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyOpenWindowEntity"));
	}


	template <typename T = uintptr_t> T get_applyOpenWindow() {
		return ((T (*)(IApplyOpenWindowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyOpenWindow() {
		return ((T (*)(IApplyOpenWindowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((T (*)(IApplyOpenWindowEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newArg);
	}
	template <typename T = void> T ReplaceApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((T (*)(IApplyOpenWindowEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newArg);
	}
	template <typename T = void> T RemoveApplyOpenWindow() {
		return ((T (*)(IApplyOpenWindowEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
