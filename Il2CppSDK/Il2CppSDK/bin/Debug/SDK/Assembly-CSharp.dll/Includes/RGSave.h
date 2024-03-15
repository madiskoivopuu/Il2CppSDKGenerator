#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RGSave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSave"));
	}

	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& ResetTime() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RGSave*, uintptr_t))(Il2CppBase() + 0x10BF1D8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RGSave*, uintptr_t))(Il2CppBase() + 0x10BF274))(this, writer);
	}

};

