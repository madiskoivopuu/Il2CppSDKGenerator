#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DonationResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DonationResult"));
	}

	template <typename T = uintptr_t> T& ProgressType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& BaseAddPoints() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& SuperProc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ProcPoints() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& NewPoints() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DonationResult*, uintptr_t))(Il2CppBase() + 0x1302C20))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DonationResult*, uintptr_t))(Il2CppBase() + 0x1302C94))(this, reader);
	}

};

}
