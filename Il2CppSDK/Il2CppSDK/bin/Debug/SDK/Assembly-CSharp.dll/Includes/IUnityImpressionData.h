#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityImpressionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityImpressionData"));
	}


	template <typename T = void> T add_OnImpressionDataReady(Action1IronSourceImpressionData*>* value) {
		return ((T (*)(IUnityImpressionData*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnImpressionDataReady(Action1IronSourceImpressionData*>* value) {
		return ((T (*)(IUnityImpressionData*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnImpressionSuccess(Action1IronSourceImpressionData*>* value) {
		return ((T (*)(IUnityImpressionData*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnImpressionSuccess(Action1IronSourceImpressionData*>* value) {
		return ((T (*)(IUnityImpressionData*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

