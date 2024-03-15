#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicEnterWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicEnterWindowHelper"));
	}


	template <typename R = CyclicEnterWindow*> static R ShowCyclicEnterWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1644DC0))(0, manager, targetId);
	}
	template <typename R = void> static R OnCyclicResponse(UIWindowsManager* manager, CyclicResponseData data) {
		return ((R (*)(void *, UIWindowsManager*, CyclicResponseData))(Il2CppBase() + 0x1644F1C))(0, manager, data);
	}

};

