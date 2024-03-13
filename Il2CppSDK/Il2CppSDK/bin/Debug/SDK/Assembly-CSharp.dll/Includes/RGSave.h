#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RGSave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSave"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& ResetTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RGSave*, uintptr_t))(Il2CppBase() + 0x10BF1D8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RGSave*, uintptr_t))(Il2CppBase() + 0x10BF274))(this, writer);
	}

};

