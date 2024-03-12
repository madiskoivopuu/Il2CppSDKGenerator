#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityImpressionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityImpressionData"));
	}


	template <typename T = void> T add_OnImpressionDataReady(void* value) {
		return ((T (*)(IUnityImpressionData*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnImpressionDataReady(void* value) {
		return ((T (*)(IUnityImpressionData*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnImpressionSuccess(void* value) {
		return ((T (*)(IUnityImpressionData*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnImpressionSuccess(void* value) {
		return ((T (*)(IUnityImpressionData*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
