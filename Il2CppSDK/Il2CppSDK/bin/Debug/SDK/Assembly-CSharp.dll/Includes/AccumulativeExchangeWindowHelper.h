#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccumulativeExchangeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccumulativeExchangeWindowHelper"));
	}


	template <typename R = void> static R ShowAccumulativeExchangeWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x18E6BD4))(0, manager, targetId);
	}
	template <typename R = void> static R OnAccumulativeExchangeWindowResult(UIWindowsManager* manager, int32_t reward, Il2CppString* errorMsg) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x18E6C50))(0, manager, reward, errorMsg);
	}

};

