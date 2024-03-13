#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicEnterWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicEnterWindowHelper"));
	}


	template <typename T = CyclicEnterWindow*> static T ShowCyclicEnterWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1644DC0))(0, manager, targetId);
	}
	template <typename T = void> static T OnCyclicResponse(UIWindowsManager* manager, CyclicResponseData* data) {
		return ((T (*)(void *, UIWindowsManager*, CyclicResponseData*))(Il2CppBase() + 0x1644F1C))(0, manager, data);
	}

};

