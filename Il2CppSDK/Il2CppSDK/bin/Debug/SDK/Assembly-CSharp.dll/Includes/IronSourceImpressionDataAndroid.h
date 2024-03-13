#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceImpressionDataAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceImpressionDataAndroid"));
	}

	template <typename T = Action1IronSourceImpressionData*>*> T& OnImpressionSuccess() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Action1IronSourceImpressionData*>*> T& OnImpressionDataReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_OnImpressionSuccess(Action1IronSourceImpressionData*>* value) {
		return ((T (*)(IronSourceImpressionDataAndroid*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x10D5DBC))(this, value);
	}
	template <typename T = void> T remove_OnImpressionSuccess(Action1IronSourceImpressionData*>* value) {
		return ((T (*)(IronSourceImpressionDataAndroid*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x10D5E5C))(this, value);
	}
	template <typename T = void> T add_OnImpressionDataReady(Action1IronSourceImpressionData*>* value) {
		return ((T (*)(IronSourceImpressionDataAndroid*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x10D5EFC))(this, value);
	}
	template <typename T = void> T remove_OnImpressionDataReady(Action1IronSourceImpressionData*>* value) {
		return ((T (*)(IronSourceImpressionDataAndroid*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x10D5F9C))(this, value);
	}
	template <typename T = void> T onImpressionSuccess(Il2CppString* data) {
		return ((T (*)(IronSourceImpressionDataAndroid*, Il2CppString*))(Il2CppBase() + 0x10D65FC))(this, data);
	}
	template <typename T = void> T onImpressionDataReady(Il2CppString* data) {
		return ((T (*)(IronSourceImpressionDataAndroid*, Il2CppString*))(Il2CppBase() + 0x10D66A0))(this, data);
	}

};

