#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityImpressionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityImpressionData"));
	}


	template <typename R = void> R add_OnImpressionDataReady(Action1<IronSourceImpressionData*>* value) {
		return ((R (*)(IUnityImpressionData*, Action1<IronSourceImpressionData*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnImpressionDataReady(Action1<IronSourceImpressionData*>* value) {
		return ((R (*)(IUnityImpressionData*, Action1<IronSourceImpressionData*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnImpressionSuccess(Action1<IronSourceImpressionData*>* value) {
		return ((R (*)(IUnityImpressionData*, Action1<IronSourceImpressionData*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnImpressionSuccess(Action1<IronSourceImpressionData*>* value) {
		return ((R (*)(IUnityImpressionData*, Action1<IronSourceImpressionData*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

