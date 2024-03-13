#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccumulativeExchangeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccumulativeExchangeWindowHelper"));
	}


	template <typename T = void> static T ShowAccumulativeExchangeWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x18E6BD4))(0, manager, targetId);
	}
	template <typename T = void> static T OnAccumulativeExchangeWindowResult(UIWindowsManager* manager, int32_t reward, Il2CppString* errorMsg) {
		return ((T (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x18E6C50))(0, manager, reward, errorMsg);
	}

};

