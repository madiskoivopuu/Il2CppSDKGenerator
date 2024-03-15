#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressionExchangeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressionExchangeWindowHelper"));
	}


	template <typename R = void> static R ShowProgressionExchangeWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x11B09D0))(0, manager, targetId);
	}
	template <typename R = void> static R OnProgressionExchangeResult(UIWindowsManager* manager, int32_t reward, Il2CppString* errorMsg) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x11B0A4C))(0, manager, reward, errorMsg);
	}

};

