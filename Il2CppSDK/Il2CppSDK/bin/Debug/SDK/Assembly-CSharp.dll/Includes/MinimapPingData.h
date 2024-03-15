#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapPingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapPingData"));
	}

	template <typename R = float> R& XPos() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& YPos() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& OwnerId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MinimapPingData*, uintptr_t))(Il2CppBase() + 0x12D3A9C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MinimapPingData*, uintptr_t))(Il2CppBase() + 0x12D3B10))(this, reader);
	}

};

