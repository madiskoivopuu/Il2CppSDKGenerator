#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideHeadData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideHeadData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Hide() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(HideHeadData*, uintptr_t))(Il2CppBase() + 0x1C3C148))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(HideHeadData*, uintptr_t))(Il2CppBase() + 0x1C3C19C))(this, reader);
	}

};

