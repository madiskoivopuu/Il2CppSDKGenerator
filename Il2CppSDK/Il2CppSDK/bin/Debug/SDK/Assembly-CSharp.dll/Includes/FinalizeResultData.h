#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinalizeResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinalizeResultData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& ErrorMsg() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FinalizeResultData*, uintptr_t))(Il2CppBase() + 0x1693DC0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FinalizeResultData*, uintptr_t))(Il2CppBase() + 0x1693E14))(this, reader);
	}

};

