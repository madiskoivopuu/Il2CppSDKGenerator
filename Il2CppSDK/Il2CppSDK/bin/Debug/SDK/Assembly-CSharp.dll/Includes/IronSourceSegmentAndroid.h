#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceSegmentAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceSegmentAndroid"));
	}

	 Action1<Il2CppString*>*& OnSegmentRecieved() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R add_OnSegmentRecieved(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceSegmentAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10E55DC))(this, value);
	}
	template <typename R = void> R remove_OnSegmentRecieved(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceSegmentAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10E567C))(this, value);
	}
	template <typename R = void> R onSegmentRecieved(Il2CppString* segmentName) {
		return ((R (*)(IronSourceSegmentAndroid*, Il2CppString*))(Il2CppBase() + 0x10E5C30))(this, segmentName);
	}

};

