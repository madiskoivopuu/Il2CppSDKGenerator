#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICommonUnityWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICommonUnityWorld"));
	}


	template <typename T = InputContext*> T get_input() {
		return ((T (*)(ICommonUnityWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = UIWindowsManager*> T get_WindowsManager() {
		return ((T (*)(ICommonUnityWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ViewContainer() {
		return ((T (*)(ICommonUnityWorld*))(Il2CppBase() + 0x0))(this);
	}

};

