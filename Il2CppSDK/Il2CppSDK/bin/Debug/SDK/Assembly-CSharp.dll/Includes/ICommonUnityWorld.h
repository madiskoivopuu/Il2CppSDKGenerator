#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICommonUnityWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICommonUnityWorld"));
	}


	template <typename R = InputContext*> R get_input() {
		return ((R (*)(ICommonUnityWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = UIWindowsManager*> R get_WindowsManager() {
		return ((R (*)(ICommonUnityWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_ViewContainer() {
		return ((R (*)(ICommonUnityWorld*))(Il2CppBase() + 0x0))(this);
	}

};

