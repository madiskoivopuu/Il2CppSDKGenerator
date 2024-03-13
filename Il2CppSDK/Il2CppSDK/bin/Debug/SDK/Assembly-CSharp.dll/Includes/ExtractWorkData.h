#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractWorkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractWorkData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Remove() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& RewardCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ResourceCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& RobbedResult() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& RobbedTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& RobberId() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ExtractWorkData*, uintptr_t))(Il2CppBase() + 0x168BA30))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ExtractWorkData*, uintptr_t))(Il2CppBase() + 0x168BAE4))(this, reader);
	}

};

