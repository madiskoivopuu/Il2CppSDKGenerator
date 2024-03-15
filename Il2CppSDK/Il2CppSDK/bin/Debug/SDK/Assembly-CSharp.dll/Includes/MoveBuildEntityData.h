#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveBuildEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveBuildEntityData"));
	}

	template <typename R = int32_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& PosX() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = float> R& PosY() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = uint8_t> R& Orientation() {
		return *(R*)((uintptr_t)this + 0xC);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MoveBuildEntityData*, uintptr_t))(Il2CppBase() + 0x1556870))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MoveBuildEntityData*, uintptr_t))(Il2CppBase() + 0x15568E4))(this, reader);
	}

};

