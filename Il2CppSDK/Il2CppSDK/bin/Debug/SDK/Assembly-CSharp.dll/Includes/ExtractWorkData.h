#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractWorkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractWorkData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Remove() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& RewardCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& ResourceCount() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& RobbedResult() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& RobbedTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& RobberId() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ExtractWorkData*, uintptr_t))(Il2CppBase() + 0x168BA30))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ExtractWorkData*, uintptr_t))(Il2CppBase() + 0x168BAE4))(this, reader);
	}

};

