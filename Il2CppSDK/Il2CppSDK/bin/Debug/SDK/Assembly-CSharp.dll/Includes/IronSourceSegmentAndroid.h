#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceSegmentAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceSegmentAndroid"));
	}

	template <typename T = void*> T& OnSegmentRecieved() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T add_OnSegmentRecieved(void* value) {
		return ((T (*)(IronSourceSegmentAndroid*, void*))(Il2CppBase() + 0x10E55DC))(this, value);
	}
	template <typename T = void> T remove_OnSegmentRecieved(void* value) {
		return ((T (*)(IronSourceSegmentAndroid*, void*))(Il2CppBase() + 0x10E567C))(this, value);
	}
	template <typename T = void> T onSegmentRecieved(Il2CppString* segmentName) {
		return ((T (*)(IronSourceSegmentAndroid*, Il2CppString*))(Il2CppBase() + 0x10E5C30))(this, segmentName);
	}

};

}
