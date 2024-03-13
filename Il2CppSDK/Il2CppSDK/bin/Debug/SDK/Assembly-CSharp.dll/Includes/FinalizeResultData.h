#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinalizeResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinalizeResultData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ErrorMsg() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FinalizeResultData*, uintptr_t))(Il2CppBase() + 0x1693DC0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FinalizeResultData*, uintptr_t))(Il2CppBase() + 0x1693E14))(this, reader);
	}

};

