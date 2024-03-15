#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceImpressionDataAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceImpressionDataAndroid"));
	}

	 Action1IronSourceImpressionData*>*& OnImpressionSuccess() {
		return *(Action1IronSourceImpressionData*>**)((uintptr_t)this + 0x20);
	}
	 Action1IronSourceImpressionData*>*& OnImpressionDataReady() {
		return *(Action1IronSourceImpressionData*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R add_OnImpressionSuccess(Action1IronSourceImpressionData*>* value) {
		return ((R (*)(IronSourceImpressionDataAndroid*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x10D5DBC))(this, value);
	}
	template <typename R = void> R remove_OnImpressionSuccess(Action1IronSourceImpressionData*>* value) {
		return ((R (*)(IronSourceImpressionDataAndroid*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x10D5E5C))(this, value);
	}
	template <typename R = void> R add_OnImpressionDataReady(Action1IronSourceImpressionData*>* value) {
		return ((R (*)(IronSourceImpressionDataAndroid*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x10D5EFC))(this, value);
	}
	template <typename R = void> R remove_OnImpressionDataReady(Action1IronSourceImpressionData*>* value) {
		return ((R (*)(IronSourceImpressionDataAndroid*, Action1IronSourceImpressionData*>*))(Il2CppBase() + 0x10D5F9C))(this, value);
	}
	template <typename R = void> R onImpressionSuccess(Il2CppString* data) {
		return ((R (*)(IronSourceImpressionDataAndroid*, Il2CppString*))(Il2CppBase() + 0x10D65FC))(this, data);
	}
	template <typename R = void> R onImpressionDataReady(Il2CppString* data) {
		return ((R (*)(IronSourceImpressionDataAndroid*, Il2CppString*))(Il2CppBase() + 0x10D66A0))(this, data);
	}

};

