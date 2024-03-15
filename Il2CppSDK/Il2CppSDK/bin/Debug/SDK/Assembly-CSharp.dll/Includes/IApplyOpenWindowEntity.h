#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyOpenWindowEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyOpenWindowEntity"));
	}


	template <typename R = ApplyOpenWindowComponent*> R get_applyOpenWindow() {
		return ((R (*)(IApplyOpenWindowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyOpenWindow() {
		return ((R (*)(IApplyOpenWindowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((R (*)(IApplyOpenWindowEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newArg);
	}
	template <typename R = void> R ReplaceApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((R (*)(IApplyOpenWindowEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newArg);
	}
	template <typename R = void> R RemoveApplyOpenWindow() {
		return ((R (*)(IApplyOpenWindowEntity*))(Il2CppBase() + 0x0))(this);
	}

};

