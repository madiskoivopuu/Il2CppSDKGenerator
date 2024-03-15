#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuseMountResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuseMountResultData"));
	}

	template <typename R = Result> R& Result() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& SlotId() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FuseMountResultData*, uintptr_t))(Il2CppBase() + 0x1601D80))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FuseMountResultData*, uintptr_t))(Il2CppBase() + 0x1601DD4))(this, reader);
	}

};

